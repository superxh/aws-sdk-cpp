﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ComponentEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

ComponentEvent::ComponentEvent() : 
    m_actionHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

ComponentEvent::ComponentEvent(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentEvent& ComponentEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetString("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    m_parameters = jsonValue.GetObject("parameters");

    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentEvent::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithObject("parameters", m_parameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
