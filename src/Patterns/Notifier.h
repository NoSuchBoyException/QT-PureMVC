#ifndef NOTIFIER_H
#define NOTIFIER_H

#include <QString>

class IFacade;
class INotification;

class Notifier
{
public:
    Notifier();

    void sendNotification(const QString &notificationName, void *body);

protected:
    IFacade *m_facade;
};

#endif // NOTIFIER_H
