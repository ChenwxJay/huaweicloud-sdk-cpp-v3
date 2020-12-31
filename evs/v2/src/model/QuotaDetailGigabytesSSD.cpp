

#include "huaweicloud/evs/model/QuotaDetailGigabytesSSD.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




QuotaDetailGigabytesSSD::QuotaDetailGigabytesSSD()
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

QuotaDetailGigabytesSSD::~QuotaDetailGigabytesSSD() = default;

void QuotaDetailGigabytesSSD::validate()
{
}

web::json::value QuotaDetailGigabytesSSD::toJson() const
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

bool QuotaDetailGigabytesSSD::fromJson(const web::json::value& val)
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


int32_t QuotaDetailGigabytesSSD::getInUse() const
{
    return inUse_;
}

void QuotaDetailGigabytesSSD::setInUse(int32_t value)
{
    inUse_ = value;
    inUseIsSet_ = true;
}

bool QuotaDetailGigabytesSSD::inUseIsSet() const
{
    return inUseIsSet_;
}

void QuotaDetailGigabytesSSD::unsetinUse()
{
    inUseIsSet_ = false;
}

int32_t QuotaDetailGigabytesSSD::getLimit() const
{
    return limit_;
}

void QuotaDetailGigabytesSSD::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool QuotaDetailGigabytesSSD::limitIsSet() const
{
    return limitIsSet_;
}

void QuotaDetailGigabytesSSD::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t QuotaDetailGigabytesSSD::getReserved() const
{
    return reserved_;
}

void QuotaDetailGigabytesSSD::setReserved(int32_t value)
{
    reserved_ = value;
    reservedIsSet_ = true;
}

bool QuotaDetailGigabytesSSD::reservedIsSet() const
{
    return reservedIsSet_;
}

void QuotaDetailGigabytesSSD::unsetreserved()
{
    reservedIsSet_ = false;
}

std::string QuotaDetailGigabytesSSD::getAllocated() const
{
    return allocated_;
}

void QuotaDetailGigabytesSSD::setAllocated(const std::string& value)
{
    allocated_ = value;
    allocatedIsSet_ = true;
}

bool QuotaDetailGigabytesSSD::allocatedIsSet() const
{
    return allocatedIsSet_;
}

void QuotaDetailGigabytesSSD::unsetallocated()
{
    allocatedIsSet_ = false;
}

}
}
}
}
}


