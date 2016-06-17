#include "Model.h"
#include "../Interface/IProxy.h"
#include <QList>

Model *Model::m_instance;

Model::Model()
{

}

Model *Model::getInstance()
{
    if (m_instance == NULL)
    {
        m_instance = new Model();
    }

    return m_instance;
}

void Model::registerProxy(IProxy *proxy)
{
    if (proxy == NULL)
    {
        return;
    }

    if (hasProxy(proxy->getProxyName()))
    {
        return;
    }

    m_proxyMap[proxy->getProxyName()] = proxy;
}

IProxy *Model::retrieveProxy(const QString &proxyName)
{
    if (!hasProxy(proxyName))
    {
        return NULL;
    }

    return m_proxyMap[proxyName];
}

bool Model::hasProxy(const QString &proxyName)
{
    return m_proxyMap.contains(proxyName);
}

void Model::removeProxy(const QString &proxyName)
{
    m_proxyMap.remove(proxyName);
}
