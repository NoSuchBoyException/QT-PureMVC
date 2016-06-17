#include "View.h"
#include "../Interface/IMediator.h"
#include "../Interface/INotification.h"
#include "../Interface/IObserver.h"
#include "../Patterns/Mediator.h"

View *View::m_instance;

View::View()
{

}

View *View::getInstance()
{
    if (m_instance == NULL)
    {
        m_instance = new View();
    }

    return m_instance;
}

void View::registerObserver(IObserver *observer, const QString &notificationName)
{
    if (observer == NULL)
    {
        return;
    }

    if (m_observerMap.contains(notificationName))
    {
        QList<IObserver *> observers = m_observerMap[notificationName];
        if (observers.contains(observer))
        {
            return;
        }

        observers.append(observer);

        m_observerMap[notificationName] = observers;
    }
    else
    {
        QList<IObserver *> observers;

        observers.append(observer);

        m_observerMap[notificationName] = observers;
    }
}

void View::removeObserver(const QString &notificationName)
{
    if (!m_observerMap.contains(notificationName))
    {
        return;
    }

    m_observerMap.remove(notificationName);
}

void View::notifyObservers(INotification *notification)
{
    if (!m_observerMap.contains(notification->getNotificationName()))
    {
        return;
    }

    QList<IObserver *> observers = m_observerMap[notification->getNotificationName()];

    int count = observers.size();
    for (int i = 0; i < count; i++)
    {
        observers.at(i)->notifyObserver(notification);
    }
}

void View::registerMediator(IMediator *mediator)
{
    if (mediator == NULL)
    {
        return;
    }

    m_mediatorMap[mediator->getMediatorName()] = mediator;

    QList<QString> notificationInterests = mediator->getListNotificationInterests();

    int count = notificationInterests.size();
    for (int i = 0; i < count; i++)
    {
        registerObserver((IObserver *)((Mediator *)mediator), notificationInterests.at(i));
    }
}

IMediator *View::retrieveMediator(const QString &mediatorName)
{
    if (!hasMediator(mediatorName))
    {
        return NULL;
    }

    return m_mediatorMap[mediatorName];
}

bool View::hasMediator(const QString &mediatorName)
{
    return m_mediatorMap.contains(mediatorName);
}

void View::removeMediator(const QString &mediatorName)
{
    m_mediatorMap.remove(mediatorName);
}
