﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/CreateEventBusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateEventBusResult::CreateEventBusResult()
{
}

CreateEventBusResult::CreateEventBusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateEventBusResult& CreateEventBusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventBusArn"))
  {
    m_eventBusArn = jsonValue.GetString("EventBusArn");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("KmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("KmsKeyIdentifier");

  }

  if(jsonValue.ValueExists("DeadLetterConfig"))
  {
    m_deadLetterConfig = jsonValue.GetObject("DeadLetterConfig");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
