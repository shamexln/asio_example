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

#include <Framework/Mdib/Public/Model/Operation/SetContextStateOperationDescriptor.h>

namespace DFL
{
namespace Mdib
{

/**
 * @brief Builder with fluent interface for @ref SetContextStateOperationDescriptor
 * @ingroup Mdib
 */
class SetContextStateOperationDescriptorBuilder
{
    public:
        /// @brief Typedef to the immutable @ref SetContextStateOperationDescriptor
        using BuiltType = SetContextStateOperationDescriptor;

        /// @brief Builder based on given immutable @ref SetContextStateOperationDescriptor
        explicit SetContextStateOperationDescriptorBuilder(const SetContextStateOperationDescriptor& setContextStateOperationDescriptor=SetContextStateOperationDescriptor());

        /// @brief Builder based on given immutable @ref SetContextStateOperationDescriptor
        explicit SetContextStateOperationDescriptorBuilder(const DFL::NotNull<SharedPtr<SetContextStateOperationDescriptor>>& setContextStateOperationDescriptor);

        /// @brief Overwrite all values with given immutable @ref SetContextStateOperationDescriptor
        SetContextStateOperationDescriptorBuilder& operator=(const SetContextStateOperationDescriptor& setContextStateOperationDescriptor);

        /// @brief Explicit conversion to immutable @ref SetContextStateOperationDescriptor
        SetContextStateOperationDescriptor build() const;

        /// @brief Test whether the builder differs from the immutable @ref SetContextStateOperationDescriptor
        bool isChanged(const SetContextStateOperationDescriptor& base) const;

        /// @brief Setter for safetyClassification
        /// @{
        SetContextStateOperationDescriptorBuilder& safetyClassification(boost::optional<SafetyClassification> safetyClassification);
        /// @}

        /// @brief Setter for type
        /// @{
        SetContextStateOperationDescriptorBuilder& type(const boost::optional<CodedValue>& type);
        SetContextStateOperationDescriptorBuilder& type(boost::optional<CodedValue>&& type);
        /// @}

        /// @brief Setter for operationTarget
        /// @{
        SetContextStateOperationDescriptorBuilder& operationTarget(const Handle& operationTarget);
        SetContextStateOperationDescriptorBuilder& operationTarget(Handle&& operationTarget);
        /// @}

        /// @brief Setter for maxTimeToFinish
        /// @{
        SetContextStateOperationDescriptorBuilder& maxTimeToFinish(const boost::optional<Duration>& maxTimeToFinish);
        SetContextStateOperationDescriptorBuilder& maxTimeToFinish(boost::optional<Duration>&& maxTimeToFinish);
        /// @}

        /// @brief Setter for invocationEffectiveTimeout
        /// @{
        SetContextStateOperationDescriptorBuilder& invocationEffectiveTimeout(const boost::optional<Duration>& invocationEffectiveTimeout);
        SetContextStateOperationDescriptorBuilder& invocationEffectiveTimeout(boost::optional<Duration>&& invocationEffectiveTimeout);
        /// @}

        /// @brief Setter for retriggerable
        /// @{
        SetContextStateOperationDescriptorBuilder& retriggerable(Retriggerable retriggerable);
        /// @}

        /// @brief Setter for accessLevel
        /// @{
        SetContextStateOperationDescriptorBuilder& accessLevel(AccessLevel accessLevel);
        /// @}

        /// @brief Setter for modifiableData
        /// @{
        SetContextStateOperationDescriptorBuilder& modifiableData(const XPathExpressions& modifiableData);
        SetContextStateOperationDescriptorBuilder& modifiableData(XPathExpressions&& modifiableData);
        /// @}

        /// @brief Setter for extensions
        /// @{
        SetContextStateOperationDescriptorBuilder& extensions(const ExtensionTypes& extensions);
        SetContextStateOperationDescriptorBuilder& extensions(ExtensionTypes&& extensions);
        /// @}

        /// @brief Getter for safetyClassification
        /// @{
        boost::optional<SafetyClassification>& safetyClassification();
        boost::optional<SafetyClassification> safetyClassification() const;
        /// @}

        /// @brief Getter for type
        /// @{
        boost::optional<CodedValue>& type();
        const boost::optional<CodedValue>& type() const;
        /// @}

