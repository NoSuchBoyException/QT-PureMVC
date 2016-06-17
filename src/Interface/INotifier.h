#ifndef INOTIFIER_H
#define INOTIFIER_H

class QString;

class INotifier
{
public:
    virtual void sendNotification(const QString &notificationName, void *body) = 0;
};

#endif // INOTIFIER_H
