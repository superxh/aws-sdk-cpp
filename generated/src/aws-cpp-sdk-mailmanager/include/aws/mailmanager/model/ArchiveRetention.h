﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RetentionPeriod.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The retention policy for an email archive that specifies how long emails are
   * kept before being automatically deleted. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ArchiveRetention">AWS
   * API Reference</a></p>
   */
  class ArchiveRetention
  {
  public:
    AWS_MAILMANAGER_API ArchiveRetention();
    AWS_MAILMANAGER_API ArchiveRetention(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ArchiveRetention& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The enum value sets the period for retaining emails in an archive.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The enum value sets the period for retaining emails in an archive.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>The enum value sets the period for retaining emails in an archive.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>The enum value sets the period for retaining emails in an archive.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>The enum value sets the period for retaining emails in an archive.</p>
     */
    inline ArchiveRetention& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>The enum value sets the period for retaining emails in an archive.</p>
     */
    inline ArchiveRetention& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}

  private:

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
