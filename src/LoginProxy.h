#ifndef LOGINPROXY_H
#define LOGINPROXY_H

#include "Patterns/Proxy.h"

class LoginInfo;

class LoginProxy : public Proxy
{
public:
    LoginProxy();

    void checkLogin(LoginInfo *loginInfo);
};

#endif // LOGINPROXY_H
