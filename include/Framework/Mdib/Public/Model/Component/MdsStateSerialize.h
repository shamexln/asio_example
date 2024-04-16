/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Component/MdsState.h>
#include <Framework/Chrono/Public/DurationSerialize.h>
#include <Framework/Mdib/Public/Model/Component/CalibrationInfoSerialize.h>
#include <Framework/Mdib/Public/Model/Component/PhysicalConnectorInfoSerialize.h>
#include <Framework/Mdib/Public/Model/ExtensionTypeSerialize.h>
#include <Framework/Mdib/Public/Model/InstanceIdentifierSerialize.h>
#include <Framework/Utils/Public/LanguageTagSerialize.h>
#include <Framework/Utils/Public/SerializationHelper.h>

#include <boost/serialization/nvp.hpp>
#include <boost/serialization/split_free.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/optional.hpp>
#include <boost/serialization/vector.hpp>

#include <utility>

BOOST_SERIALIZATION_SPLIT_FREE(::DFL::Mdib::MdsState)

BOOST_CLASS_VERSION(::DFL::Mdib::MdsState, 0)

BOOST_CLASS_TRACKING(::DFL::Mdib::MdsState, boost::serialization::track_never)

namespace boost
{
namespace serialization
{
/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void save(Archive& ar, const ::DFL::Mdib::MdsState& src, const unsigned int /*fileVersion*/)
{
    const auto& activationState = src.activationState();
    ar & make_nvp("ActivationState", activationState);

    const auto& operatingHours = src.operatingHours();
    ar & make_nvp("OperatingHours", operatingHours);

    const auto& operatingCycles = src.operatingCycles();
    ar & make_nvp("OperatingCycles", operatingCycles);

    const auto& calibrationInfo = src.calibrationInfo();
    ar & make_nvp("CalibrationInfo", calibrationInfo);

    const auto& nextCalibrationInfo = src.nextCalibrationInfo();
    ar & make_nvp("NextCalibrationInfo", nextCalibrationInfo);

    const auto& physicalConnector = src.physicalConnector();
    ar & make_nvp("PhysicalConnector", physicalConnector);

    const auto& lang = src.lang();
    ar & make_nvp("Lang", lang);

    const auto& operatingMode = src.operatingMode();
    ar & make_nvp("OperatingMode", operatingMode);

    const auto& operatingJurisdiction = src.operatingJurisdiction();
    DFL::Serialization::saveNvpOptional(ar, "OperatingJurisdiction", operatingJurisdiction);

    const auto& extensions = src.extensions();
    ar & make_nvp("Extensions", extensions);
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load_construct_data(Archive& ar, ::DFL::Mdib::MdsState* dst, const unsigned int /*version*/)
{
    ::DFL::Mdib::ComponentActivation activationState{};
    ar & make_nvp("ActivationState", activationState);

    boost::optional<::DFL::Chrono::Hours> operatingHours{};
    ar & make_nvp("OperatingHours", operatingHours);

    boost::optional<::DFL::Mdib::OperatingCycles> operatingCycles{};
    ar & make_nvp("OperatingCycles", operatingCycles);

    boost::optional<::DFL::Mdib::CalibrationInfo> calibrationInfo{};
    ar & make_nvp("CalibrationInfo", calibrationInfo);

    boost::optional<::DFL::Mdib::CalibrationInfo> nextCalibrationInfo{};
    ar & make_nvp("NextCalibrationInfo", nextCalibrationInfo);

    boost::optional<::DFL::Mdib::PhysicalConnectorInfo> physicalConnector{};
    ar & make_nvp("PhysicalConnector", physicalConnector);

    ::DFL::Locale::LanguageTag lang{};
    ar & make_nvp("Lang", lang);

    ::DFL::Mdib::MdsOperatingMode operatingMode{};
    ar & make_nvp("OperatingMode", operatingMode);

    boost::optional<::DFL::Mdib::InstanceIdentifier> operatingJurisdiction{};
    DFL::Serialization::loadNvpOptional(ar, "OperatingJurisdiction", operatingJurisdiction);

    ::DFL::Mdib::ExtensionTypes extensions{};
    ar & make_nvp("Extensions", extensions);

    ::new(dst) ::DFL::Mdib::MdsState(
        activationState,
        operatingHours,
        operatingCycles,
        calibrationInfo,
        nextCalibrationInfo,
        physicalConnector,
        lang,
        operatingMode,
        operatingJurisdiction,
        std::move(extensions));
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load(Archive& /*ar*/, ::DFL::Mdib::MdsState& /*dst*/, const unsigned int /*version*/)
{
}

}
}
