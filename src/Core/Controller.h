#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../Interface/IController.h"

#include <QString>
#include <QMap>

class IView;

class Controller : public IController
{
public:
    static Controller *getInstance();

    void registerCommand(const QString &notificationName, ICommand *command);

    void excuteCommand(INotification *notification);

    bool hasCommand(const QString &notificationName);

    void removeCommand(const QString &notificationName);

private:
    Controller();

private:
    QMap<QString, ICommand *> m_commandMap;
    static Controller *m_instance;
    IView *m_view;
};

#endif // CONTROLLER_H
