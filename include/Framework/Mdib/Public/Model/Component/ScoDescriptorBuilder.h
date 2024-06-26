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

#include <Framework/Mdib/Public/Model/Component/ScoDescriptor.h>

namespace DFL
{
namespace Mdib
{

/**
 * @brief Builder with fluent interface for @ref ScoDescriptor
 * @ingroup Mdib
 */
class ScoDescriptorBuilder
{
    public:
        /// @brief Typedef to the immutable @ref ScoDescriptor
        using BuiltType = ScoDescriptor;

        /// @brief Builder based on given immutable @ref ScoDescriptor
        explicit ScoDescriptorBuilder(const ScoDescriptor& scoDescriptor=ScoDescriptor());

        /// @brief Builder based on given immutable @ref ScoDescriptor
        explicit ScoDescriptorBuilder(const DFL::NotNull<SharedPtr<ScoDescriptor>>& scoDescriptor);

        /// @brief Overwrite all values with given immutable @ref ScoDescriptor
        ScoDescriptorBuilder& operator=(const ScoDescriptor& scoDescriptor);

        /// @brief Explicit conversion to immutable @ref ScoDescriptor
        ScoDescriptor build() const;

        /// @brief Test whether the builder differs from the immutable @ref ScoDescriptor
        bool isChanged(const ScoDescriptor& base) const;

        /// @brief Setter for safetyClassification
        /// @{
        ScoDescriptorBuilder& safetyClassification(SafetyClassification safetyClassification);
        /// @}

        /// @brief Setter for type
        /// @{
        ScoDescriptorBuilder& type(const boost::optional<CodedValue>& type);
        ScoDescriptorBuilder& type(boost::optional<CodedValue>&& type);
        /// @}

        /// @brief Setter for productionSpecifications
        /// @{
        ScoDescriptorBuilder& productionSpecifications(const ProductionSpecifications& productionSpecifications);
        ScoDescriptorBuilder& productionSpecifications(ProductionSpecifications&& productionSpecifications);
        /// @}

        /// @brief Setter for extensions
        /// @{
        ScoDescriptorBuilder& extensions(const ExtensionTypes& extensions);
        ScoDescriptorBuilder& extensions(ExtensionTypes&& extensions);
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

        /// @brief Getter for productionSpecifications
        /// @{
        ProductionSpecifications& productionSpecifications();
        const ProductionSpecifications& productionSpecifications() const;
        /// @}

        /// @brief Getter for extensions
        /// @{
        ExtensionTypes& extensions();
        const ExtensionTypes& extensions() const;
        /// @}

