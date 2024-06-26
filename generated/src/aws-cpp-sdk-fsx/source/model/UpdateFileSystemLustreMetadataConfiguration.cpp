﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateFileSystemLustreMetadataConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

UpdateFileSystemLustreMetadataConfiguration::UpdateFileSystemLustreMetadataConfiguration() : 
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_mode(MetadataConfigurationMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

UpdateFileSystemLustreMetadataConfiguration::UpdateFileSystemLustreMetadataConfiguration(JsonView jsonValue) : 
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_mode(MetadataConfigurationMode::NOT_SET),
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateFileSystemLustreMetadataConfiguration& UpdateFileSystemLustreMetadataConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Iops"))
  {
    m_iops = jsonValue.GetInteger("Iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = MetadataConfigurationModeMapper::GetMetadataConfigurationModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateFileSystemLustreMetadataConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("Iops", m_iops);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", MetadataConfigurationModeMapper::GetNameForMetadataConfigurationMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
