#ifndef MODEL_H
#define MODEL_H

#include "../Interface/IModel.h"

#include <QMap>
#include <QString>

class Model : public IModel
{
public:
    static Model *getInstance();

    void registerProxy(IProxy *proxy);

    IProxy *retrieveProxy(const QString &proxyName);

    bool hasProxy(const QString &proxyName);

    void removeProxy(const QString &proxyName);

private:
    Model();

private:
    QMap<QString, IProxy *> m_proxyMap;
    static Model *m_instance;
};

#endif // MODEL_H
