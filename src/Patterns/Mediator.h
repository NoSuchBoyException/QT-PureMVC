#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "../Interface/IMediator.h"
#include "../Interface/IObserver.h"
#include "../Interface/IViewComponent.h"
#include "Notifier.h"

#include <QString>

class Mediator : public IMediator, public Notifier, public IObserver
{
public:
    void registerViewComponent(IViewComponent *viewComponent);

    QString getMediatorName();

    virtual QList<QString> getListNotificationInterests() = 0;

    virtual void handleNotification(INotification *notification) = 0;

    void notifyObserver(INotification *notification);

protected:
    static QString MEDIATOR_NAME;
    IViewComponent *m_viewComponent;
};

#endif // MEDIATOR_H
