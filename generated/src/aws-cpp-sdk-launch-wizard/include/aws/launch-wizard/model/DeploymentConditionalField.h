﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
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
namespace LaunchWizard
{
namespace Model
{

  /**
   * <p>A field that details a condition of the specifications for a
   * deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/DeploymentConditionalField">AWS
   * API Reference</a></p>
   */
  class DeploymentConditionalField
  {
  public:
    AWS_LAUNCHWIZARD_API DeploymentConditionalField();
    AWS_LAUNCHWIZARD_API DeploymentConditionalField(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API DeploymentConditionalField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The comparator of the condition.</p> <p>Valid values: <code>Equal |
     * NotEqual</code> </p>
     */
    inline const Aws::String& GetComparator() const{ return m_comparator; }

    /**
     * <p>The comparator of the condition.</p> <p>Valid values: <code>Equal |
     * NotEqual</code> </p>
     */
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }

    /**
     * <p>The comparator of the condition.</p> <p>Valid values: <code>Equal |
     * NotEqual</code> </p>
     */
    inline void SetComparator(const Aws::String& value) { m_comparatorHasBeenSet = true; m_comparator = value; }

    /**
     * <p>The comparator of the condition.</p> <p>Valid values: <code>Equal |
     * NotEqual</code> </p>
     */
    inline void SetComparator(Aws::String&& value) { m_comparatorHasBeenSet = true; m_comparator = std::move(value); }

    /**
     * <p>The comparator of the condition.</p> <p>Valid values: <code>Equal |
     * NotEqual</code> </p>
     */
    inline void SetComparator(const char* value) { m_comparatorHasBeenSet = true; m_comparator.assign(value); }

    /**
     * <p>The comparator of the condition.</p> <p>Valid values: <code>Equal |
     * NotEqual</code> </p>
     */
    inline DeploymentConditionalField& WithComparator(const Aws::String& value) { SetComparator(value); return *this;}

    /**
     * <p>The comparator of the condition.</p> <p>Valid values: <code>Equal |
     * NotEqual</code> </p>
     */
    inline DeploymentConditionalField& WithComparator(Aws::String&& value) { SetComparator(std::move(value)); return *this;}

    /**
     * <p>The comparator of the condition.</p> <p>Valid values: <code>Equal |
     * NotEqual</code> </p>
     */
    inline DeploymentConditionalField& WithComparator(const char* value) { SetComparator(value); return *this;}


    /**
     * <p>The name of the deployment condition.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the deployment condition.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the deployment condition.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the deployment condition.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the deployment condition.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the deployment condition.</p>
     */
    inline DeploymentConditionalField& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the deployment condition.</p>
     */
    inline DeploymentConditionalField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the deployment condition.</p>
     */
    inline DeploymentConditionalField& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the condition.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the condition.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the condition.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the condition.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the condition.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the condition.</p>
     */
    inline DeploymentConditionalField& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the condition.</p>
     */
    inline DeploymentConditionalField& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the condition.</p>
     */
    inline DeploymentConditionalField& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_comparator;
    bool m_comparatorHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
