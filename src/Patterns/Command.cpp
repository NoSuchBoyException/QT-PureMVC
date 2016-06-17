#include "Command.h"

void Command::excute(INotification *notification)
{

}

void Command::notifyObserver(INotification *notification)
{
    excute(notification);
}
