﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

ReplicaGlobalSecondaryIndexDescription::ReplicaGlobalSecondaryIndexDescription() : 
    m_indexNameHasBeenSet(false),
    m_provisionedThroughputOverrideHasBeenSet(false),
    m_onDemandThroughputOverrideHasBeenSet(false)
{
}

ReplicaGlobalSecondaryIndexDescription::ReplicaGlobalSecondaryIndexDescription(JsonView jsonValue) : 
    m_indexNameHasBeenSet(false),
    m_provisionedThroughputOverrideHasBeenSet(false),
    m_onDemandThroughputOverrideHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaGlobalSecondaryIndexDescription& ReplicaGlobalSecondaryIndexDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedThroughputOverride"))
  {
    m_provisionedThroughputOverride = jsonValue.GetObject("ProvisionedThroughputOverride");

    m_provisionedThroughputOverrideHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnDemandThroughputOverride"))
  {
    m_onDemandThroughputOverride = jsonValue.GetObject("OnDemandThroughputOverride");

    m_onDemandThroughputOverrideHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaGlobalSecondaryIndexDescription::Jsonize() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_provisionedThroughputOverrideHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughputOverride", m_provisionedThroughputOverride.Jsonize());

  }

  if(m_onDemandThroughputOverrideHasBeenSet)
  {
   payload.WithObject("OnDemandThroughputOverride", m_onDemandThroughputOverride.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
