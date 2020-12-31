

#include "huaweicloud/evs/model/QuotaDetailSnapshots.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




QuotaDetailSnapshots::QuotaDetailSnapshots()
{
    inUse_ = 0;
    inUseIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    reserved_ = 0;
    reservedIsSet_ = false;
    allocated_ = "";
    allocatedIsSet_ = false;
}

QuotaDetailSnapshots::~QuotaDetailSnapshots() = default;

void QuotaDetailSnapshots::validate()
{
}

web::json::value QuotaDetailSnapshots::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inUseIsSet_) {
        val[utility::conversions::to_string_t("in_use")] = ModelBase::toJson(inUse_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(reservedIsSet_) {
        val[utility::conversions::to_string_t("reserved")] = ModelBase::toJson(reserved_);
    }
    if(allocatedIsSet_) {
        val[utility::conversions::to_string_t("allocated")] = ModelBase::toJson(allocated_);
    }

    return val;
}

bool QuotaDetailSnapshots::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("in_use"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_use"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInUse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserved"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserved(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allocated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allocated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllocated(refVal);
        }
    }
    return ok;
}


int32_t QuotaDetailSnapshots::getInUse() const
{
    return inUse_;
}

void QuotaDetailSnapshots::setInUse(int32_t value)
{
    inUse_ = value;
    inUseIsSet_ = true;
}

bool QuotaDetailSnapshots::inUseIsSet() const
{
    return inUseIsSet_;
}

void QuotaDetailSnapshots::unsetinUse()
{
    inUseIsSet_ = false;
}

int32_t QuotaDetailSnapshots::getLimit() const
{
    return limit_;
}

void QuotaDetailSnapshots::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool QuotaDetailSnapshots::limitIsSet() const
{
    return limitIsSet_;
}

void QuotaDetailSnapshots::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t QuotaDetailSnapshots::getReserved() const
{
    return reserved_;
}

void QuotaDetailSnapshots::setReserved(int32_t value)
{
    reserved_ = value;
    reservedIsSet_ = true;
}

bool QuotaDetailSnapshots::reservedIsSet() const
{
    return reservedIsSet_;
}

void QuotaDetailSnapshots::unsetreserved()
{
    reservedIsSet_ = false;
}

std::string QuotaDetailSnapshots::getAllocated() const
{
    return allocated_;
}

void QuotaDetailSnapshots::setAllocated(const std::string& value)
{
    allocated_ = value;
    allocatedIsSet_ = true;
}

bool QuotaDetailSnapshots::allocatedIsSet() const
{
    return allocatedIsSet_;
}

void QuotaDetailSnapshots::unsetallocated()
{
    allocatedIsSet_ = false;
}

}
}
}
}
}


