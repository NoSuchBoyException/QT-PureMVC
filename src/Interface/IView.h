#ifndef IVIEW_H
#define IVIEW_H

class IMediator;
class INotification;
class IObserver;
class QString;

class IView
{
public:
    virtual void registerObserver(IObserver *observer, const QString &notificationName) = 0;

    virtual void removeObserver(const QString &notificationName) = 0;

    virtual void notifyObservers(INotification *notification) = 0;

    virtual void registerMediator(IMediator *mediator) = 0;

    virtual IMediator *retrieveMediator(const QString &mediatorName) = 0;

    virtual bool hasMediator(const QString &mediatorName) = 0;

    virtual void removeMediator(const QString &mediatorName) = 0;
};

#endif // IVIEW_H
