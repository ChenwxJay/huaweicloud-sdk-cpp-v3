#ifndef HUAWEICLOUD_SDK_VPC_V2_VpcExport_H_
#define HUAWEICLOUD_SDK_VPC_V2_VpcExport_H_

#include <huaweicloud/core/EXPORT.h>

#if defined(HUAWEICLOUD_SHARED)
#	if defined(HUAWEICLOUD_VPC_SHARED)
#		define HUAWEICLOUD_VPC_EXPORT HUAWEICLOUD_EXPORT
#	else
#		define HUAWEICLOUD_VPC_EXPORT HUAWEICLOUD_IMPORT
#	endif
#else
#	define HUAWEICLOUD_VPC_EXPORT
#endif

#endif // !HUAWEICLOUD_SDK_VPC_V2_VpcExport_H_