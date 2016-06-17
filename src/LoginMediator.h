#ifndef LOGINMEDIATOR_H
#define LOGINMEDIATOR_H

#include "Patterns/Mediator.h"

class LoginInfo;

class LoginMediator : public Mediator
{
public:
    LoginMediator();

    QList<QString> getListNotificationInterests();

    void handleNotification(INotification *notification);

    // special
    void doLogin(LoginInfo *loginInfo);

private:
    QList<QString> m_notificationInterests;
};

#endif // LOGINMEDIATOR_H
