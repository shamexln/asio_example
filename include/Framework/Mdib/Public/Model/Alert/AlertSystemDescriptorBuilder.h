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

#include <Framework/Mdib/Public/Model/Alert/AlertSystemDescriptor.h>

namespace DFL
{
namespace Mdib
{

/**
 * @brief Builder with fluent interface for @ref AlertSystemDescriptor
 * @ingroup Mdib
 */
class AlertSystemDescriptorBuilder
{
    public:
        /// @brief Typedef to the immutable @ref AlertSystemDescriptor
        using BuiltType = AlertSystemDescriptor;

        /// @brief Builder based on given immutable @ref AlertSystemDescriptor
        explicit AlertSystemDescriptorBuilder(const AlertSystemDescriptor& alertSystemDescriptor=AlertSystemDescriptor());

        /// @brief Builder based on given immutable @ref AlertSystemDescriptor
        explicit AlertSystemDescriptorBuilder(const DFL::NotNull<SharedPtr<AlertSystemDescriptor>>& alertSystemDescriptor);

        /// @brief Overwrite all values with given immutable @ref AlertSystemDescriptor
        AlertSystemDescriptorBuilder& operator=(const AlertSystemDescriptor& alertSystemDescriptor);

        /// @brief Explicit conversion to immutable @ref AlertSystemDescriptor
        AlertSystemDescriptor build() const;

        /// @brief Test whether the builder differs from the immutable @ref AlertSystemDescriptor
        bool isChanged(const AlertSystemDescriptor& base) const;

        /// @brief Setter for safetyClassification
        /// @{
        AlertSystemDescriptorBuilder& safetyClassification(SafetyClassification safetyClassification);
        /// @}

        /// @brief Setter for type
        /// @{
        AlertSystemDescriptorBuilder& type(const boost::optional<CodedValue>& type);
        AlertSystemDescriptorBuilder& type(boost::optional<CodedValue>&& type);
        /// @}

        /// @brief Setter for maxPhysiologicalAlarmListEntries
        /// @{
        AlertSystemDescriptorBuilder& maxPhysiologicalAlarmListEntries(const boost::optional<MaxPhysiologicalParallelAlarms>& maxPhysiologicalAlarmListEntries);
        AlertSystemDescriptorBuilder& maxPhysiologicalAlarmListEntries(boost::optional<MaxPhysiologicalParallelAlarms>&& maxPhysiologicalAlarmListEntries);
        /// @}

        /// @brief Setter for maxTechnicalAlarmListEntries
        /// @{
        AlertSystemDescriptorBuilder& maxTechnicalAlarmListEntries(const boost::optional<MaxTechnicalParallelAlarms>& maxTechnicalAlarmListEntries);
        AlertSystemDescriptorBuilder& maxTechnicalAlarmListEntries(boost::optional<MaxTechnicalParallelAlarms>&& maxTechnicalAlarmListEntries);
        /// @}

        /// @brief Setter for selfCheckPeriod
        /// @{
        AlertSystemDescriptorBuilder& selfCheckPeriod(const boost::optional<Duration>& selfCheckPeriod);
        AlertSystemDescriptorBuilder& selfCheckPeriod(boost::optional<Duration>&& selfCheckPeriod);
        /// @}

        /// @brief Setter for extensions
        /// @{
        AlertSystemDescriptorBuilder& extensions(const ExtensionTypes& extensions);
        AlertSystemDescriptorBuilder& extensions(ExtensionTypes&& extensions);
        /// @}

        /// @brief Getter for safetyClassification
        /// @{
        SafetyClassification& safetyClassification();
        SafetyClassification safetyClassification() const;
        /// @}

        /// @brief Getter for type
        /// @{
        boost::optional<CodedValue>& type();
        const boost::optional<CodedValue>& type() const;
        /// @}

        /// @brief Getter for maxPhysiologicalAlarmListEntries
        /// @{
        boost::optional<MaxPhysiologicalParallelAlarms>& maxPhysiologicalAlarmListEntries();
        const boost::optional<MaxPhysiologicalParallelAlarms>& maxPhysiologicalAlarmListEntries() const;
        /// @}

        /// @brief Getter for maxTechnicalAlarmListEntries
        /// @{
        boost::optional<MaxTechnicalParallelAlarms>& maxTechnicalAlarmListEntries();
        const boost::optional<MaxTechnicalParallelAlarms>& maxTechnicalAlarmListEntries() const;
        /// @}

        /// @brief Getter for selfCheckPeriod
        /// @{
        boost::optional<Duration>& selfCheckPeriod();
        const boost::optional<Duration>& selfCheckPeriod() const;
        /// @}

        /// @brief Getter for extensions
        /// @{
        ExtensionTypes& extensions();
        const ExtensionTypes& extensions() const;
        /// @}

