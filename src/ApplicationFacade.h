#ifndef APPLICATIONFACADE_H
#define APPLICATIONFACADE_H

#include "Patterns/Facade.h"

class ApplicationFacade : public Facade
{
public:
    ApplicationFacade();

protected:
    void initializeMediator();
    void initializeCommand();
    void initializeProxy();
};

#endif // APPLICATIONFACADE_H
