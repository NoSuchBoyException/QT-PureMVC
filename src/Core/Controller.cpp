#include "Controller.h"
#include "../Interface/ICommand.h"
#include "../Interface/INotification.h"
#include "view.h"

Controller *Controller::m_instance;

Controller::Controller()
{
    m_view = View::getInstance();
}

Controller *Controller::getInstance()
{
    if (m_instance == NULL)
    {
        m_instance = new Controller();
    }

    return m_instance;
}

void Controller::registerCommand(const QString &notificationName, ICommand *command)
{
    if (command == NULL)
    {
        return;
    }

    if (hasCommand(notificationName))
    {
        return;
    }

    m_commandMap[notificationName] = command;

    m_view->registerObserver((IObserver *)command, notificationName);
}

void Controller::excuteCommand(INotification *notification)
{
    if (!hasCommand(notification->getNotificationName()))
    {
        return;
    }

    ICommand *command = m_commandMap[notification->getNotificationName()];
    command->excute(notification);
}

bool Controller::hasCommand(const QString &notificationName)
{
    return m_commandMap.contains(notificationName);
}

void Controller::removeCommand(const QString &notificationName)
{
    m_commandMap.remove(notificationName);
}
