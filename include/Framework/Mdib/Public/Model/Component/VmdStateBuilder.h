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

#include <Framework/Mdib/Public/Model/Component/VmdState.h>

namespace DFL
{
namespace Mdib
{

/**
 * @brief Builder with fluent interface for @ref VmdState
 * @ingroup Mdib
 */
class VmdStateBuilder
{
    public:
        /// @brief Typedef to the immutable @ref VmdState
        using BuiltType = VmdState;

        /// @brief Builder based on given immutable @ref VmdState
        explicit VmdStateBuilder(const VmdState& vmdState=VmdState());

        /// @brief Builder based on given immutable @ref VmdState
        explicit VmdStateBuilder(const DFL::NotNull<SharedPtr<VmdState>>& vmdState);

        /// @brief Overwrite all values with given immutable @ref VmdState
        VmdStateBuilder& operator=(const VmdState& vmdState);

        /// @brief Explicit conversion to immutable @ref VmdState
        VmdState build() const;

        /// @brief Test whether the builder differs from the immutable @ref VmdState
        bool isChanged(const VmdState& base) const;

        /// @brief Setter for activationState
        /// @{
        VmdStateBuilder& activationState(ComponentActivation activationState);
        /// @}

        /// @brief Setter for operatingHours
        /// @{
        VmdStateBuilder& operatingHours(const boost::optional<Chrono::Hours>& operatingHours);
        VmdStateBuilder& operatingHours(boost::optional<Chrono::Hours>&& operatingHours);
        /// @}

        /// @brief Setter for operatingCycles
        /// @{
        VmdStateBuilder& operatingCycles(const boost::optional<OperatingCycles>& operatingCycles);
        VmdStateBuilder& operatingCycles(boost::optional<OperatingCycles>&& operatingCycles);
        /// @}

        /// @brief Setter for calibrationInfo
        /// @{
        VmdStateBuilder& calibrationInfo(const boost::optional<CalibrationInfo>& calibrationInfo);
        VmdStateBuilder& calibrationInfo(boost::optional<CalibrationInfo>&& calibrationInfo);
        /// @}

        /// @brief Setter for nextCalibrationInfo
        /// @{
        VmdStateBuilder& nextCalibrationInfo(const boost::optional<CalibrationInfo>& nextCalibrationInfo);
        VmdStateBuilder& nextCalibrationInfo(boost::optional<CalibrationInfo>&& nextCalibrationInfo);
        /// @}

        /// @brief Setter for physicalConnector
        /// @{
        VmdStateBuilder& physicalConnector(const boost::optional<PhysicalConnectorInfo>& physicalConnector);
        VmdStateBuilder& physicalConnector(boost::optional<PhysicalConnectorInfo>&& physicalConnector);
        /// @}

        /// @brief Setter for operatingJurisdiction
        /// @{
        VmdStateBuilder& operatingJurisdiction(const boost::optional<InstanceIdentifier>& operatingJurisdiction);
        VmdStateBuilder& operatingJurisdiction(boost::optional<InstanceIdentifier>&& operatingJurisdiction);
        /// @}

        /// @brief Setter for extensions
        /// @{
        VmdStateBuilder& extensions(const ExtensionTypes& extensions);
        VmdStateBuilder& extensions(ExtensionTypes&& extensions);
        /// @}

        /// @brief Getter for activationState
        /// @{
        ComponentActivation& activationState();
        ComponentActivation activationState() const;
        /// @}

        /// @brief Getter for operatingHours
        /// @{
        boost::optional<Chrono::Hours>& operatingHours();
        const boost::optional<Chrono::Hours>& operatingHours() const;
        /// @}

        /// @brief Getter for operatingCycles
        /// @{
        boost::optional<OperatingCycles>& operatingCycles();
        const boost::optional<OperatingCycles>& operatingCycles() const;
        /// @}

        /// @brief Getter for calibrationInfo
        /// @{
        boost::optional<CalibrationInfo>& calibrationInfo();
        const boost::optional<CalibrationInfo>& calibrationInfo() const;
        /// @}

        /// @brief Getter for nextCalibrationInfo
        /// @{
        boost::optional<CalibrationInfo>& nextCalibrationInfo();
        const boost::optional<CalibrationInfo>& nextCalibrationInfo() const;
        /// @}

        /// @brief Getter for physicalConnector
        /// @{
        boost::optional<PhysicalConnectorInfo>& physicalConnector();
        const boost::optional<PhysicalConnectorInfo>& physicalConnector() const;
        /// @}

        /// @brief Getter for operatingJurisdiction
        /// @{
        boost::optional<InstanceIdentifier>& operatingJurisdiction();
        const boost::optional<InstanceIdentifier>& operatingJurisdiction() const;
        /// @}

        /// @brief Getter for extensions
        /// @{
        ExtensionTypes& extensions();
        const ExtensionTypes& extensions() const;
        /// @}

