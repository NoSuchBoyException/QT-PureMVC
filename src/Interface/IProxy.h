#ifndef IPROXY_H
#define IPROXY_H

class QString;

class IProxy
{
public:
    /**
     * Get the name of the <c>IProxy</c> instance.
     * @return The <c>IProxy</c> instance name.
     */
    virtual QString getProxyName() = 0;
};

#endif // IPROXY_H
