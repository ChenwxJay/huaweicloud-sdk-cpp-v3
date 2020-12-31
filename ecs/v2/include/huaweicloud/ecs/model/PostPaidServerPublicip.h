
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerPublicip_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerPublicip_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include "huaweicloud/ecs/model/PostPaidServerEip.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  PostPaidServerPublicip
    : public ModelBase
{
public:
    PostPaidServerPublicip();
    virtual ~PostPaidServerPublicip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostPaidServerPublicip members

    /// <summary>
    /// 为待创建云服务器分配已有弹性IP时，分配的弹性IP的ID，UUID格式。  约束：只能分配状态（status）为DOWN的弹性IP。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PostPaidServerEip getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(const PostPaidServerEip& value);


protected:
    std::string id_;
    bool idIsSet_;
    PostPaidServerEip eip_;
    bool eipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerPublicip_H_
