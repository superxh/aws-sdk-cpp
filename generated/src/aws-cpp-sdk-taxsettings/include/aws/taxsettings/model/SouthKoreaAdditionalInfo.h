﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TaxSettings
{
namespace Model
{

  /**
   * <p>Additional tax information associated with your TRN in South
   * Korea.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/SouthKoreaAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class SouthKoreaAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API SouthKoreaAdditionalInfo();
    AWS_TAXSETTINGS_API SouthKoreaAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API SouthKoreaAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The business legal name based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline const Aws::String& GetBusinessRepresentativeName() const{ return m_businessRepresentativeName; }

    /**
     * <p>The business legal name based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline bool BusinessRepresentativeNameHasBeenSet() const { return m_businessRepresentativeNameHasBeenSet; }

    /**
     * <p>The business legal name based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline void SetBusinessRepresentativeName(const Aws::String& value) { m_businessRepresentativeNameHasBeenSet = true; m_businessRepresentativeName = value; }

    /**
     * <p>The business legal name based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline void SetBusinessRepresentativeName(Aws::String&& value) { m_businessRepresentativeNameHasBeenSet = true; m_businessRepresentativeName = std::move(value); }

    /**
     * <p>The business legal name based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline void SetBusinessRepresentativeName(const char* value) { m_businessRepresentativeNameHasBeenSet = true; m_businessRepresentativeName.assign(value); }

    /**
     * <p>The business legal name based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline SouthKoreaAdditionalInfo& WithBusinessRepresentativeName(const Aws::String& value) { SetBusinessRepresentativeName(value); return *this;}

    /**
     * <p>The business legal name based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline SouthKoreaAdditionalInfo& WithBusinessRepresentativeName(Aws::String&& value) { SetBusinessRepresentativeName(std::move(value)); return *this;}

    /**
     * <p>The business legal name based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline SouthKoreaAdditionalInfo& WithBusinessRepresentativeName(const char* value) { SetBusinessRepresentativeName(value); return *this;}


    /**
     * <p>Item of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline const Aws::String& GetItemOfBusiness() const{ return m_itemOfBusiness; }

    /**
     * <p>Item of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline bool ItemOfBusinessHasBeenSet() const { return m_itemOfBusinessHasBeenSet; }

    /**
     * <p>Item of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline void SetItemOfBusiness(const Aws::String& value) { m_itemOfBusinessHasBeenSet = true; m_itemOfBusiness = value; }

    /**
     * <p>Item of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline void SetItemOfBusiness(Aws::String&& value) { m_itemOfBusinessHasBeenSet = true; m_itemOfBusiness = std::move(value); }

    /**
     * <p>Item of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline void SetItemOfBusiness(const char* value) { m_itemOfBusinessHasBeenSet = true; m_itemOfBusiness.assign(value); }

    /**
     * <p>Item of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline SouthKoreaAdditionalInfo& WithItemOfBusiness(const Aws::String& value) { SetItemOfBusiness(value); return *this;}

    /**
     * <p>Item of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline SouthKoreaAdditionalInfo& WithItemOfBusiness(Aws::String&& value) { SetItemOfBusiness(std::move(value)); return *this;}

    /**
     * <p>Item of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline SouthKoreaAdditionalInfo& WithItemOfBusiness(const char* value) { SetItemOfBusiness(value); return *this;}


    /**
     * <p>Line of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline const Aws::String& GetLineOfBusiness() const{ return m_lineOfBusiness; }

    /**
     * <p>Line of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline bool LineOfBusinessHasBeenSet() const { return m_lineOfBusinessHasBeenSet; }

    /**
     * <p>Line of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline void SetLineOfBusiness(const Aws::String& value) { m_lineOfBusinessHasBeenSet = true; m_lineOfBusiness = value; }

    /**
     * <p>Line of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline void SetLineOfBusiness(Aws::String&& value) { m_lineOfBusinessHasBeenSet = true; m_lineOfBusiness = std::move(value); }

    /**
     * <p>Line of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline void SetLineOfBusiness(const char* value) { m_lineOfBusinessHasBeenSet = true; m_lineOfBusiness.assign(value); }

    /**
     * <p>Line of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline SouthKoreaAdditionalInfo& WithLineOfBusiness(const Aws::String& value) { SetLineOfBusiness(value); return *this;}

    /**
     * <p>Line of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline SouthKoreaAdditionalInfo& WithLineOfBusiness(Aws::String&& value) { SetLineOfBusiness(std::move(value)); return *this;}

    /**
     * <p>Line of business based on the most recently uploaded tax registration
     * certificate.</p>
     */
    inline SouthKoreaAdditionalInfo& WithLineOfBusiness(const char* value) { SetLineOfBusiness(value); return *this;}

  private:

    Aws::String m_businessRepresentativeName;
    bool m_businessRepresentativeNameHasBeenSet = false;

    Aws::String m_itemOfBusiness;
    bool m_itemOfBusinessHasBeenSet = false;

    Aws::String m_lineOfBusiness;
    bool m_lineOfBusinessHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
