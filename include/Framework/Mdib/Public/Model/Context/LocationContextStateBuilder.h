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

#include <Framework/Mdib/Public/Model/Context/LocationContextState.h>

namespace DFL
{
namespace Mdib
{

/**
 * @brief Builder with fluent interface for @ref LocationContextState
 * @ingroup Mdib
 */
class LocationContextStateBuilder
{
    public:
        /// @brief Typedef to the immutable @ref LocationContextState
        using BuiltType = LocationContextState;

        /// @brief Builder based on given immutable @ref LocationContextState
        explicit LocationContextStateBuilder(const LocationContextState& locationContextState=LocationContextState());

        /// @brief Builder based on given immutable @ref LocationContextState
        explicit LocationContextStateBuilder(const DFL::NotNull<SharedPtr<LocationContextState>>& locationContextState);

        /// @brief Overwrite all values with given immutable @ref LocationContextState
        LocationContextStateBuilder& operator=(const LocationContextState& locationContextState);

        /// @brief Explicit conversion to immutable @ref LocationContextState
        LocationContextState build() const;

        /// @brief Test whether the builder differs from the immutable @ref LocationContextState
        bool isChanged(const LocationContextState& base) const;

        /// @brief Setter for category
        /// @{
        LocationContextStateBuilder& category(const boost::optional<CodedValue>& category);
        LocationContextStateBuilder& category(boost::optional<CodedValue>&& category);
        /// @}

        /// @brief Setter for contextAssociation
        /// @{
        LocationContextStateBuilder& contextAssociation(ContextAssociation contextAssociation);
        /// @}

        /// @brief Setter for bindingMdibVersion
        /// @{
        LocationContextStateBuilder& bindingMdibVersion(const boost::optional<VersionCounter>& bindingMdibVersion);
        LocationContextStateBuilder& bindingMdibVersion(boost::optional<VersionCounter>&& bindingMdibVersion);
        /// @}

        /// @brief Setter for unbindingMdibVersion
        /// @{
        LocationContextStateBuilder& unbindingMdibVersion(const boost::optional<VersionCounter>& unbindingMdibVersion);
        LocationContextStateBuilder& unbindingMdibVersion(boost::optional<VersionCounter>&& unbindingMdibVersion);
        /// @}

        /// @brief Setter for bindingStartTime
        /// @{
        LocationContextStateBuilder& bindingStartTime(const boost::optional<Timestamp>& bindingStartTime);
        LocationContextStateBuilder& bindingStartTime(boost::optional<Timestamp>&& bindingStartTime);
        /// @}

        /// @brief Setter for bindingEndTime
        /// @{
        LocationContextStateBuilder& bindingEndTime(const boost::optional<Timestamp>& bindingEndTime);
        LocationContextStateBuilder& bindingEndTime(boost::optional<Timestamp>&& bindingEndTime);
        /// @}

        /// @brief Setter for validators
        /// @{
        LocationContextStateBuilder& validators(const InstanceIdentifiers& validators);
        LocationContextStateBuilder& validators(InstanceIdentifiers&& validators);
        /// @}

        /// @brief Setter for identifications
        /// @{
        LocationContextStateBuilder& identifications(const InstanceIdentifiers& identifications);
        LocationContextStateBuilder& identifications(InstanceIdentifiers&& identifications);
        /// @}

        /// @brief Setter for locationDetail
        /// @{
        LocationContextStateBuilder& locationDetail(const boost::optional<LocationDetail>& locationDetail);
        LocationContextStateBuilder& locationDetail(boost::optional<LocationDetail>&& locationDetail);
        /// @}

        /// @brief Setter for extensions
        /// @{
        LocationContextStateBuilder& extensions(const ExtensionTypes& extensions);
        LocationContextStateBuilder& extensions(ExtensionTypes&& extensions);
        /// @}

        /// @brief Getter for category
        /// @{
        boost::optional<CodedValue>& category();
        const boost::optional<CodedValue>& category() const;
        /// @}

        /// @brief Getter for contextAssociation
        /// @{
        ContextAssociation& contextAssociation();
        ContextAssociation contextAssociation() const;
        /// @}

