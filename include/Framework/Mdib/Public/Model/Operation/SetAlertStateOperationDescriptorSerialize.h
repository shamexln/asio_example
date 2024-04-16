/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Operation/SetAlertStateOperationDescriptor.h>
#include <Framework/Chrono/Public/DurationSerialize.h>
#include <Framework/Mdib/Public/Model/CodedValueSerialize.h>
#include <Framework/Mdib/Public/Model/ExtensionTypeSerialize.h>
#include <Framework/Mdib/Public/Model/HandleSerialize.h>
#include <Framework/Utils/Public/SerializationHelper.h>
#include <Framework/Utils/Public/Utf8Serialize.h>

#include <boost/serialization/nvp.hpp>
#include <boost/serialization/split_free.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/optional.hpp>
#include <boost/serialization/vector.hpp>

#include <utility>

BOOST_SERIALIZATION_SPLIT_FREE(::DFL::Mdib::SetAlertStateOperationDescriptor)

BOOST_CLASS_VERSION(::DFL::Mdib::SetAlertStateOperationDescriptor, 0)

BOOST_CLASS_TRACKING(::DFL::Mdib::SetAlertStateOperationDescriptor, boost::serialization::track_never)

namespace boost
{
namespace serialization
{
/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void save(Archive& ar, const ::DFL::Mdib::SetAlertStateOperationDescriptor& src, const unsigned int /*fileVersion*/)
{
    const auto& safetyClassification = src.safetyClassification();
    ar & make_nvp("SafetyClassification", safetyClassification);

    const auto& type = src.type();
    DFL::Serialization::saveNvpOptional(ar, "Type", type);

    const auto& operationTarget = src.operationTarget();
    ar & make_nvp("OperationTarget", operationTarget);

    const auto& maxTimeToFinish = src.maxTimeToFinish();
    ar & make_nvp("MaxTimeToFinish", maxTimeToFinish);

    const auto& invocationEffectiveTimeout = src.invocationEffectiveTimeout();
    ar & make_nvp("InvocationEffectiveTimeout", invocationEffectiveTimeout);

    const auto& retriggerable = src.retriggerable();
    ar & make_nvp("Retriggerable", retriggerable);

    const auto& accessLevel = src.accessLevel();
    ar & make_nvp("AccessLevel", accessLevel);

    const auto& modifiableData = src.modifiableData();
    ar & make_nvp("ModifiableData", modifiableData);

    const auto& extensions = src.extensions();
    ar & make_nvp("Extensions", extensions);
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load_construct_data(Archive& ar, ::DFL::Mdib::SetAlertStateOperationDescriptor* dst, const unsigned int /*version*/)
{
    boost::optional<::DFL::Mdib::SafetyClassification> safetyClassification{};
    ar & make_nvp("SafetyClassification", safetyClassification);

    boost::optional<::DFL::Mdib::CodedValue> type{};
    DFL::Serialization::loadNvpOptional(ar, "Type", type);

    ::DFL::Mdib::Handle operationTarget{};
    ar & make_nvp("OperationTarget", operationTarget);

    boost::optional<::DFL::Mdib::Duration> maxTimeToFinish{};
    ar & make_nvp("MaxTimeToFinish", maxTimeToFinish);

    boost::optional<::DFL::Mdib::Duration> invocationEffectiveTimeout{};
    ar & make_nvp("InvocationEffectiveTimeout", invocationEffectiveTimeout);

    ::DFL::Mdib::Retriggerable retriggerable{};
    ar & make_nvp("Retriggerable", retriggerable);

    ::DFL::Mdib::AccessLevel accessLevel{};
    ar & make_nvp("AccessLevel", accessLevel);

    ::DFL::Mdib::XPathExpressions modifiableData{};
    ar & make_nvp("ModifiableData", modifiableData);

    ::DFL::Mdib::ExtensionTypes extensions{};
    ar & make_nvp("Extensions", extensions);

    ::new(dst) ::DFL::Mdib::SetAlertStateOperationDescriptor(
        safetyClassification,
        type,
        operationTarget,
        maxTimeToFinish,
        invocationEffectiveTimeout,
        retriggerable,
        accessLevel,
        modifiableData,
        std::move(extensions));
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load(Archive& /*ar*/, ::DFL::Mdib::SetAlertStateOperationDescriptor& /*dst*/, const unsigned int /*version*/)
{
}

}
}
