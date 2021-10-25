
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateDisasterRecoveryDrillRequestParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateDisasterRecoveryDrillRequestParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 创建容灾演练请求数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  CreateDisasterRecoveryDrillRequestParams
    : public ModelBase
{
public:
    CreateDisasterRecoveryDrillRequestParams();
    virtual ~CreateDisasterRecoveryDrillRequestParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDisasterRecoveryDrillRequestParams members

    /// <summary>
    /// 保护组的ID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 演练虚拟私有云ID，不指定时系统会自动创建演练VPC。
    /// </summary>

    std::string getDrillVpcId() const;
    bool drillVpcIdIsSet() const;
    void unsetdrillVpcId();
    void setDrillVpcId(const std::string& value);

    /// <summary>
    /// 指定容灾演练的名称，最大支持长度为64个字节。只包含中文字符、英文字母（a～ｚ、Ａ～Ｚ）、数字（０~９）、小数点（．）、下划线（_）、中划线（-）。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    std::string drillVpcId_;
    bool drillVpcIdIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateDisasterRecoveryDrillRequestParams_H_
