﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class DeleteAddonInstanceRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API DeleteAddonInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAddonInstance"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Add On instance ID to delete.</p>
     */
    inline const Aws::String& GetAddonInstanceId() const{ return m_addonInstanceId; }

    /**
     * <p>The Add On instance ID to delete.</p>
     */
    inline bool AddonInstanceIdHasBeenSet() const { return m_addonInstanceIdHasBeenSet; }

    /**
     * <p>The Add On instance ID to delete.</p>
     */
    inline void SetAddonInstanceId(const Aws::String& value) { m_addonInstanceIdHasBeenSet = true; m_addonInstanceId = value; }

    /**
     * <p>The Add On instance ID to delete.</p>
     */
    inline void SetAddonInstanceId(Aws::String&& value) { m_addonInstanceIdHasBeenSet = true; m_addonInstanceId = std::move(value); }

    /**
     * <p>The Add On instance ID to delete.</p>
     */
    inline void SetAddonInstanceId(const char* value) { m_addonInstanceIdHasBeenSet = true; m_addonInstanceId.assign(value); }

    /**
     * <p>The Add On instance ID to delete.</p>
     */
    inline DeleteAddonInstanceRequest& WithAddonInstanceId(const Aws::String& value) { SetAddonInstanceId(value); return *this;}

    /**
     * <p>The Add On instance ID to delete.</p>
     */
    inline DeleteAddonInstanceRequest& WithAddonInstanceId(Aws::String&& value) { SetAddonInstanceId(std::move(value)); return *this;}

    /**
     * <p>The Add On instance ID to delete.</p>
     */
    inline DeleteAddonInstanceRequest& WithAddonInstanceId(const char* value) { SetAddonInstanceId(value); return *this;}

  private:

    Aws::String m_addonInstanceId;
    bool m_addonInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
