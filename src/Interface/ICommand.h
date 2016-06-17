#ifndef ICOMMAND_H
#define ICOMMAND_H

class INotification;

class ICommand
{
public:
    /**
     * Execute the <c>ICommand</c>'s logic to handle a given <c>INotification</c>.
     * @param notification An <c>INotification</c> to handle.
     */
    virtual void excute(INotification *notification) = 0;
};

#endif // ICOMMAND_H
