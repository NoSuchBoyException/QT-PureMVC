#include "LoginProxy.h"
#include "LoginResult.h"
#include "LoginInfo.h"

LoginProxy::LoginProxy()
{
    PROXY_NAME = "LoginProxy";
}

void LoginProxy::checkLogin(LoginInfo *loginInfo)
{
    LoginResult *loginResult = new LoginResult();

    QString name = loginInfo->name;
    QString passwd = loginInfo->password;
    if ((name == "AndroiderNWeber") && (passwd == "123456"))
    {
        loginResult->result = true;
    }
    else
    {
        loginResult->result = false;
    }

    sendNotification("login_success", (void *)loginResult);
}
