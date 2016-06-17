#ifndef IMEDIATOR_H
#define IMEDIATOR_H

class INotification;
class IViewComponent;
class QString;

#include <QList>

class IMediator
{
public:
    virtual void registerViewComponent(IViewComponent *viewComponent) = 0;

    virtual QString getMediatorName() = 0;

    virtual QList<QString> getListNotificationInterests() = 0;

    virtual void handleNotification(INotification *notification) = 0;
};

#endif // IMEDIATOR_H