        /// @brief Getter for bindingMdibVersion
        /// @{
        boost::optional<VersionCounter>& bindingMdibVersion();
        const boost::optional<VersionCounter>& bindingMdibVersion() const;
        /// @}

        /// @brief Getter for unbindingMdibVersion
        /// @{
        boost::optional<VersionCounter>& unbindingMdibVersion();
        const boost::optional<VersionCounter>& unbindingMdibVersion() const;
        /// @}

        /// @brief Getter for bindingStartTime
        /// @{
        boost::optional<Timestamp>& bindingStartTime();
        const boost::optional<Timestamp>& bindingStartTime() const;
        /// @}

        /// @brief Getter for bindingEndTime
        /// @{
        boost::optional<Timestamp>& bindingEndTime();
        const boost::optional<Timestamp>& bindingEndTime() const;
        /// @}

        /// @brief Getter for validators
        /// @{
        InstanceIdentifiers& validators();
        const InstanceIdentifiers& validators() const;
        /// @}

        /// @brief Getter for identifications
        /// @{
        InstanceIdentifiers& identifications();
        const InstanceIdentifiers& identifications() const;
        /// @}

        /// @brief Getter for locationDetail
        /// @{
        boost::optional<LocationDetail>& locationDetail();
        const boost::optional<LocationDetail>& locationDetail() const;
        /// @}

        /// @brief Getter for extensions
        /// @{
        ExtensionTypes& extensions();
        const ExtensionTypes& extensions() const;
        /// @}

