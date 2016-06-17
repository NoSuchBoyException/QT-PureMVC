#ifndef ICONTROLLER_H
#define ICONTROLLER_H

class ICommand;
class INotification;
class QString;

class IController
{
public:
    /**
     * Register a particular <c>ICommand</c> class as the handler for a particular <c>INotification</c>.
     * @param notificationName The name of the <c>INotification</c>.
     * @param command The <c>ICommand</c> to handle the <c>INotification</c>.
     */
    virtual void registerCommand(const QString &notificationName, ICommand *command) = 0;

    /**
     * Execute the <c>ICommand</c> previously registered as the handler for <c>INotification</c>s with the given notification name.
     * @param notification The <c>INotification</c> to execute the associated <c>ICommand</c> for.
     */
    virtual void excuteCommand(INotification *notification) = 0;

    /**
     * Check if a Command is registered for a given Notification.
     * @param notificationName The name of the <c>INotification</c>.
     * return Whether a Command is currently registered for the given notificationName
     */
    virtual bool hasCommand(const QString &notificationName) = 0;

    /**
     * Remove a previously registered <c>ICommand</c> to <c>INotification</c> mapping.
     * @param notificationName The name of the INotification.
     * return Whether a Command is currently registered for the given notificationName
     */
    virtual void removeCommand(const QString &notificationName) = 0;
};

#endif // ICONTROLLER_H
