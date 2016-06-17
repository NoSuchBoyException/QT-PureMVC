#include "Notifier.h"
#include "../Interface/INotification.h"
#include "Facade.h"

Notifier::Notifier()
{
    m_facade = Facade::getInstance();
}

void Notifier::sendNotification(const QString &notificationName, void *body)
{
    m_facade->sendNotification(notificationName, body);
}