    private:
        SafetyClassification m_safetyClassification;
        boost::optional<CodedValue> m_type;
        ProductionSpecifications m_productionSpecifications;
        ExtensionTypes m_extensions;
};

/**
 * @brief Equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator==(const ScoDescriptor& lhs, const ScoDescriptor& rhs);
DFL_MDIB_EXPIMP bool operator==(const ScoDescriptorBuilder& lhs, const ScoDescriptorBuilder& rhs);
DFL_MDIB_EXPIMP bool operator==(const ScoDescriptorBuilder& lhs, const ScoDescriptor& rhs);
bool operator==(const ScoDescriptor& lhs, const ScoDescriptorBuilder& rhs);
/// @}

/**
 * @brief Not equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator!=(const ScoDescriptor& lhs, const ScoDescriptor& rhs);
bool operator!=(const ScoDescriptorBuilder& lhs, const ScoDescriptorBuilder& rhs);
bool operator!=(const ScoDescriptor& lhs, const ScoDescriptorBuilder& rhs);
bool operator!=(const ScoDescriptorBuilder& lhs, const ScoDescriptor& rhs);
/// @}

/**
 * @brief Factory function to create %Builder based on given immutable @ref ScoDescriptor
 * @ingroup Mdib
 */
/// @{
ScoDescriptorBuilder getBuilder(const ScoDescriptor& scoDescriptor);
ScoDescriptorBuilder getBuilder(const DFL::NotNull<SharedPtr<ScoDescriptor>>& scoDescriptor);
/// @}

/**
 * @brief Helper function throws runtime_error in case of a not equal member
 * @ingroup Mdib
 */
DFL_MDIB_EXPIMP void assertEqual(const ScoDescriptor& lhs, const ScoDescriptor& rhs);

inline ScoDescriptorBuilder::ScoDescriptorBuilder(const ScoDescriptor& scoDescriptor) :
    m_safetyClassification(scoDescriptor.safetyClassification()),
    m_type(scoDescriptor.type()),
    m_productionSpecifications(scoDescriptor.productionSpecifications()),
    m_extensions(scoDescriptor.extensions())
{
}

inline ScoDescriptorBuilder::ScoDescriptorBuilder(const DFL::NotNull<SharedPtr<ScoDescriptor>>& scoDescriptor) :
    m_safetyClassification(scoDescriptor->safetyClassification()),
    m_type(scoDescriptor->type()),
    m_productionSpecifications(scoDescriptor->productionSpecifications()),
    m_extensions(scoDescriptor->extensions())
{
}

inline ScoDescriptorBuilder& ScoDescriptorBuilder::operator=(const ScoDescriptor& scoDescriptor)
{
    m_safetyClassification = scoDescriptor.safetyClassification();
    m_type = scoDescriptor.type();
    m_productionSpecifications = scoDescriptor.productionSpecifications();
    m_extensions = scoDescriptor.extensions();
    return *this;
}

inline ScoDescriptor ScoDescriptorBuilder::build() const
{
    // NOLINTNEXTLINE(modernize-return-braced-init-list)
    return ScoDescriptor(m_safetyClassification, m_type, m_productionSpecifications, m_extensions);
}

inline bool ScoDescriptorBuilder::isChanged(const ScoDescriptor& base) const
{
    return *this != base;
}

inline ScoDescriptorBuilder& ScoDescriptorBuilder::safetyClassification(SafetyClassification safetyClassification)
{
    m_safetyClassification = safetyClassification;
    return *this;
}

inline SafetyClassification& ScoDescriptorBuilder::safetyClassification()
{
    return m_safetyClassification;
}

inline SafetyClassification ScoDescriptorBuilder::safetyClassification() const
{
    return m_safetyClassification;
}

inline ScoDescriptorBuilder& ScoDescriptorBuilder::type(const boost::optional<CodedValue>& type)
{
    m_type = type;
    return *this;
}

inline ScoDescriptorBuilder& ScoDescriptorBuilder::type(boost::optional<CodedValue>&& type)
{
    m_type = std::move(type);
    return *this;
}

inline boost::optional<CodedValue>& ScoDescriptorBuilder::type()
{
    return m_type;
}

inline const boost::optional<CodedValue>& ScoDescriptorBuilder::type() const
{
    return m_type;
}

inline ScoDescriptorBuilder& ScoDescriptorBuilder::productionSpecifications(const ProductionSpecifications& productionSpecifications)
{
    m_productionSpecifications = productionSpecifications;
    return *this;
}

inline ScoDescriptorBuilder& ScoDescriptorBuilder::productionSpecifications(ProductionSpecifications&& productionSpecifications)
{
    m_productionSpecifications = std::move(productionSpecifications);
    return *this;
}

inline ProductionSpecifications& ScoDescriptorBuilder::productionSpecifications()
{
    return m_productionSpecifications;
}

inline const ProductionSpecifications& ScoDescriptorBuilder::productionSpecifications() const
{
    return m_productionSpecifications;
}

inline ScoDescriptorBuilder& ScoDescriptorBuilder::extensions(const ExtensionTypes& extensions)
{
    m_extensions = extensions;
    return *this;
}

inline ScoDescriptorBuilder& ScoDescriptorBuilder::extensions(ExtensionTypes&& extensions)
{
    m_extensions = std::move(extensions);
    return *this;
}

inline ExtensionTypes& ScoDescriptorBuilder::extensions()
{
    return m_extensions;
}

inline const ExtensionTypes& ScoDescriptorBuilder::extensions() const
{
    return m_extensions;
}

inline bool operator==(const ScoDescriptor& lhs, const ScoDescriptorBuilder& rhs)
{
    return rhs == lhs;
}

inline bool operator!=(const ScoDescriptorBuilder& lhs, const ScoDescriptorBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const ScoDescriptor& lhs, const ScoDescriptorBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const ScoDescriptorBuilder& lhs, const ScoDescriptor& rhs)
{
    return !(lhs == rhs);
}

inline ScoDescriptorBuilder getBuilder(const ScoDescriptor& scoDescriptor)
{
    return ScoDescriptorBuilder(scoDescriptor);
}

inline ScoDescriptorBuilder getBuilder(const DFL::NotNull<SharedPtr<ScoDescriptor>>& scoDescriptor)
{
    return ScoDescriptorBuilder(scoDescriptor);
}

}
}
