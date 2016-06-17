#include "Notification.h"

Notification::Notification(const QString &notificationName, void *body)
{
    m_notificationName = notificationName;
    m_body = body;
}

QString Notification::getNotificationName()
{
    return m_notificationName;
}

void *Notification::getBody()
{
    return m_body;
}
