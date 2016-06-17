#ifndef VIEW_H
#define VIEW_H

#include "../Interface/IView.h"

#include <QString>
#include <QMap>
#include <QList>

class INotification;

class View : public IView
{
public:
    static View *getInstance();

    void registerObserver(IObserver *observer, const QString &notificationName);

    void removeObserver(const QString &notificationName);

    void notifyObservers(INotification *notification);

    void registerMediator(IMediator *mediator);

    IMediator *retrieveMediator(const QString &mediatorName);

    bool hasMediator(const QString &mediatorName);

    void removeMediator(const QString &mediatorName);

private:
    View();

private:
    QMap<QString, IMediator *> m_mediatorMap;
    QMap<QString, QList<IObserver *> > m_observerMap;
    static View *m_instance;
};

#endif // VIEW_H
