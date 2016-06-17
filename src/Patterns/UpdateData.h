#ifndef UPDATEDATA_H
#define UPDATEDATA_H

#include "../Interface/IUpdateData.h"

class UpdateData : public IUpdateData
{
public:
    /*QString getType() const;

    QString setType(const QString &type);*/

    QString getName() const;

protected:
    //QString m_updateDataType;
    QString m_updateDataName;
};

#endif // UPDATEDATA_H
