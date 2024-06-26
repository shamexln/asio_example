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

#include <Framework/Mdib/Public/Model/Metric/StringMetricState.h>

namespace DFL
{
namespace Mdib
{

/**
 * @brief Builder with fluent interface for @ref StringMetricState
 * @ingroup Mdib
 */
class StringMetricStateBuilder
{
    public:
        /// @brief Typedef to the immutable @ref StringMetricState
        using BuiltType = StringMetricState;

        /// @brief Builder based on given immutable @ref StringMetricState
        explicit StringMetricStateBuilder(const StringMetricState& stringMetricState=StringMetricState());

        /// @brief Builder based on given immutable @ref StringMetricState
        explicit StringMetricStateBuilder(const DFL::NotNull<SharedPtr<StringMetricState>>& stringMetricState);

        /// @brief Overwrite all values with given immutable @ref StringMetricState
        StringMetricStateBuilder& operator=(const StringMetricState& stringMetricState);

        /// @brief Explicit conversion to immutable @ref StringMetricState
        StringMetricState build() const;

        /// @brief Test whether the builder differs from the immutable @ref StringMetricState
        bool isChanged(const StringMetricState& base) const;

        /// @brief Setter for activationState
        /// @{
        StringMetricStateBuilder& activationState(ComponentActivation activationState);
        /// @}

        /// @brief Setter for activeDeterminationPeriod
        /// @{
        StringMetricStateBuilder& activeDeterminationPeriod(const boost::optional<Duration>& activeDeterminationPeriod);
        StringMetricStateBuilder& activeDeterminationPeriod(boost::optional<Duration>&& activeDeterminationPeriod);
        /// @}

        /// @brief Setter for lifeTimePeriod
        /// @{
        StringMetricStateBuilder& lifeTimePeriod(const boost::optional<Duration>& lifeTimePeriod);
        StringMetricStateBuilder& lifeTimePeriod(boost::optional<Duration>&& lifeTimePeriod);
        /// @}

        /// @brief Setter for bodySites
        /// @{
        StringMetricStateBuilder& bodySites(const BodySites& bodySites);
        StringMetricStateBuilder& bodySites(BodySites&& bodySites);
        /// @}

        /// @brief Setter for physicalConnector
        /// @{
        StringMetricStateBuilder& physicalConnector(const boost::optional<PhysicalConnectorInfo>& physicalConnector);
        StringMetricStateBuilder& physicalConnector(boost::optional<PhysicalConnectorInfo>&& physicalConnector);
        /// @}

        /// @brief Setter for metricValue
        /// @{
        StringMetricStateBuilder& metricValue(const boost::optional<StringMetricValue>& metricValue);
        StringMetricStateBuilder& metricValue(boost::optional<StringMetricValue>&& metricValue);
        /// @}

        /// @brief Setter for extensions
        /// @{
        StringMetricStateBuilder& extensions(const ExtensionTypes& extensions);
        StringMetricStateBuilder& extensions(ExtensionTypes&& extensions);
        /// @}

        /// @brief Getter for activationState
        /// @{
        ComponentActivation& activationState();
        ComponentActivation activationState() const;
        /// @}

        /// @brief Getter for activeDeterminationPeriod
        /// @{
        boost::optional<Duration>& activeDeterminationPeriod();
        const boost::optional<Duration>& activeDeterminationPeriod() const;
        /// @}

        /// @brief Getter for lifeTimePeriod
        /// @{
        boost::optional<Duration>& lifeTimePeriod();
        const boost::optional<Duration>& lifeTimePeriod() const;
        /// @}

        /// @brief Getter for bodySites
        /// @{
        BodySites& bodySites();
        const BodySites& bodySites() const;
        /// @}

        /// @brief Getter for physicalConnector
        /// @{
        boost::optional<PhysicalConnectorInfo>& physicalConnector();
        const boost::optional<PhysicalConnectorInfo>& physicalConnector() const;
        /// @}

        /// @brief Getter for metricValue
        /// @{
        boost::optional<StringMetricValue>& metricValue();
        const boost::optional<StringMetricValue>& metricValue() const;
        /// @}

        /// @brief Getter for extensions
        /// @{
        ExtensionTypes& extensions();
        const ExtensionTypes& extensions() const;
        /// @}

