
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipSingleShowResp_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipSingleShowResp_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/ProfileInfo.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/eip/v3/model/PublicipBandwidthInfo.h>
#include <vector>
#include <huaweicloud/eip/v3/model/TagsInfo.h>
#include <huaweicloud/eip/v3/model/VnicInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 公网IP字段信息
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  PublicipSingleShowResp
    : public ModelBase
{
public:
    PublicipSingleShowResp();
    virtual ~PublicipSingleShowResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PublicipSingleShowResp members

    /// <summary>
    /// 功能说明：弹性公网IP唯一标识
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 功能说明：IP版本信息 取值范围：4表示公网IP地址为public_ip_address地址;6表示公网IP地址为public_ipv6_address地址\&quot;
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// 功能说明：弹性公网IP或者IPv6端口的地址
    /// </summary>

    std::string getPublicIpAddress() const;
    bool publicIpAddressIsSet() const;
    void unsetpublicIpAddress();
    void setPublicIpAddress(const std::string& value);

    /// <summary>
    /// 功能说明：IPv4时无此字段，IPv6时为申请到的弹性公网IP地址
    /// </summary>

    std::string getPublicIpv6Address() const;
    bool publicIpv6AddressIsSet() const;
    void unsetpublicIpv6Address();
    void setPublicIpv6Address(const std::string& value);

    /// <summary>
    /// 废弃，功能由publicip_pool_name继承，默认不显示。功能说明：弹性公网IP的网络类型
    /// </summary>

    std::string getNetworkType() const;
    bool networkTypeIsSet() const;
    void unsetnetworkType();
    void setNetworkType(const std::string& value);

    /// <summary>
    /// 功能说明：弹性公网IP的状态  取值范围：冻结FREEZED，绑定失败BIND_ERROR，绑定中BINDING，释放中PENDING_DELETE， 创建中PENDING_CREATE，创建中NOTIFYING，释放中NOTIFY_DELETE，更新中PENDING_UPDATE， 未绑定DOWN ，绑定ACTIVE，绑定ELB，绑定VPN，失败ERROR。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 功能说明：弹性公网IP描述信息 约束：用户以自定义方式标识资源，系统不感知
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：表示中心站点资源或者边缘站点资源 取值范围： center、边缘站点名称 约束：publicip只能绑定该字段相同的资源
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// 功能说明：资源创建UTC时间 格式:yyyy-MM-ddTHH:mm:ssZ
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 功能说明：资源更新UTC时间 格式:yyyy-MM-ddTHH:mm:ssZ
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 功能说明：弹性公网IP类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VnicInfo getVnic() const;
    bool vnicIsSet() const;
    void unsetvnic();
    void setVnic(const VnicInfo& value);

    /// <summary>
    /// 
    /// </summary>

    PublicipBandwidthInfo getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const PublicipBandwidthInfo& value);

    /// <summary>
    /// 功能说明：企业项目ID。最大长度36字节,带“-”连字符的UUID格式,或者是字符串“0”。创建弹性公网IP时,给弹性公网IP绑定企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 功能说明：公网IP的订单信息 约束：包周期才会有订单信息，按需资源此字段为空
    /// </summary>

    std::string getBillingInfo() const;
    bool billingInfoIsSet() const;
    void unsetbillingInfo();
    void setBillingInfo(const std::string& value);

    /// <summary>
    /// 功能说明：记录公网IP当前的冻结状态 约束：metadata类型，标识欠费冻结、公安冻结 取值范围：police，locked
    /// </summary>

    std::string getLockStatus() const;
    bool lockStatusIsSet() const;
    void unsetlockStatus();
    void setLockStatus(const std::string& value);

    /// <summary>
    /// 功能说明：公网IP绑定的实例类型 取值范围：PORT、NATGW、ELB、ELBV1、VPN、null
    /// </summary>

    std::string getAssociateInstanceType() const;
    bool associateInstanceTypeIsSet() const;
    void unsetassociateInstanceType();
    void setAssociateInstanceType(const std::string& value);

    /// <summary>
    /// 功能说明：公网IP绑定的实例ID
    /// </summary>

    std::string getAssociateInstanceId() const;
    bool associateInstanceIdIsSet() const;
    void unsetassociateInstanceId();
    void setAssociateInstanceId(const std::string& value);

    /// <summary>
    /// 功能说明：公网IP所属网络的ID。publicip_pool_name对应的网络ID
    /// </summary>

    std::string getPublicipPoolId() const;
    bool publicipPoolIdIsSet() const;
    void unsetpublicipPoolId();
    void setPublicipPoolId(const std::string& value);

    /// <summary>
    /// 功能说明：弹性公网IP的网络类型, 包括公共池类型，如5_bgp/5_sbgp...，和用户购买的专属池。 专属池见publcip_pool相关接口
    /// </summary>

    std::string getPublicipPoolName() const;
    bool publicipPoolNameIsSet() const;
    void unsetpublicipPoolName();
    void setPublicipPoolName(const std::string& value);

    /// <summary>
    /// 功能说明：弹性公网IP名称
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProfileInfo getProfile() const;
    bool profileIsSet() const;
    void unsetprofile();
    void setProfile(const ProfileInfo& value);

    /// <summary>
    /// 默认不显示。该字段仅仅用于表示eip的bgp类型是否是真实的静态sbgp * 1. 如果为true，则该eip可以切换bgp类型 * 2. 如果为false，则该eip不可以切换bgp类型
    /// </summary>

    bool isFakeNetworkType() const;
    bool fakeNetworkTypeIsSet() const;
    void unsetfakeNetworkType();
    void setFakeNetworkType(bool value);

    /// <summary>
    /// 默认不显示。用户标签
    /// </summary>

    std::vector<TagsInfo>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsInfo>& value);

    /// <summary>
    /// 默认不显示。记录实例的更上一层归属。例如associate_instance_type为PORT，此字段记录PORT的device_id和device_owner信息。仅有限场景记录。
    /// </summary>

    std::string getAssociateInstanceMetadata() const;
    bool associateInstanceMetadataIsSet() const;
    void unsetassociateInstanceMetadata();
    void setAssociateInstanceMetadata(const std::string& value);

    /// <summary>
    /// 默认不显示。开启支持直通模式后展示，表示直通模式的标识。
    /// </summary>

    std::string getAssociateMode() const;
    bool associateModeIsSet() const;
    void unsetassociateMode();
    void setAssociateMode(const std::string& value);

    /// <summary>
    /// 功能说明：表示此publicip可以加入的共享带宽类型列表，如果为空列表，则表示该           publicip不能加入任何共享带宽 约束：publicip只能加入到有该带宽类型的共享带宽中
    /// </summary>

    std::vector<std::string>& getAllowShareBandwidthTypes();
    bool allowShareBandwidthTypesIsSet() const;
    void unsetallowShareBandwidthTypes();
    void setAllowShareBandwidthTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 默认不显示。表示该eip是否支持与实例同步删除。
    /// </summary>

    bool isCascadeDeleteByInstance() const;
    bool cascadeDeleteByInstanceIsSet() const;
    void unsetcascadeDeleteByInstance();
    void setCascadeDeleteByInstance(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string publicIpAddress_;
    bool publicIpAddressIsSet_;
    std::string publicIpv6Address_;
    bool publicIpv6AddressIsSet_;
    std::string networkType_;
    bool networkTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string type_;
    bool typeIsSet_;
    VnicInfo vnic_;
    bool vnicIsSet_;
    PublicipBandwidthInfo bandwidth_;
    bool bandwidthIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string billingInfo_;
    bool billingInfoIsSet_;
    std::string lockStatus_;
    bool lockStatusIsSet_;
    std::string associateInstanceType_;
    bool associateInstanceTypeIsSet_;
    std::string associateInstanceId_;
    bool associateInstanceIdIsSet_;
    std::string publicipPoolId_;
    bool publicipPoolIdIsSet_;
    std::string publicipPoolName_;
    bool publicipPoolNameIsSet_;
    std::string alias_;
    bool aliasIsSet_;
    ProfileInfo profile_;
    bool profileIsSet_;
    bool fakeNetworkType_;
    bool fakeNetworkTypeIsSet_;
    std::vector<TagsInfo> tags_;
    bool tagsIsSet_;
    std::string associateInstanceMetadata_;
    bool associateInstanceMetadataIsSet_;
    std::string associateMode_;
    bool associateModeIsSet_;
    std::vector<std::string> allowShareBandwidthTypes_;
    bool allowShareBandwidthTypesIsSet_;
    bool cascadeDeleteByInstance_;
    bool cascadeDeleteByInstanceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipSingleShowResp_H_
