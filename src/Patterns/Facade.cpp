#include "Facade.h"
#include "../Interface/IModel.h"
#include "../Interface/IController.h"
#include "../Interface/IView.h"
#include "../Core/Model.h"
#include "../Core/Controller.h"
#include "../Core/View.h"
#include "Notification.h"

Facade *Facade::m_instance;

Facade::Facade()
{
    m_view = View::getInstance();
    m_model = Model::getInstance();
    m_controller = Controller::getInstance();

    initializeMediator();
    initializeCommand();
    initializeProxy();
}

Facade *Facade::getInstance()
{
    if (m_instance == NULL)
    {
        m_instance = new Facade();
    }

    return m_instance;
}

void Facade::initializeMediator()
{

}

void Facade::initializeCommand()
{

}

void Facade::initializeProxy()
{

}


void Facade::registerObserver(IObserver *observer, const QString &notificationName)
{
    m_view->registerObserver(observer, notificationName);
}

void Facade::removeObserver(const QString &notificationName)
{
    m_view->removeObserver(notificationName);
}

void Facade::notifyObservers(INotification *notification)
{
    m_view->notifyObservers(notification);
}


void Facade::registerMediator(IMediator *mediator)
{
    m_view->registerMediator(mediator);
}

IMediator *Facade::retrieveMediator(const QString &mediatorName)
{
    return m_view->retrieveMediator(mediatorName);
}

bool Facade::hasMediator(const QString &mediatorName)
{
    return m_view->hasMediator(mediatorName);
}

void Facade::removeMediator(const QString &mediatorName)
{
    m_view->removeMediator(mediatorName);
}



void Facade::registerCommand(const QString &notificationName, ICommand *command)
{
    m_controller->registerCommand(notificationName, command);
}

bool Facade::hasCommand(const QString &notificationName)
{
    return m_controller->hasCommand(notificationName);
}

void Facade::removeCommand(const QString &notificationName)
{
    m_controller->removeCommand(notificationName);
}


void Facade::registerProxy(IProxy *proxy)
{
    m_model->registerProxy(proxy);
}

IProxy *Facade::retrieveProxy(const QString &proxyName)
{
    return m_model->retrieveProxy(proxyName);
}

bool Facade::hasProxy(const QString &proxyName)
{
    return m_model->hasProxy(proxyName);
}

void Facade::removeProxy(const QString &proxyName)
{
    m_model->removeProxy(proxyName);
}

void Facade::sendNotification(const QString &notificationName, void *body)
{
    m_view->notifyObservers(new Notification(notificationName, body));
}

void Facade::startUp()
{
     initializeCommand();
     initializeProxy();
     initializeMediator();
}
