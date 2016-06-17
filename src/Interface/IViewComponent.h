#ifndef IVIEWCOMPONENT_H
#define IVIEWCOMPONENT_H

#include "IUpdateData.h"

class IViewComponent
{
public:
    virtual void update(IUpdateData *updateData) = 0;
};

#endif // IVIEWCOMPONENT_H
