﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/GetSubscriptionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSubscriptionResult::GetSubscriptionResult()
{
}

GetSubscriptionResult::GetSubscriptionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSubscriptionResult& GetSubscriptionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("subscriptionType"))
  {
    m_subscriptionType = jsonValue.GetString("subscriptionType");

  }

  if(jsonValue.ValueExists("awsAccountName"))
  {
    m_awsAccountName = jsonValue.GetString("awsAccountName");

  }

  if(jsonValue.ValueExists("pendingSubscriptionType"))
  {
    m_pendingSubscriptionType = jsonValue.GetString("pendingSubscriptionType");

  }

  if(jsonValue.ValueExists("pendingSubscriptionStartTime"))
  {
    m_pendingSubscriptionStartTime = jsonValue.GetString("pendingSubscriptionStartTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