    private:
        SafetyClassification m_safetyClassification;
        boost::optional<CodedValue> m_type;
        boost::optional<MaxPhysiologicalParallelAlarms> m_maxPhysiologicalAlarmListEntries;
        boost::optional<MaxTechnicalParallelAlarms> m_maxTechnicalAlarmListEntries;
        boost::optional<Duration> m_selfCheckPeriod;
        ExtensionTypes m_extensions;
};

/**
 * @brief Equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator==(const AlertSystemDescriptor& lhs, const AlertSystemDescriptor& rhs);
DFL_MDIB_EXPIMP bool operator==(const AlertSystemDescriptorBuilder& lhs, const AlertSystemDescriptorBuilder& rhs);
DFL_MDIB_EXPIMP bool operator==(const AlertSystemDescriptorBuilder& lhs, const AlertSystemDescriptor& rhs);
bool operator==(const AlertSystemDescriptor& lhs, const AlertSystemDescriptorBuilder& rhs);
/// @}

/**
 * @brief Not equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator!=(const AlertSystemDescriptor& lhs, const AlertSystemDescriptor& rhs);
bool operator!=(const AlertSystemDescriptorBuilder& lhs, const AlertSystemDescriptorBuilder& rhs);
bool operator!=(const AlertSystemDescriptor& lhs, const AlertSystemDescriptorBuilder& rhs);
bool operator!=(const AlertSystemDescriptorBuilder& lhs, const AlertSystemDescriptor& rhs);
/// @}

/**
 * @brief Factory function to create %Builder based on given immutable @ref AlertSystemDescriptor
 * @ingroup Mdib
 */
/// @{
AlertSystemDescriptorBuilder getBuilder(const AlertSystemDescriptor& alertSystemDescriptor);
AlertSystemDescriptorBuilder getBuilder(const DFL::NotNull<SharedPtr<AlertSystemDescriptor>>& alertSystemDescriptor);
/// @}

/**
 * @brief Helper function throws runtime_error in case of a not equal member
 * @ingroup Mdib
 */
DFL_MDIB_EXPIMP void assertEqual(const AlertSystemDescriptor& lhs, const AlertSystemDescriptor& rhs);

inline AlertSystemDescriptorBuilder::AlertSystemDescriptorBuilder(const AlertSystemDescriptor& alertSystemDescriptor) :
    m_safetyClassification(alertSystemDescriptor.safetyClassification()),
    m_type(alertSystemDescriptor.type()),
    m_maxPhysiologicalAlarmListEntries(alertSystemDescriptor.maxPhysiologicalAlarmListEntries()),
    m_maxTechnicalAlarmListEntries(alertSystemDescriptor.maxTechnicalAlarmListEntries()),
    m_selfCheckPeriod(alertSystemDescriptor.selfCheckPeriod()),
    m_extensions(alertSystemDescriptor.extensions())
{
}

inline AlertSystemDescriptorBuilder::AlertSystemDescriptorBuilder(const DFL::NotNull<SharedPtr<AlertSystemDescriptor>>& alertSystemDescriptor) :
    m_safetyClassification(alertSystemDescriptor->safetyClassification()),
    m_type(alertSystemDescriptor->type()),
    m_maxPhysiologicalAlarmListEntries(alertSystemDescriptor->maxPhysiologicalAlarmListEntries()),
    m_maxTechnicalAlarmListEntries(alertSystemDescriptor->maxTechnicalAlarmListEntries()),
    m_selfCheckPeriod(alertSystemDescriptor->selfCheckPeriod()),
    m_extensions(alertSystemDescriptor->extensions())
{
}

inline AlertSystemDescriptorBuilder& AlertSystemDescriptorBuilder::operator=(const AlertSystemDescriptor& alertSystemDescriptor)
{
    m_safetyClassification = alertSystemDescriptor.safetyClassification();
    m_type = alertSystemDescriptor.type();
    m_maxPhysiologicalAlarmListEntries = alertSystemDescriptor.maxPhysiologicalAlarmListEntries();
    m_maxTechnicalAlarmListEntries = alertSystemDescriptor.maxTechnicalAlarmListEntries();
    m_selfCheckPeriod = alertSystemDescriptor.selfCheckPeriod();
    m_extensions = alertSystemDescriptor.extensions();
    return *this;
}

inline AlertSystemDescriptor AlertSystemDescriptorBuilder::build() const
{
    // NOLINTNEXTLINE(modernize-return-braced-init-list)
    return AlertSystemDescriptor(m_safetyClassification, m_type, m_maxPhysiologicalAlarmListEntries, m_maxTechnicalAlarmListEntries, m_selfCheckPeriod, m_extensions);
}

inline bool AlertSystemDescriptorBuilder::isChanged(const AlertSystemDescriptor& base) const
{
    return *this != base;
}

inline AlertSystemDescriptorBuilder& AlertSystemDescriptorBuilder::safetyClassification(SafetyClassification safetyClassification)
{
    m_safetyClassification = safetyClassification;
    return *this;
}

inline SafetyClassification& AlertSystemDescriptorBuilder::safetyClassification()
{
    return m_safetyClassification;
}

inline SafetyClassification AlertSystemDescriptorBuilder::safetyClassification() const
{
    return m_safetyClassification;
}

inline AlertSystemDescriptorBuilder& AlertSystemDescriptorBuilder::type(const boost::optional<CodedValue>& type)
{
    m_type = type;
    return *this;
}

inline AlertSystemDescriptorBuilder& AlertSystemDescriptorBuilder::type(boost::optional<CodedValue>&& type)
{
    m_type = std::move(type);
    return *this;
}

inline boost::optional<CodedValue>& AlertSystemDescriptorBuilder::type()
{
    return m_type;
}

inline const boost::optional<CodedValue>& AlertSystemDescriptorBuilder::type() const
{
    return m_type;
}

inline AlertSystemDescriptorBuilder& AlertSystemDescriptorBuilder::maxPhysiologicalAlarmListEntries(const boost::optional<MaxPhysiologicalParallelAlarms>& maxPhysiologicalAlarmListEntries)
{
    m_maxPhysiologicalAlarmListEntries = maxPhysiologicalAlarmListEntries;
    return *this;
}

inline AlertSystemDescriptorBuilder& AlertSystemDescriptorBuilder::maxPhysiologicalAlarmListEntries(boost::optional<MaxPhysiologicalParallelAlarms>&& maxPhysiologicalAlarmListEntries)
{
    m_maxPhysiologicalAlarmListEntries = std::move(maxPhysiologicalAlarmListEntries);
    return *this;
}

inline boost::optional<MaxPhysiologicalParallelAlarms>& AlertSystemDescriptorBuilder::maxPhysiologicalAlarmListEntries()
{
    return m_maxPhysiologicalAlarmListEntries;
}

inline const boost::optional<MaxPhysiologicalParallelAlarms>& AlertSystemDescriptorBuilder::maxPhysiologicalAlarmListEntries() const
{
    return m_maxPhysiologicalAlarmListEntries;
}

inline AlertSystemDescriptorBuilder& AlertSystemDescriptorBuilder::maxTechnicalAlarmListEntries(const boost::optional<MaxTechnicalParallelAlarms>& maxTechnicalAlarmListEntries)
{
    m_maxTechnicalAlarmListEntries = maxTechnicalAlarmListEntries;
    return *this;
}

inline AlertSystemDescriptorBuilder& AlertSystemDescriptorBuilder::maxTechnicalAlarmListEntries(boost::optional<MaxTechnicalParallelAlarms>&& maxTechnicalAlarmListEntries)
{
    m_maxTechnicalAlarmListEntries = std::move(maxTechnicalAlarmListEntries);
    return *this;
}

inline boost::optional<MaxTechnicalParallelAlarms>& AlertSystemDescriptorBuilder::maxTechnicalAlarmListEntries()
{
    return m_maxTechnicalAlarmListEntries;
}

inline const boost::optional<MaxTechnicalParallelAlarms>& AlertSystemDescriptorBuilder::maxTechnicalAlarmListEntries() const
{
    return m_maxTechnicalAlarmListEntries;
}

inline AlertSystemDescriptorBuilder& AlertSystemDescriptorBuilder::selfCheckPeriod(const boost::optional<Duration>& selfCheckPeriod)
{
    m_selfCheckPeriod = selfCheckPeriod;
    return *this;
}

inline AlertSystemDescriptorBuilder& AlertSystemDescriptorBuilder::selfCheckPeriod(boost::optional<Duration>&& selfCheckPeriod)
{
    m_selfCheckPeriod = std::move(selfCheckPeriod);
    return *this;
}

inline boost::optional<Duration>& AlertSystemDescriptorBuilder::selfCheckPeriod()
{
    return m_selfCheckPeriod;
}

inline const boost::optional<Duration>& AlertSystemDescriptorBuilder::selfCheckPeriod() const
{
    return m_selfCheckPeriod;
}

inline AlertSystemDescriptorBuilder& AlertSystemDescriptorBuilder::extensions(const ExtensionTypes& extensions)
{
    m_extensions = extensions;
    return *this;
}

inline AlertSystemDescriptorBuilder& AlertSystemDescriptorBuilder::extensions(ExtensionTypes&& extensions)
{
    m_extensions = std::move(extensions);
    return *this;
}

inline ExtensionTypes& AlertSystemDescriptorBuilder::extensions()
{
    return m_extensions;
}

inline const ExtensionTypes& AlertSystemDescriptorBuilder::extensions() const
{
    return m_extensions;
}

inline bool operator==(const AlertSystemDescriptor& lhs, const AlertSystemDescriptorBuilder& rhs)
{
    return rhs == lhs;
}

inline bool operator!=(const AlertSystemDescriptorBuilder& lhs, const AlertSystemDescriptorBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const AlertSystemDescriptor& lhs, const AlertSystemDescriptorBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const AlertSystemDescriptorBuilder& lhs, const AlertSystemDescriptor& rhs)
{
    return !(lhs == rhs);
}

inline AlertSystemDescriptorBuilder getBuilder(const AlertSystemDescriptor& alertSystemDescriptor)
{
    return AlertSystemDescriptorBuilder(alertSystemDescriptor);
}

inline AlertSystemDescriptorBuilder getBuilder(const DFL::NotNull<SharedPtr<AlertSystemDescriptor>>& alertSystemDescriptor)
{
    return AlertSystemDescriptorBuilder(alertSystemDescriptor);
}

}
}
