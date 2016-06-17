#ifndef INOTIFICATION_H
#define INOTIFICATION_H

class QString;

class INotification
{
public:
    /**
     * Get the name of the INotification instance.
     * @return The name of the INotification instance
     */
    virtual QString getNotificationName() = 0;

    /**
     * Get the body of the INotification instance.
     * @return The body of the INotification instance
     */
    virtual void *getBody() = 0;
};

#endif // INOTIFICATION_H
