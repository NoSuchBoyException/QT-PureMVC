#include "Mediator.h"
#include "../Interface/INotification.h"

QString Mediator::MEDIATOR_NAME = "Mediator";

void Mediator::registerViewComponent(IViewComponent *viewComponent)
{
    if (viewComponent == NULL)
    {
        return;
    }

    m_viewComponent = viewComponent;
}

QString Mediator::getMediatorName()
{
    return MEDIATOR_NAME;
}

void Mediator::notifyObserver(INotification *notification)
{
    handleNotification(notification);
}