        /// @brief Getter for operationTarget
        /// @{
        Handle& operationTarget();
        const Handle& operationTarget() const;
        /// @}

        /// @brief Getter for maxTimeToFinish
        /// @{
        boost::optional<Duration>& maxTimeToFinish();
        const boost::optional<Duration>& maxTimeToFinish() const;
        /// @}

        /// @brief Getter for invocationEffectiveTimeout
        /// @{
        boost::optional<Duration>& invocationEffectiveTimeout();
        const boost::optional<Duration>& invocationEffectiveTimeout() const;
        /// @}

        /// @brief Getter for retriggerable
        /// @{
        Retriggerable& retriggerable();
        Retriggerable retriggerable() const;
        /// @}

        /// @brief Getter for accessLevel
        /// @{
        AccessLevel& accessLevel();
        AccessLevel accessLevel() const;
        /// @}

        /// @brief Getter for modifiableData
        /// @{
        XPathExpressions& modifiableData();
        const XPathExpressions& modifiableData() const;
        /// @}

        /// @brief Getter for extensions
        /// @{
        ExtensionTypes& extensions();
        const ExtensionTypes& extensions() const;
        /// @}

    private:
        boost::optional<SafetyClassification> m_safetyClassification;
        boost::optional<CodedValue> m_type;
        Handle m_operationTarget;
        boost::optional<Duration> m_maxTimeToFinish;
        boost::optional<Duration> m_invocationEffectiveTimeout;
        Retriggerable m_retriggerable;
        AccessLevel m_accessLevel;
        XPathExpressions m_modifiableData;
        ExtensionTypes m_extensions;
};

/**
 * @brief Equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator==(const SetContextStateOperationDescriptor& lhs, const SetContextStateOperationDescriptor& rhs);
DFL_MDIB_EXPIMP bool operator==(const SetContextStateOperationDescriptorBuilder& lhs, const SetContextStateOperationDescriptorBuilder& rhs);
DFL_MDIB_EXPIMP bool operator==(const SetContextStateOperationDescriptorBuilder& lhs, const SetContextStateOperationDescriptor& rhs);
bool operator==(const SetContextStateOperationDescriptor& lhs, const SetContextStateOperationDescriptorBuilder& rhs);
/// @}

/**
 * @brief Not equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator!=(const SetContextStateOperationDescriptor& lhs, const SetContextStateOperationDescriptor& rhs);
bool operator!=(const SetContextStateOperationDescriptorBuilder& lhs, const SetContextStateOperationDescriptorBuilder& rhs);
bool operator!=(const SetContextStateOperationDescriptor& lhs, const SetContextStateOperationDescriptorBuilder& rhs);
bool operator!=(const SetContextStateOperationDescriptorBuilder& lhs, const SetContextStateOperationDescriptor& rhs);
/// @}

/**
 * @brief Factory function to create %Builder based on given immutable @ref SetContextStateOperationDescriptor
 * @ingroup Mdib
 */
/// @{
SetContextStateOperationDescriptorBuilder getBuilder(const SetContextStateOperationDescriptor& setContextStateOperationDescriptor);
SetContextStateOperationDescriptorBuilder getBuilder(const DFL::NotNull<SharedPtr<SetContextStateOperationDescriptor>>& setContextStateOperationDescriptor);
/// @}

/**
 * @brief Helper function throws runtime_error in case of a not equal member
 * @ingroup Mdib
 */
DFL_MDIB_EXPIMP void assertEqual(const SetContextStateOperationDescriptor& lhs, const SetContextStateOperationDescriptor& rhs);

inline SetContextStateOperationDescriptorBuilder::SetContextStateOperationDescriptorBuilder(const SetContextStateOperationDescriptor& setContextStateOperationDescriptor) :
    m_safetyClassification(setContextStateOperationDescriptor.safetyClassification()),
    m_type(setContextStateOperationDescriptor.type()),
    m_operationTarget(setContextStateOperationDescriptor.operationTarget()),
    m_maxTimeToFinish(setContextStateOperationDescriptor.maxTimeToFinish()),
    m_invocationEffectiveTimeout(setContextStateOperationDescriptor.invocationEffectiveTimeout()),
    m_retriggerable(setContextStateOperationDescriptor.retriggerable()),
    m_accessLevel(setContextStateOperationDescriptor.accessLevel()),
    m_modifiableData(setContextStateOperationDescriptor.modifiableData()),
    m_extensions(setContextStateOperationDescriptor.extensions())
{
}

inline SetContextStateOperationDescriptorBuilder::SetContextStateOperationDescriptorBuilder(const DFL::NotNull<SharedPtr<SetContextStateOperationDescriptor>>& setContextStateOperationDescriptor) :
    m_safetyClassification(setContextStateOperationDescriptor->safetyClassification()),
    m_type(setContextStateOperationDescriptor->type()),
    m_operationTarget(setContextStateOperationDescriptor->operationTarget()),
    m_maxTimeToFinish(setContextStateOperationDescriptor->maxTimeToFinish()),
    m_invocationEffectiveTimeout(setContextStateOperationDescriptor->invocationEffectiveTimeout()),
    m_retriggerable(setContextStateOperationDescriptor->retriggerable()),
    m_accessLevel(setContextStateOperationDescriptor->accessLevel()),
    m_modifiableData(setContextStateOperationDescriptor->modifiableData()),
    m_extensions(setContextStateOperationDescriptor->extensions())
{
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::operator=(const SetContextStateOperationDescriptor& setContextStateOperationDescriptor)
{
    m_safetyClassification = setContextStateOperationDescriptor.safetyClassification();
    m_type = setContextStateOperationDescriptor.type();
    m_operationTarget = setContextStateOperationDescriptor.operationTarget();
    m_maxTimeToFinish = setContextStateOperationDescriptor.maxTimeToFinish();
    m_invocationEffectiveTimeout = setContextStateOperationDescriptor.invocationEffectiveTimeout();
    m_retriggerable = setContextStateOperationDescriptor.retriggerable();
    m_accessLevel = setContextStateOperationDescriptor.accessLevel();
    m_modifiableData = setContextStateOperationDescriptor.modifiableData();
    m_extensions = setContextStateOperationDescriptor.extensions();
    return *this;
}

inline SetContextStateOperationDescriptor SetContextStateOperationDescriptorBuilder::build() const
{
    // NOLINTNEXTLINE(modernize-return-braced-init-list)
    return SetContextStateOperationDescriptor(m_safetyClassification, m_type, m_operationTarget, m_maxTimeToFinish, m_invocationEffectiveTimeout, m_retriggerable, m_accessLevel, m_modifiableData, m_extensions);
}

inline bool SetContextStateOperationDescriptorBuilder::isChanged(const SetContextStateOperationDescriptor& base) const
{
    return *this != base;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::safetyClassification(boost::optional<SafetyClassification> safetyClassification)
{
    m_safetyClassification = safetyClassification;
    return *this;
}

inline boost::optional<SafetyClassification>& SetContextStateOperationDescriptorBuilder::safetyClassification()
{
    return m_safetyClassification;
}

inline boost::optional<SafetyClassification> SetContextStateOperationDescriptorBuilder::safetyClassification() const
{
    return m_safetyClassification;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::type(const boost::optional<CodedValue>& type)
{
    m_type = type;
    return *this;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::type(boost::optional<CodedValue>&& type)
{
    m_type = std::move(type);
    return *this;
}

inline boost::optional<CodedValue>& SetContextStateOperationDescriptorBuilder::type()
{
    return m_type;
}

inline const boost::optional<CodedValue>& SetContextStateOperationDescriptorBuilder::type() const
{
    return m_type;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::operationTarget(const Handle& operationTarget)
{
    m_operationTarget = operationTarget;
    return *this;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::operationTarget(Handle&& operationTarget)
{
    m_operationTarget = std::move(operationTarget);
    return *this;
}

inline Handle& SetContextStateOperationDescriptorBuilder::operationTarget()
{
    return m_operationTarget;
}

inline const Handle& SetContextStateOperationDescriptorBuilder::operationTarget() const
{
    return m_operationTarget;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::maxTimeToFinish(const boost::optional<Duration>& maxTimeToFinish)
{
    m_maxTimeToFinish = maxTimeToFinish;
    return *this;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::maxTimeToFinish(boost::optional<Duration>&& maxTimeToFinish)
{
    m_maxTimeToFinish = std::move(maxTimeToFinish);
    return *this;
}

inline boost::optional<Duration>& SetContextStateOperationDescriptorBuilder::maxTimeToFinish()
{
    return m_maxTimeToFinish;
}

inline const boost::optional<Duration>& SetContextStateOperationDescriptorBuilder::maxTimeToFinish() const
{
    return m_maxTimeToFinish;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::invocationEffectiveTimeout(const boost::optional<Duration>& invocationEffectiveTimeout)
{
    m_invocationEffectiveTimeout = invocationEffectiveTimeout;
    return *this;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::invocationEffectiveTimeout(boost::optional<Duration>&& invocationEffectiveTimeout)
{
    m_invocationEffectiveTimeout = std::move(invocationEffectiveTimeout);
    return *this;
}

inline boost::optional<Duration>& SetContextStateOperationDescriptorBuilder::invocationEffectiveTimeout()
{
    return m_invocationEffectiveTimeout;
}

inline const boost::optional<Duration>& SetContextStateOperationDescriptorBuilder::invocationEffectiveTimeout() const
{
    return m_invocationEffectiveTimeout;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::retriggerable(Retriggerable retriggerable)
{
    m_retriggerable = retriggerable;
    return *this;
}

inline Retriggerable& SetContextStateOperationDescriptorBuilder::retriggerable()
{
    return m_retriggerable;
}

inline Retriggerable SetContextStateOperationDescriptorBuilder::retriggerable() const
{
    return m_retriggerable;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::accessLevel(AccessLevel accessLevel)
{
    m_accessLevel = accessLevel;
    return *this;
}

inline AccessLevel& SetContextStateOperationDescriptorBuilder::accessLevel()
{
    return m_accessLevel;
}

inline AccessLevel SetContextStateOperationDescriptorBuilder::accessLevel() const
{
    return m_accessLevel;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::modifiableData(const XPathExpressions& modifiableData)
{
    m_modifiableData = modifiableData;
    return *this;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::modifiableData(XPathExpressions&& modifiableData)
{
    m_modifiableData = std::move(modifiableData);
    return *this;
}

inline XPathExpressions& SetContextStateOperationDescriptorBuilder::modifiableData()
{
    return m_modifiableData;
}

inline const XPathExpressions& SetContextStateOperationDescriptorBuilder::modifiableData() const
{
    return m_modifiableData;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::extensions(const ExtensionTypes& extensions)
{
    m_extensions = extensions;
    return *this;
}

inline SetContextStateOperationDescriptorBuilder& SetContextStateOperationDescriptorBuilder::extensions(ExtensionTypes&& extensions)
{
    m_extensions = std::move(extensions);
    return *this;
}

inline ExtensionTypes& SetContextStateOperationDescriptorBuilder::extensions()
{
    return m_extensions;
}

inline const ExtensionTypes& SetContextStateOperationDescriptorBuilder::extensions() const
{
    return m_extensions;
}

inline bool operator==(const SetContextStateOperationDescriptor& lhs, const SetContextStateOperationDescriptorBuilder& rhs)
{
    return rhs == lhs;
}

inline bool operator!=(const SetContextStateOperationDescriptorBuilder& lhs, const SetContextStateOperationDescriptorBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const SetContextStateOperationDescriptor& lhs, const SetContextStateOperationDescriptorBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const SetContextStateOperationDescriptorBuilder& lhs, const SetContextStateOperationDescriptor& rhs)
{
    return !(lhs == rhs);
}

inline SetContextStateOperationDescriptorBuilder getBuilder(const SetContextStateOperationDescriptor& setContextStateOperationDescriptor)
{
    return SetContextStateOperationDescriptorBuilder(setContextStateOperationDescriptor);
}

inline SetContextStateOperationDescriptorBuilder getBuilder(const DFL::NotNull<SharedPtr<SetContextStateOperationDescriptor>>& setContextStateOperationDescriptor)
{
    return SetContextStateOperationDescriptorBuilder(setContextStateOperationDescriptor);
}

}
}
