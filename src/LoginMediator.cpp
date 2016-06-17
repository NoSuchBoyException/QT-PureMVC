#include "LoginMediator.h"
#include "Interface/INotification.h"
#include "LoginInfo.h"
#include "LoginResult.h"

#include <QDebug>

LoginMediator::LoginMediator()
{
    MEDIATOR_NAME = "LoginMediator";

    m_notificationInterests.append("login_success");
    m_notificationInterests.append("login_error");
}

QList<QString> LoginMediator::getListNotificationInterests()
{
    return m_notificationInterests;
}

void LoginMediator::handleNotification(INotification *notification)
{
    if (notification->getNotificationName() == "login_success")
    {
        m_viewComponent->update((IUpdateData *)notification->getBody());
    }
}

void LoginMediator::doLogin(LoginInfo *loginInfo)
{
    sendNotification("login_check", loginInfo);
}