    private:
        ComponentActivation m_activationState;
        boost::optional<Duration> m_activeDeterminationPeriod;
        boost::optional<Duration> m_lifeTimePeriod;
        BodySites m_bodySites;
        boost::optional<PhysicalConnectorInfo> m_physicalConnector;
        boost::optional<StringMetricValue> m_metricValue;
        ExtensionTypes m_extensions;
};

/**
 * @brief Equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator==(const StringMetricState& lhs, const StringMetricState& rhs);
DFL_MDIB_EXPIMP bool operator==(const StringMetricStateBuilder& lhs, const StringMetricStateBuilder& rhs);
DFL_MDIB_EXPIMP bool operator==(const StringMetricStateBuilder& lhs, const StringMetricState& rhs);
bool operator==(const StringMetricState& lhs, const StringMetricStateBuilder& rhs);
/// @}

/**
 * @brief Not equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator!=(const StringMetricState& lhs, const StringMetricState& rhs);
bool operator!=(const StringMetricStateBuilder& lhs, const StringMetricStateBuilder& rhs);
bool operator!=(const StringMetricState& lhs, const StringMetricStateBuilder& rhs);
bool operator!=(const StringMetricStateBuilder& lhs, const StringMetricState& rhs);
/// @}

/**
 * @brief Factory function to create %Builder based on given immutable @ref StringMetricState
 * @ingroup Mdib
 */
/// @{
StringMetricStateBuilder getBuilder(const StringMetricState& stringMetricState);
StringMetricStateBuilder getBuilder(const DFL::NotNull<SharedPtr<StringMetricState>>& stringMetricState);
/// @}

/**
 * @brief Helper function throws runtime_error in case of a not equal member
 * @ingroup Mdib
 */
DFL_MDIB_EXPIMP void assertEqual(const StringMetricState& lhs, const StringMetricState& rhs);

inline StringMetricStateBuilder::StringMetricStateBuilder(const StringMetricState& stringMetricState) :
    m_activationState(stringMetricState.activationState()),
    m_activeDeterminationPeriod(stringMetricState.activeDeterminationPeriod()),
    m_lifeTimePeriod(stringMetricState.lifeTimePeriod()),
    m_bodySites(stringMetricState.bodySites()),
    m_physicalConnector(stringMetricState.physicalConnector()),
    m_metricValue(stringMetricState.metricValue()),
    m_extensions(stringMetricState.extensions())
{
}

inline StringMetricStateBuilder::StringMetricStateBuilder(const DFL::NotNull<SharedPtr<StringMetricState>>& stringMetricState) :
    m_activationState(stringMetricState->activationState()),
    m_activeDeterminationPeriod(stringMetricState->activeDeterminationPeriod()),
    m_lifeTimePeriod(stringMetricState->lifeTimePeriod()),
    m_bodySites(stringMetricState->bodySites()),
    m_physicalConnector(stringMetricState->physicalConnector()),
    m_metricValue(stringMetricState->metricValue()),
    m_extensions(stringMetricState->extensions())
{
}

inline StringMetricStateBuilder& StringMetricStateBuilder::operator=(const StringMetricState& stringMetricState)
{
    m_activationState = stringMetricState.activationState();
    m_activeDeterminationPeriod = stringMetricState.activeDeterminationPeriod();
    m_lifeTimePeriod = stringMetricState.lifeTimePeriod();
    m_bodySites = stringMetricState.bodySites();
    m_physicalConnector = stringMetricState.physicalConnector();
    m_metricValue = stringMetricState.metricValue();
    m_extensions = stringMetricState.extensions();
    return *this;
}

inline StringMetricState StringMetricStateBuilder::build() const
{
    // NOLINTNEXTLINE(modernize-return-braced-init-list)
    return StringMetricState(m_activationState, m_activeDeterminationPeriod, m_lifeTimePeriod, m_bodySites, m_physicalConnector, m_metricValue, m_extensions);
}

inline bool StringMetricStateBuilder::isChanged(const StringMetricState& base) const
{
    return *this != base;
}

inline StringMetricStateBuilder& StringMetricStateBuilder::activationState(ComponentActivation activationState)
{
    m_activationState = activationState;
    return *this;
}

inline ComponentActivation& StringMetricStateBuilder::activationState()
{
    return m_activationState;
}

inline ComponentActivation StringMetricStateBuilder::activationState() const
{
    return m_activationState;
}

inline StringMetricStateBuilder& StringMetricStateBuilder::activeDeterminationPeriod(const boost::optional<Duration>& activeDeterminationPeriod)
{
    m_activeDeterminationPeriod = activeDeterminationPeriod;
    return *this;
}

inline StringMetricStateBuilder& StringMetricStateBuilder::activeDeterminationPeriod(boost::optional<Duration>&& activeDeterminationPeriod)
{
    m_activeDeterminationPeriod = std::move(activeDeterminationPeriod);
    return *this;
}

inline boost::optional<Duration>& StringMetricStateBuilder::activeDeterminationPeriod()
{
    return m_activeDeterminationPeriod;
}

inline const boost::optional<Duration>& StringMetricStateBuilder::activeDeterminationPeriod() const
{
    return m_activeDeterminationPeriod;
}

inline StringMetricStateBuilder& StringMetricStateBuilder::lifeTimePeriod(const boost::optional<Duration>& lifeTimePeriod)
{
    m_lifeTimePeriod = lifeTimePeriod;
    return *this;
}

inline StringMetricStateBuilder& StringMetricStateBuilder::lifeTimePeriod(boost::optional<Duration>&& lifeTimePeriod)
{
    m_lifeTimePeriod = std::move(lifeTimePeriod);
    return *this;
}

inline boost::optional<Duration>& StringMetricStateBuilder::lifeTimePeriod()
{
    return m_lifeTimePeriod;
}

inline const boost::optional<Duration>& StringMetricStateBuilder::lifeTimePeriod() const
{
    return m_lifeTimePeriod;
}

inline StringMetricStateBuilder& StringMetricStateBuilder::bodySites(const BodySites& bodySites)
{
    m_bodySites = bodySites;
    return *this;
}

inline StringMetricStateBuilder& StringMetricStateBuilder::bodySites(BodySites&& bodySites)
{
    m_bodySites = std::move(bodySites);
    return *this;
}

inline BodySites& StringMetricStateBuilder::bodySites()
{
    return m_bodySites;
}

inline const BodySites& StringMetricStateBuilder::bodySites() const
{
    return m_bodySites;
}

inline StringMetricStateBuilder& StringMetricStateBuilder::physicalConnector(const boost::optional<PhysicalConnectorInfo>& physicalConnector)
{
    m_physicalConnector = physicalConnector;
    return *this;
}

inline StringMetricStateBuilder& StringMetricStateBuilder::physicalConnector(boost::optional<PhysicalConnectorInfo>&& physicalConnector)
{
    m_physicalConnector = std::move(physicalConnector);
    return *this;
}

inline boost::optional<PhysicalConnectorInfo>& StringMetricStateBuilder::physicalConnector()
{
    return m_physicalConnector;
}

inline const boost::optional<PhysicalConnectorInfo>& StringMetricStateBuilder::physicalConnector() const
{
    return m_physicalConnector;
}

inline StringMetricStateBuilder& StringMetricStateBuilder::metricValue(const boost::optional<StringMetricValue>& metricValue)
{
    m_metricValue = metricValue;
    return *this;
}

inline StringMetricStateBuilder& StringMetricStateBuilder::metricValue(boost::optional<StringMetricValue>&& metricValue)
{
    m_metricValue = std::move(metricValue);
    return *this;
}

inline boost::optional<StringMetricValue>& StringMetricStateBuilder::metricValue()
{
    return m_metricValue;
}

inline const boost::optional<StringMetricValue>& StringMetricStateBuilder::metricValue() const
{
    return m_metricValue;
}

inline StringMetricStateBuilder& StringMetricStateBuilder::extensions(const ExtensionTypes& extensions)
{
    m_extensions = extensions;
    return *this;
}

inline StringMetricStateBuilder& StringMetricStateBuilder::extensions(ExtensionTypes&& extensions)
{
    m_extensions = std::move(extensions);
    return *this;
}

inline ExtensionTypes& StringMetricStateBuilder::extensions()
{
    return m_extensions;
}

inline const ExtensionTypes& StringMetricStateBuilder::extensions() const
{
    return m_extensions;
}

inline bool operator==(const StringMetricState& lhs, const StringMetricStateBuilder& rhs)
{
    return rhs == lhs;
}

inline bool operator!=(const StringMetricStateBuilder& lhs, const StringMetricStateBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const StringMetricState& lhs, const StringMetricStateBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const StringMetricStateBuilder& lhs, const StringMetricState& rhs)
{
    return !(lhs == rhs);
}

inline StringMetricStateBuilder getBuilder(const StringMetricState& stringMetricState)
{
    return StringMetricStateBuilder(stringMetricState);
}

inline StringMetricStateBuilder getBuilder(const DFL::NotNull<SharedPtr<StringMetricState>>& stringMetricState)
{
    return StringMetricStateBuilder(stringMetricState);
}

}
}
