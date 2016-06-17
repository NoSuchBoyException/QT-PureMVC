#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include "../Interface/INotification.h"

#include <QString>

class Notification : public INotification
{
public:
    Notification(const QString &notificationName, void *body);

    QString getNotificationName();

    void *getBody();

protected:
    QString m_notificationName;
    void *m_body;
};

#endif // NOTIFICATION_H
