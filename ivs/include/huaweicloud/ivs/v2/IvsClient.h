#ifndef HUAWEICLOUD_SDK_IVS_V2_IvsClient_H_
#define HUAWEICLOUD_SDK_IVS_V2_IvsClient_H_

#include <huaweicloud/ivs/v2/IvsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/ivs/v2/model/DetectExtentionByIdCardImageRequest.h>
#include <huaweicloud/ivs/v2/model/DetectExtentionByIdCardImageResponse.h>
#include <huaweicloud/ivs/v2/model/DetectExtentionByNameAndIdRequest.h>
#include <huaweicloud/ivs/v2/model/DetectExtentionByNameAndIdResponse.h>
#include <huaweicloud/ivs/v2/model/DetectStandardByIdCardImageRequest.h>
#include <huaweicloud/ivs/v2/model/DetectStandardByIdCardImageResponse.h>
#include <huaweicloud/ivs/v2/model/DetectStandardByNameAndIdRequest.h>
#include <huaweicloud/ivs/v2/model/DetectStandardByNameAndIdResponse.h>
#include <huaweicloud/ivs/v2/model/IvsExtentionByIdCardImageRequestBody.h>
#include <huaweicloud/ivs/v2/model/IvsExtentionByNameAndIdRequestBody.h>
#include <huaweicloud/ivs/v2/model/IvsStandardByIdCardImageRequestBody.h>
#include <huaweicloud/ivs/v2/model/IvsStandardByNameAndIdRequestBody.h>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Ivs::V2::Model;

class HUAWEICLOUD_IVS_V2_EXPORT  IvsClient : public Client
{
public:

    IvsClient();

    virtual ~IvsClient();

    static ClientBuilder<IvsClient> newBuilder();

    /// <summary>
    /// 人证核身证件版（二要素）
    /// </summary>
    /// <remarks>
    /// 使用姓名、身份证号码二要素进行身份审核。身份验证时，传入的数据为身份证信息。提取身份证信息时，可以使用身份证正反面图片，也可以直接输入姓名、身份证号文本。
    /// </remarks>
    /// <param name="ivsExtentionByIdCardImageRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<DetectExtentionByIdCardImageResponse> detectExtentionByIdCardImage(
        DetectExtentionByIdCardImageRequest &request
    );
    /// <summary>
    /// 人证核身证件版（二要素）
    /// </summary>
    /// <remarks>
    /// 使用姓名、身份证号码二要素进行身份审核。身份验证时，传入的数据为身份证信息。提取身份证信息时，可以使用身份证正反面图片，也可以直接输入姓名、身份证号文本。
    /// </remarks>
    /// <param name="ivsExtentionByNameAndIdRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<DetectExtentionByNameAndIdResponse> detectExtentionByNameAndId(
        DetectExtentionByNameAndIdRequest &request
    );
    /// <summary>
    /// 人证核身标准版（三要素）
    /// </summary>
    /// <remarks>
    /// 使用姓名、身份证号码、人脸图片三要素进行身份审核。 身份验证时，传入的数据为人脸图片、身份证信息。提取身份证信息时，可以使用身份证正反面图片，也可以直接输入姓名、身份证号文本。
    /// </remarks>
    /// <param name="ivsStandardByIdCardImageRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<DetectStandardByIdCardImageResponse> detectStandardByIdCardImage(
        DetectStandardByIdCardImageRequest &request
    );
    /// <summary>
    /// 人证核身标准版（三要素）
    /// </summary>
    /// <remarks>
    /// 校验用户上传的身份证图片支持正反面同时上传 中的信息的真实性，输出最终的审核结果。 该接口也支持用户直接上传姓名和身份证号码进行合法性校验 。
    /// </remarks>
    /// <param name="ivsStandardByNameAndIdRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<DetectStandardByNameAndIdResponse> detectStandardByNameAndId(
        DetectStandardByNameAndIdRequest &request
    );

private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const utility::datetime &value);
    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_IVS_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Ivs::V2::IvsClient>;

#endif // HUAWEICLOUD_SDK_IVS_V2_IvsClient_H_

