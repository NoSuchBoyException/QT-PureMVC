#ifndef PROXY_H
#define PROXY_H

#include "../Interface/IProxy.h"
#include "Notifier.h"

#include <QString>

class IUpdateData;

class Proxy : public IProxy, public Notifier
{
public:
    QString getProxyName();

/*protected:
    bool registerUpdateData(const QString &registerDataType, IUpdateData *updateData);*/

protected:
    static QString PROXY_NAME;
};

#endif // PROXY_H
