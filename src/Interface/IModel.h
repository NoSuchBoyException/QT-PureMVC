#ifndef IMODEL_H
#define IMODEL_H

class IProxy;
class QString;

class IModel
{
public:
    /**
     * Register an <c>IProxy</c> instance with the <c>Model</c>.
     * @param proxy A reference to the proxy object to be held by the <c>Model</c>.
     */
    virtual void registerProxy(IProxy *proxy) = 0;

    /**
     * Retrieve an <c>IProxy</c> instance from the Model.
     * @param proxyName The name of the proxy to retrieve.
     */
    virtual IProxy *retrieveProxy(const QString &proxyName) = 0;

    /**
     * Check if a Proxy is registered.
     * @param proxyName The name of the proxy to check for.
     * @return Whether a Proxy is currently registered with the given <c>proxyName</c>.
     */
    virtual bool hasProxy(const QString &proxyName) = 0;

    /**
     * Check if a Proxy is registered.
     * @param proxyName The name of the proxy to check for.
     * @return Whether a Proxy is currently registered with the given <c>proxyName</c>.
     */
    virtual void removeProxy(const QString &proxyName) = 0;
};

#endif // IMODEL_H
