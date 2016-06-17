#ifndef COMMAND_H
#define COMMAND_H

#include "../Interface/ICommand.h"
#include "../Interface/IObserver.h"

class Command : public ICommand, public IObserver
{
public:
    virtual void excute(INotification *notification);

    void notifyObserver(INotification *notification);
};

#endif // COMMAND_H
