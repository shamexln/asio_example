/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Private/ExpImp.h>
#include <iosfwd>

namespace DFL
{

namespace Format
{
class Stream;
}

namespace Mdib
{
class MetaData;

/**
 * @brief Stream operator for output.
 *
 * @param out returned output stream
 * @param metaData @ref DFL::Mdib::MetaData value to stream
 * @return the passed stream (first argument)
 * @ingroup Mdib
 */
DFL_MDIB_EXPIMP std::ostream& operator<<(std::ostream& out, const MetaData& metaData);

/**
 * @brief Stream operator for output.
 *
 * @param out returned output stream
 * @param metaData @ref DFL::Mdib::MetaData value to stream
 * @return the passed stream (first argument)
 * @ingroup Mdib
 */
DFL_MDIB_EXPIMP Format::Stream& operator<<(Format::Stream& out, const MetaData& metaData);

}
}
