#ifndef IFACADE_H
#define IFACADE_H

#include "INotifier.h"

class ICommand;
class IMediator;
class INotification;
class IObserver;
class IProxy;
class QString;

class IFacade : public INotifier
{
public:
    virtual void registerObserver(IObserver *observer, const QString &notificationName) = 0;

    virtual void removeObserver(const QString &notificationName) = 0;

    virtual void notifyObservers(INotification *notification) = 0;

    virtual void registerMediator(IMediator *mediator) = 0;

    virtual IMediator *retrieveMediator(const QString &mediatorName) = 0;

    virtual bool hasMediator(const QString &mediatorName) = 0;

    virtual void removeMediator(const QString &mediatorName) = 0;


    virtual void registerCommand(const QString &notificationName, ICommand *command) = 0;

    virtual bool hasCommand(const QString &notificationName) = 0;

    virtual void removeCommand(const QString &notificationName) = 0;


    virtual void registerProxy(IProxy *proxy) = 0;

    virtual IProxy *retrieveProxy(const QString &proxyName) = 0;

    virtual bool hasProxy(const QString &proxyName) = 0;

    virtual void removeProxy(const QString &proxyName) = 0;
};

#endif // IFACADE_H
