#pragma once

#include <S31/S31CoreExImp.h>

/**
 *  @file
 *  @brief Make generated WSDL documents useable by other components.
 */

namespace S31::Sdc
{

/**
 * @brief WSDL document pointer as generated by gSOAP.
 * @ingroup S31SdcCommon
 */
struct WsdlDocument
{
        const char** wsdl;
        unsigned int wsdl_count;
        unsigned int wsdl_len;
};

/**
 * @brief Provides the WSDL document of the ADT service.
 * @ingroup S31SdcCommon
 */
S31_CORE_EXPIMP WsdlDocument adtServiceWsdl();

}