    private:
        ComponentActivation m_activationState;
        boost::optional<Chrono::Hours> m_operatingHours;
        boost::optional<OperatingCycles> m_operatingCycles;
        boost::optional<CalibrationInfo> m_calibrationInfo;
        boost::optional<CalibrationInfo> m_nextCalibrationInfo;
        boost::optional<PhysicalConnectorInfo> m_physicalConnector;
        boost::optional<InstanceIdentifier> m_operatingJurisdiction;
        ExtensionTypes m_extensions;
};

/**
 * @brief Equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator==(const VmdState& lhs, const VmdState& rhs);
DFL_MDIB_EXPIMP bool operator==(const VmdStateBuilder& lhs, const VmdStateBuilder& rhs);
DFL_MDIB_EXPIMP bool operator==(const VmdStateBuilder& lhs, const VmdState& rhs);
bool operator==(const VmdState& lhs, const VmdStateBuilder& rhs);
/// @}

/**
 * @brief Not equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator!=(const VmdState& lhs, const VmdState& rhs);
bool operator!=(const VmdStateBuilder& lhs, const VmdStateBuilder& rhs);
bool operator!=(const VmdState& lhs, const VmdStateBuilder& rhs);
bool operator!=(const VmdStateBuilder& lhs, const VmdState& rhs);
/// @}

/**
 * @brief Factory function to create %Builder based on given immutable @ref VmdState
 * @ingroup Mdib
 */
/// @{
VmdStateBuilder getBuilder(const VmdState& vmdState);
VmdStateBuilder getBuilder(const DFL::NotNull<SharedPtr<VmdState>>& vmdState);
/// @}

/**
 * @brief Helper function throws runtime_error in case of a not equal member
 * @ingroup Mdib
 */
DFL_MDIB_EXPIMP void assertEqual(const VmdState& lhs, const VmdState& rhs);

inline VmdStateBuilder::VmdStateBuilder(const VmdState& vmdState) :
    m_activationState(vmdState.activationState()),
    m_operatingHours(vmdState.operatingHours()),
    m_operatingCycles(vmdState.operatingCycles()),
    m_calibrationInfo(vmdState.calibrationInfo()),
    m_nextCalibrationInfo(vmdState.nextCalibrationInfo()),
    m_physicalConnector(vmdState.physicalConnector()),
    m_operatingJurisdiction(vmdState.operatingJurisdiction()),
    m_extensions(vmdState.extensions())
{
}

inline VmdStateBuilder::VmdStateBuilder(const DFL::NotNull<SharedPtr<VmdState>>& vmdState) :
    m_activationState(vmdState->activationState()),
    m_operatingHours(vmdState->operatingHours()),
    m_operatingCycles(vmdState->operatingCycles()),
    m_calibrationInfo(vmdState->calibrationInfo()),
    m_nextCalibrationInfo(vmdState->nextCalibrationInfo()),
    m_physicalConnector(vmdState->physicalConnector()),
    m_operatingJurisdiction(vmdState->operatingJurisdiction()),
    m_extensions(vmdState->extensions())
{
}

inline VmdStateBuilder& VmdStateBuilder::operator=(const VmdState& vmdState)
{
    m_activationState = vmdState.activationState();
    m_operatingHours = vmdState.operatingHours();
    m_operatingCycles = vmdState.operatingCycles();
    m_calibrationInfo = vmdState.calibrationInfo();
    m_nextCalibrationInfo = vmdState.nextCalibrationInfo();
    m_physicalConnector = vmdState.physicalConnector();
    m_operatingJurisdiction = vmdState.operatingJurisdiction();
    m_extensions = vmdState.extensions();
    return *this;
}

inline VmdState VmdStateBuilder::build() const
{
    // NOLINTNEXTLINE(modernize-return-braced-init-list)
    return VmdState(m_activationState, m_operatingHours, m_operatingCycles, m_calibrationInfo, m_nextCalibrationInfo, m_physicalConnector, m_operatingJurisdiction, m_extensions);
}

inline bool VmdStateBuilder::isChanged(const VmdState& base) const
{
    return *this != base;
}

inline VmdStateBuilder& VmdStateBuilder::activationState(ComponentActivation activationState)
{
    m_activationState = activationState;
    return *this;
}

inline ComponentActivation& VmdStateBuilder::activationState()
{
    return m_activationState;
}

inline ComponentActivation VmdStateBuilder::activationState() const
{
    return m_activationState;
}

inline VmdStateBuilder& VmdStateBuilder::operatingHours(const boost::optional<Chrono::Hours>& operatingHours)
{
    m_operatingHours = operatingHours;
    return *this;
}

inline VmdStateBuilder& VmdStateBuilder::operatingHours(boost::optional<Chrono::Hours>&& operatingHours)
{
    m_operatingHours = std::move(operatingHours);
    return *this;
}

inline boost::optional<Chrono::Hours>& VmdStateBuilder::operatingHours()
{
    return m_operatingHours;
}

inline const boost::optional<Chrono::Hours>& VmdStateBuilder::operatingHours() const
{
    return m_operatingHours;
}

inline VmdStateBuilder& VmdStateBuilder::operatingCycles(const boost::optional<OperatingCycles>& operatingCycles)
{
    m_operatingCycles = operatingCycles;
    return *this;
}

inline VmdStateBuilder& VmdStateBuilder::operatingCycles(boost::optional<OperatingCycles>&& operatingCycles)
{
    m_operatingCycles = std::move(operatingCycles);
    return *this;
}

inline boost::optional<OperatingCycles>& VmdStateBuilder::operatingCycles()
{
    return m_operatingCycles;
}

inline const boost::optional<OperatingCycles>& VmdStateBuilder::operatingCycles() const
{
    return m_operatingCycles;
}

inline VmdStateBuilder& VmdStateBuilder::calibrationInfo(const boost::optional<CalibrationInfo>& calibrationInfo)
{
    m_calibrationInfo = calibrationInfo;
    return *this;
}

inline VmdStateBuilder& VmdStateBuilder::calibrationInfo(boost::optional<CalibrationInfo>&& calibrationInfo)
{
    m_calibrationInfo = std::move(calibrationInfo);
    return *this;
}

inline boost::optional<CalibrationInfo>& VmdStateBuilder::calibrationInfo()
{
    return m_calibrationInfo;
}

inline const boost::optional<CalibrationInfo>& VmdStateBuilder::calibrationInfo() const
{
    return m_calibrationInfo;
}

inline VmdStateBuilder& VmdStateBuilder::nextCalibrationInfo(const boost::optional<CalibrationInfo>& nextCalibrationInfo)
{
    m_nextCalibrationInfo = nextCalibrationInfo;
    return *this;
}

inline VmdStateBuilder& VmdStateBuilder::nextCalibrationInfo(boost::optional<CalibrationInfo>&& nextCalibrationInfo)
{
    m_nextCalibrationInfo = std::move(nextCalibrationInfo);
    return *this;
}

inline boost::optional<CalibrationInfo>& VmdStateBuilder::nextCalibrationInfo()
{
    return m_nextCalibrationInfo;
}

inline const boost::optional<CalibrationInfo>& VmdStateBuilder::nextCalibrationInfo() const
{
    return m_nextCalibrationInfo;
}

inline VmdStateBuilder& VmdStateBuilder::physicalConnector(const boost::optional<PhysicalConnectorInfo>& physicalConnector)
{
    m_physicalConnector = physicalConnector;
    return *this;
}

inline VmdStateBuilder& VmdStateBuilder::physicalConnector(boost::optional<PhysicalConnectorInfo>&& physicalConnector)
{
    m_physicalConnector = std::move(physicalConnector);
    return *this;
}

inline boost::optional<PhysicalConnectorInfo>& VmdStateBuilder::physicalConnector()
{
    return m_physicalConnector;
}

inline const boost::optional<PhysicalConnectorInfo>& VmdStateBuilder::physicalConnector() const
{
    return m_physicalConnector;
}

inline VmdStateBuilder& VmdStateBuilder::operatingJurisdiction(const boost::optional<InstanceIdentifier>& operatingJurisdiction)
{
    m_operatingJurisdiction = operatingJurisdiction;
    return *this;
}

inline VmdStateBuilder& VmdStateBuilder::operatingJurisdiction(boost::optional<InstanceIdentifier>&& operatingJurisdiction)
{
    m_operatingJurisdiction = std::move(operatingJurisdiction);
    return *this;
}

inline boost::optional<InstanceIdentifier>& VmdStateBuilder::operatingJurisdiction()
{
    return m_operatingJurisdiction;
}

inline const boost::optional<InstanceIdentifier>& VmdStateBuilder::operatingJurisdiction() const
{
    return m_operatingJurisdiction;
}

inline VmdStateBuilder& VmdStateBuilder::extensions(const ExtensionTypes& extensions)
{
    m_extensions = extensions;
    return *this;
}

inline VmdStateBuilder& VmdStateBuilder::extensions(ExtensionTypes&& extensions)
{
    m_extensions = std::move(extensions);
    return *this;
}

inline ExtensionTypes& VmdStateBuilder::extensions()
{
    return m_extensions;
}

inline const ExtensionTypes& VmdStateBuilder::extensions() const
{
    return m_extensions;
}

inline bool operator==(const VmdState& lhs, const VmdStateBuilder& rhs)
{
    return rhs == lhs;
}

inline bool operator!=(const VmdStateBuilder& lhs, const VmdStateBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const VmdState& lhs, const VmdStateBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const VmdStateBuilder& lhs, const VmdState& rhs)
{
    return !(lhs == rhs);
}

inline VmdStateBuilder getBuilder(const VmdState& vmdState)
{
    return VmdStateBuilder(vmdState);
}

inline VmdStateBuilder getBuilder(const DFL::NotNull<SharedPtr<VmdState>>& vmdState)
{
    return VmdStateBuilder(vmdState);
}

}
}