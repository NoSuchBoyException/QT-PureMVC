#ifndef FACADE_H
#define FACADE_H

#include <QString>
#include "../Interface/IFacade.h"
#include "../Interface/ICommand.h"
#include "../Interface/IMediator.h"
#include "../Interface/IObserver.h"
#include "../Interface/IProxy.h"

class IModel;
class IView;
class IController;

class Facade : public IFacade
{
public:
    static Facade *getInstance();

    void registerObserver(IObserver *observer, const QString &notificationName);

    void removeObserver(const QString &notificationName);

    void notifyObservers(INotification *notification);

    void registerMediator(IMediator *mediator);

    IMediator *retrieveMediator(const QString &mediatorName);

    bool hasMediator(const QString &mediatorName);

    void removeMediator(const QString &mediatorName);



    void registerCommand(const QString &notificationName, ICommand *command);

    bool hasCommand(const QString &notificationName);

    void removeCommand(const QString &notificationName);


    void registerProxy(IProxy *proxy);

    IProxy *retrieveProxy(const QString &proxyName);

    bool hasProxy(const QString &proxyName);

    void removeProxy(const QString &proxyName);


    void sendNotification(const QString &notificationName, void *body);

    void startUp();

protected:
    virtual void initializeMediator();
    virtual void initializeCommand();
    virtual void initializeProxy();

protected:
    Facade();

private:
    IView *m_view;
    IController *m_controller;
    IModel *m_model;
    static Facade *m_instance;
};

#endif // FACADE_H
