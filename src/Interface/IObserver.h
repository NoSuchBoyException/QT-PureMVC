#ifndef IOBSERVER_H
#define IOBSERVER_H

class INotification;

class IObserver
{
public:
    virtual void notifyObserver(INotification *notification) = 0;
};

#endif // IOBSERVER_H
