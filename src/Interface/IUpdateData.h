#ifndef IUPDATEDATA_H
#define IUPDATEDATA_H

#include <QObject>

class QString;

class IUpdateData : public QObject
{
public:
    /*virtual QString getType() const = 0;

    virtual QString setType(const QString &type) = 0;*/

    virtual QString getName() const = 0;
};

#endif // IUPDATEDATA_H
