#ifndef LOGINRESULT_H
#define LOGINRESULT_H

#include "Patterns/UpdateData.h"

class LoginResult : public UpdateData
{
public:
    LoginResult();

public:
    bool result;
};

#endif // LOGINRESULT_H
