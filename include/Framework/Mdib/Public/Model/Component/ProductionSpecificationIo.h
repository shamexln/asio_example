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
class ProductionSpecification;

/**
 * @brief Stream operator for output.
 *
 * @param out returned output stream
 * @param data data to stream
 * @return the passed stream (first argument)
 * @ingroup Mdib
 */
DFL_MDIB_EXPIMP std::ostream& operator<<(std::ostream& out, ProductionSpecification const& data);

/**
 * @brief Stream operator for debug output.
 * @param out returned output stream
 * @param data data to stream
 * @return the passed stream (first argument)
 * @ingroup Mdib
 */
DFL_MDIB_EXPIMP Format::Stream& operator<<(Format::Stream& out, ProductionSpecification const& data);

} /* namespace Mdib */
} /* namespace DFL */
