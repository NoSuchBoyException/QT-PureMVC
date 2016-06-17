#include "LoginCommand.h"
#include "Patterns/Facade.h"
#include "LoginProxy.h"
#include "LoginResult.h"
#include "Interface/INotification.h"

LoginCommand::LoginCommand()
{
}

void LoginCommand::excute(INotification *notification)
{
    LoginProxy *loginProxy = (LoginProxy *)Facade::getInstance()->retrieveProxy("LoginProxy");

    loginProxy->checkLogin((LoginInfo *)notification->getBody());
}
