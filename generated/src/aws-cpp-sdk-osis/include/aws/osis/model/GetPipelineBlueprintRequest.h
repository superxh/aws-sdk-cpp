﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/OSISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace OSIS
{
namespace Model
{

  /**
   */
  class GetPipelineBlueprintRequest : public OSISRequest
  {
  public:
    AWS_OSIS_API GetPipelineBlueprintRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPipelineBlueprint"; }

    AWS_OSIS_API Aws::String SerializePayload() const override;

    AWS_OSIS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the blueprint to retrieve.</p>
     */
    inline const Aws::String& GetBlueprintName() const{ return m_blueprintName; }

    /**
     * <p>The name of the blueprint to retrieve.</p>
     */
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }

    /**
     * <p>The name of the blueprint to retrieve.</p>
     */
    inline void SetBlueprintName(const Aws::String& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = value; }

    /**
     * <p>The name of the blueprint to retrieve.</p>
     */
    inline void SetBlueprintName(Aws::String&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::move(value); }

    /**
     * <p>The name of the blueprint to retrieve.</p>
     */
    inline void SetBlueprintName(const char* value) { m_blueprintNameHasBeenSet = true; m_blueprintName.assign(value); }

    /**
     * <p>The name of the blueprint to retrieve.</p>
     */
    inline GetPipelineBlueprintRequest& WithBlueprintName(const Aws::String& value) { SetBlueprintName(value); return *this;}

    /**
     * <p>The name of the blueprint to retrieve.</p>
     */
    inline GetPipelineBlueprintRequest& WithBlueprintName(Aws::String&& value) { SetBlueprintName(std::move(value)); return *this;}

    /**
     * <p>The name of the blueprint to retrieve.</p>
     */
    inline GetPipelineBlueprintRequest& WithBlueprintName(const char* value) { SetBlueprintName(value); return *this;}


    /**
     * <p>The format format of the blueprint to retrieve.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format format of the blueprint to retrieve.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format format of the blueprint to retrieve.</p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format format of the blueprint to retrieve.</p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format format of the blueprint to retrieve.</p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>The format format of the blueprint to retrieve.</p>
     */
    inline GetPipelineBlueprintRequest& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format format of the blueprint to retrieve.</p>
     */
    inline GetPipelineBlueprintRequest& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format format of the blueprint to retrieve.</p>
     */
    inline GetPipelineBlueprintRequest& WithFormat(const char* value) { SetFormat(value); return *this;}

  private:

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
