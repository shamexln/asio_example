/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <memory>
#include <boost/optional.hpp>
#include <Framework/Mdib/Private/ExpImp.h>
#include <Framework/Mdib/Private/Utils/SmartPtrTypes.h>
#include <Framework/Utils/Public/NotNull.h>

#include <Framework/Mdib/Public/Model/Operation/SetMetricStateOperationState.h>

namespace DFL
{
namespace Mdib
{

/**
 * @brief Builder with fluent interface for @ref SetMetricStateOperationState
 * @ingroup Mdib
 */
class SetMetricStateOperationStateBuilder
{
    public:
        /// @brief Typedef to the immutable @ref SetMetricStateOperationState
        using BuiltType = SetMetricStateOperationState;

        /// @brief Builder based on given immutable @ref SetMetricStateOperationState
        explicit SetMetricStateOperationStateBuilder(const SetMetricStateOperationState& setMetricStateOperationState=SetMetricStateOperationState());

        /// @brief Builder based on given immutable @ref SetMetricStateOperationState
        explicit SetMetricStateOperationStateBuilder(const DFL::NotNull<SharedPtr<SetMetricStateOperationState>>& setMetricStateOperationState);

        /// @brief Overwrite all values with given immutable @ref SetMetricStateOperationState
        SetMetricStateOperationStateBuilder& operator=(const SetMetricStateOperationState& setMetricStateOperationState);

        /// @brief Explicit conversion to immutable @ref SetMetricStateOperationState
        SetMetricStateOperationState build() const;

        /// @brief Test whether the builder differs from the immutable @ref SetMetricStateOperationState
        bool isChanged(const SetMetricStateOperationState& base) const;

        /// @brief Setter for operatingMode
        /// @{
        SetMetricStateOperationStateBuilder& operatingMode(OperatingMode operatingMode);
        /// @}

        /// @brief Setter for extensions
        /// @{
        SetMetricStateOperationStateBuilder& extensions(const ExtensionTypes& extensions);
        SetMetricStateOperationStateBuilder& extensions(ExtensionTypes&& extensions);
        /// @}

        /// @brief Getter for operatingMode
        /// @{
        OperatingMode& operatingMode();
        OperatingMode operatingMode() const;
        /// @}

        /// @brief Getter for extensions
        /// @{
        ExtensionTypes& extensions();
        const ExtensionTypes& extensions() const;
        /// @}

    private:
        OperatingMode m_operatingMode;
        ExtensionTypes m_extensions;
};

/**
 * @brief Equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator==(const SetMetricStateOperationState& lhs, const SetMetricStateOperationState& rhs);
DFL_MDIB_EXPIMP bool operator==(const SetMetricStateOperationStateBuilder& lhs, const SetMetricStateOperationStateBuilder& rhs);
DFL_MDIB_EXPIMP bool operator==(const SetMetricStateOperationStateBuilder& lhs, const SetMetricStateOperationState& rhs);
bool operator==(const SetMetricStateOperationState& lhs, const SetMetricStateOperationStateBuilder& rhs);
/// @}

/**
 * @brief Not equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator!=(const SetMetricStateOperationState& lhs, const SetMetricStateOperationState& rhs);
bool operator!=(const SetMetricStateOperationStateBuilder& lhs, const SetMetricStateOperationStateBuilder& rhs);
bool operator!=(const SetMetricStateOperationState& lhs, const SetMetricStateOperationStateBuilder& rhs);
bool operator!=(const SetMetricStateOperationStateBuilder& lhs, const SetMetricStateOperationState& rhs);
/// @}

/**
 * @brief Factory function to create %Builder based on given immutable @ref SetMetricStateOperationState
 * @ingroup Mdib
 */
/// @{
SetMetricStateOperationStateBuilder getBuilder(const SetMetricStateOperationState& setMetricStateOperationState);
SetMetricStateOperationStateBuilder getBuilder(const DFL::NotNull<SharedPtr<SetMetricStateOperationState>>& setMetricStateOperationState);
/// @}

/**
 * @brief Helper function throws runtime_error in case of a not equal member
 * @ingroup Mdib
 */
DFL_MDIB_EXPIMP void assertEqual(const SetMetricStateOperationState& lhs, const SetMetricStateOperationState& rhs);

inline SetMetricStateOperationStateBuilder::SetMetricStateOperationStateBuilder(const SetMetricStateOperationState& setMetricStateOperationState) :
    m_operatingMode(setMetricStateOperationState.operatingMode()),
    m_extensions(setMetricStateOperationState.extensions())
{
}

inline SetMetricStateOperationStateBuilder::SetMetricStateOperationStateBuilder(const DFL::NotNull<SharedPtr<SetMetricStateOperationState>>& setMetricStateOperationState) :
    m_operatingMode(setMetricStateOperationState->operatingMode()),
    m_extensions(setMetricStateOperationState->extensions())
{
}

inline SetMetricStateOperationStateBuilder& SetMetricStateOperationStateBuilder::operator=(const SetMetricStateOperationState& setMetricStateOperationState)
{
    m_operatingMode = setMetricStateOperationState.operatingMode();
    m_extensions = setMetricStateOperationState.extensions();
    return *this;
}

inline SetMetricStateOperationState SetMetricStateOperationStateBuilder::build() const
{
    // NOLINTNEXTLINE(modernize-return-braced-init-list)
    return SetMetricStateOperationState(m_operatingMode, m_extensions);
}

inline bool SetMetricStateOperationStateBuilder::isChanged(const SetMetricStateOperationState& base) const
{
    return *this != base;
}

inline SetMetricStateOperationStateBuilder& SetMetricStateOperationStateBuilder::operatingMode(OperatingMode operatingMode)
{
    m_operatingMode = operatingMode;
    return *this;
}

inline OperatingMode& SetMetricStateOperationStateBuilder::operatingMode()
{
    return m_operatingMode;
}

inline OperatingMode SetMetricStateOperationStateBuilder::operatingMode() const
{
    return m_operatingMode;
}

inline SetMetricStateOperationStateBuilder& SetMetricStateOperationStateBuilder::extensions(const ExtensionTypes& extensions)
{
    m_extensions = extensions;
    return *this;
}

inline SetMetricStateOperationStateBuilder& SetMetricStateOperationStateBuilder::extensions(ExtensionTypes&& extensions)
{
    m_extensions = std::move(extensions);
    return *this;
}

inline ExtensionTypes& SetMetricStateOperationStateBuilder::extensions()
{
    return m_extensions;
}

inline const ExtensionTypes& SetMetricStateOperationStateBuilder::extensions() const
{
    return m_extensions;
}

inline bool operator==(const SetMetricStateOperationState& lhs, const SetMetricStateOperationStateBuilder& rhs)
{
    return rhs == lhs;
}

inline bool operator!=(const SetMetricStateOperationStateBuilder& lhs, const SetMetricStateOperationStateBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const SetMetricStateOperationState& lhs, const SetMetricStateOperationStateBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const SetMetricStateOperationStateBuilder& lhs, const SetMetricStateOperationState& rhs)
{
    return !(lhs == rhs);
}

inline SetMetricStateOperationStateBuilder getBuilder(const SetMetricStateOperationState& setMetricStateOperationState)
{
    return SetMetricStateOperationStateBuilder(setMetricStateOperationState);
}

inline SetMetricStateOperationStateBuilder getBuilder(const DFL::NotNull<SharedPtr<SetMetricStateOperationState>>& setMetricStateOperationState)
{
    return SetMetricStateOperationStateBuilder(setMetricStateOperationState);
}

}
}
