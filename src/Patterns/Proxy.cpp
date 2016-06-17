#include "Proxy.h"
#include "../Interface/IUpdateData.h"

QString Proxy::PROXY_NAME = "Proxy";

QString Proxy::getProxyName()
{
    return PROXY_NAME;
}

/*bool Proxy::registerUpdateData(const QString &registerDataType, IUpdateData *updateData)
{

    updateData->setType(registerDataType);
}*/