    private:
        boost::optional<CodedValue> m_category;
        ContextAssociation m_contextAssociation;
        boost::optional<VersionCounter> m_bindingMdibVersion;
        boost::optional<VersionCounter> m_unbindingMdibVersion;
        boost::optional<Timestamp> m_bindingStartTime;
        boost::optional<Timestamp> m_bindingEndTime;
        InstanceIdentifiers m_validators;
        InstanceIdentifiers m_identifications;
        boost::optional<LocationDetail> m_locationDetail;
        ExtensionTypes m_extensions;
};

/**
 * @brief Equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator==(const LocationContextState& lhs, const LocationContextState& rhs);
DFL_MDIB_EXPIMP bool operator==(const LocationContextStateBuilder& lhs, const LocationContextStateBuilder& rhs);
DFL_MDIB_EXPIMP bool operator==(const LocationContextStateBuilder& lhs, const LocationContextState& rhs);
bool operator==(const LocationContextState& lhs, const LocationContextStateBuilder& rhs);
/// @}

/**
 * @brief Not equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator!=(const LocationContextState& lhs, const LocationContextState& rhs);
bool operator!=(const LocationContextStateBuilder& lhs, const LocationContextStateBuilder& rhs);
bool operator!=(const LocationContextState& lhs, const LocationContextStateBuilder& rhs);
bool operator!=(const LocationContextStateBuilder& lhs, const LocationContextState& rhs);
/// @}

/**
 * @brief Factory function to create %Builder based on given immutable @ref LocationContextState
 * @ingroup Mdib
 */
/// @{
LocationContextStateBuilder getBuilder(const LocationContextState& locationContextState);
LocationContextStateBuilder getBuilder(const DFL::NotNull<SharedPtr<LocationContextState>>& locationContextState);
/// @}

/**
 * @brief Helper function throws runtime_error in case of a not equal member
 * @ingroup Mdib
 */
DFL_MDIB_EXPIMP void assertEqual(const LocationContextState& lhs, const LocationContextState& rhs);

inline LocationContextStateBuilder::LocationContextStateBuilder(const LocationContextState& locationContextState) :
    m_category(locationContextState.category()),
    m_contextAssociation(locationContextState.contextAssociation()),
    m_bindingMdibVersion(locationContextState.bindingMdibVersion()),
    m_unbindingMdibVersion(locationContextState.unbindingMdibVersion()),
    m_bindingStartTime(locationContextState.bindingStartTime()),
    m_bindingEndTime(locationContextState.bindingEndTime()),
    m_validators(locationContextState.validators()),
    m_identifications(locationContextState.identifications()),
    m_locationDetail(locationContextState.locationDetail()),
    m_extensions(locationContextState.extensions())
{
}

inline LocationContextStateBuilder::LocationContextStateBuilder(const DFL::NotNull<SharedPtr<LocationContextState>>& locationContextState) :
    m_category(locationContextState->category()),
    m_contextAssociation(locationContextState->contextAssociation()),
    m_bindingMdibVersion(locationContextState->bindingMdibVersion()),
    m_unbindingMdibVersion(locationContextState->unbindingMdibVersion()),
    m_bindingStartTime(locationContextState->bindingStartTime()),
    m_bindingEndTime(locationContextState->bindingEndTime()),
    m_validators(locationContextState->validators()),
    m_identifications(locationContextState->identifications()),
    m_locationDetail(locationContextState->locationDetail()),
    m_extensions(locationContextState->extensions())
{
}

inline LocationContextStateBuilder& LocationContextStateBuilder::operator=(const LocationContextState& locationContextState)
{
    m_category = locationContextState.category();
    m_contextAssociation = locationContextState.contextAssociation();
    m_bindingMdibVersion = locationContextState.bindingMdibVersion();
    m_unbindingMdibVersion = locationContextState.unbindingMdibVersion();
    m_bindingStartTime = locationContextState.bindingStartTime();
    m_bindingEndTime = locationContextState.bindingEndTime();
    m_validators = locationContextState.validators();
    m_identifications = locationContextState.identifications();
    m_locationDetail = locationContextState.locationDetail();
    m_extensions = locationContextState.extensions();
    return *this;
}

inline LocationContextState LocationContextStateBuilder::build() const
{
    // NOLINTNEXTLINE(modernize-return-braced-init-list)
    return LocationContextState(m_category, m_contextAssociation, m_bindingMdibVersion, m_unbindingMdibVersion, m_bindingStartTime, m_bindingEndTime, m_validators, m_identifications, m_locationDetail, m_extensions);
}

inline bool LocationContextStateBuilder::isChanged(const LocationContextState& base) const
{
    return *this != base;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::category(const boost::optional<CodedValue>& category)
{
    m_category = category;
    return *this;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::category(boost::optional<CodedValue>&& category)
{
    m_category = std::move(category);
    return *this;
}

inline boost::optional<CodedValue>& LocationContextStateBuilder::category()
{
    return m_category;
}

inline const boost::optional<CodedValue>& LocationContextStateBuilder::category() const
{
    return m_category;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::contextAssociation(ContextAssociation contextAssociation)
{
    m_contextAssociation = contextAssociation;
    return *this;
}

inline ContextAssociation& LocationContextStateBuilder::contextAssociation()
{
    return m_contextAssociation;
}

inline ContextAssociation LocationContextStateBuilder::contextAssociation() const
{
    return m_contextAssociation;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::bindingMdibVersion(const boost::optional<VersionCounter>& bindingMdibVersion)
{
    m_bindingMdibVersion = bindingMdibVersion;
    return *this;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::bindingMdibVersion(boost::optional<VersionCounter>&& bindingMdibVersion)
{
    m_bindingMdibVersion = std::move(bindingMdibVersion);
    return *this;
}

inline boost::optional<VersionCounter>& LocationContextStateBuilder::bindingMdibVersion()
{
    return m_bindingMdibVersion;
}

inline const boost::optional<VersionCounter>& LocationContextStateBuilder::bindingMdibVersion() const
{
    return m_bindingMdibVersion;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::unbindingMdibVersion(const boost::optional<VersionCounter>& unbindingMdibVersion)
{
    m_unbindingMdibVersion = unbindingMdibVersion;
    return *this;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::unbindingMdibVersion(boost::optional<VersionCounter>&& unbindingMdibVersion)
{
    m_unbindingMdibVersion = std::move(unbindingMdibVersion);
    return *this;
}

inline boost::optional<VersionCounter>& LocationContextStateBuilder::unbindingMdibVersion()
{
    return m_unbindingMdibVersion;
}

inline const boost::optional<VersionCounter>& LocationContextStateBuilder::unbindingMdibVersion() const
{
    return m_unbindingMdibVersion;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::bindingStartTime(const boost::optional<Timestamp>& bindingStartTime)
{
    m_bindingStartTime = bindingStartTime;
    return *this;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::bindingStartTime(boost::optional<Timestamp>&& bindingStartTime)
{
    m_bindingStartTime = std::move(bindingStartTime);
    return *this;
}

inline boost::optional<Timestamp>& LocationContextStateBuilder::bindingStartTime()
{
    return m_bindingStartTime;
}

inline const boost::optional<Timestamp>& LocationContextStateBuilder::bindingStartTime() const
{
    return m_bindingStartTime;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::bindingEndTime(const boost::optional<Timestamp>& bindingEndTime)
{
    m_bindingEndTime = bindingEndTime;
    return *this;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::bindingEndTime(boost::optional<Timestamp>&& bindingEndTime)
{
    m_bindingEndTime = std::move(bindingEndTime);
    return *this;
}

inline boost::optional<Timestamp>& LocationContextStateBuilder::bindingEndTime()
{
    return m_bindingEndTime;
}

inline const boost::optional<Timestamp>& LocationContextStateBuilder::bindingEndTime() const
{
    return m_bindingEndTime;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::validators(const InstanceIdentifiers& validators)
{
    m_validators = validators;
    return *this;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::validators(InstanceIdentifiers&& validators)
{
    m_validators = std::move(validators);
    return *this;
}

inline InstanceIdentifiers& LocationContextStateBuilder::validators()
{
    return m_validators;
}

inline const InstanceIdentifiers& LocationContextStateBuilder::validators() const
{
    return m_validators;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::identifications(const InstanceIdentifiers& identifications)
{
    m_identifications = identifications;
    return *this;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::identifications(InstanceIdentifiers&& identifications)
{
    m_identifications = std::move(identifications);
    return *this;
}

inline InstanceIdentifiers& LocationContextStateBuilder::identifications()
{
    return m_identifications;
}

inline const InstanceIdentifiers& LocationContextStateBuilder::identifications() const
{
    return m_identifications;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::locationDetail(const boost::optional<LocationDetail>& locationDetail)
{
    m_locationDetail = locationDetail;
    return *this;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::locationDetail(boost::optional<LocationDetail>&& locationDetail)
{
    m_locationDetail = std::move(locationDetail);
    return *this;
}

inline boost::optional<LocationDetail>& LocationContextStateBuilder::locationDetail()
{
    return m_locationDetail;
}

inline const boost::optional<LocationDetail>& LocationContextStateBuilder::locationDetail() const
{
    return m_locationDetail;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::extensions(const ExtensionTypes& extensions)
{
    m_extensions = extensions;
    return *this;
}

inline LocationContextStateBuilder& LocationContextStateBuilder::extensions(ExtensionTypes&& extensions)
{
    m_extensions = std::move(extensions);
    return *this;
}

inline ExtensionTypes& LocationContextStateBuilder::extensions()
{
    return m_extensions;
}

inline const ExtensionTypes& LocationContextStateBuilder::extensions() const
{
    return m_extensions;
}

inline bool operator==(const LocationContextState& lhs, const LocationContextStateBuilder& rhs)
{
    return rhs == lhs;
}

inline bool operator!=(const LocationContextStateBuilder& lhs, const LocationContextStateBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const LocationContextState& lhs, const LocationContextStateBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const LocationContextStateBuilder& lhs, const LocationContextState& rhs)
{
    return !(lhs == rhs);
}

inline LocationContextStateBuilder getBuilder(const LocationContextState& locationContextState)
{
    return LocationContextStateBuilder(locationContextState);
}

inline LocationContextStateBuilder getBuilder(const DFL::NotNull<SharedPtr<LocationContextState>>& locationContextState)
{
    return LocationContextStateBuilder(locationContextState);
}

}
}
