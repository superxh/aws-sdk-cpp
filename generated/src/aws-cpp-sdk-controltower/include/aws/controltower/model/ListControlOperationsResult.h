﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/ControlOperationSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ControlTower
{
namespace Model
{
  class ListControlOperationsResult
  {
  public:
    AWS_CONTROLTOWER_API ListControlOperationsResult();
    AWS_CONTROLTOWER_API ListControlOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API ListControlOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of output from control operations. PLACEHOLDER </p>
     */
    inline const Aws::Vector<ControlOperationSummary>& GetControlOperations() const{ return m_controlOperations; }

    /**
     * <p>Returns a list of output from control operations. PLACEHOLDER </p>
     */
    inline void SetControlOperations(const Aws::Vector<ControlOperationSummary>& value) { m_controlOperations = value; }

    /**
     * <p>Returns a list of output from control operations. PLACEHOLDER </p>
     */
    inline void SetControlOperations(Aws::Vector<ControlOperationSummary>&& value) { m_controlOperations = std::move(value); }

    /**
     * <p>Returns a list of output from control operations. PLACEHOLDER </p>
     */
    inline ListControlOperationsResult& WithControlOperations(const Aws::Vector<ControlOperationSummary>& value) { SetControlOperations(value); return *this;}

    /**
     * <p>Returns a list of output from control operations. PLACEHOLDER </p>
     */
    inline ListControlOperationsResult& WithControlOperations(Aws::Vector<ControlOperationSummary>&& value) { SetControlOperations(std::move(value)); return *this;}

    /**
     * <p>Returns a list of output from control operations. PLACEHOLDER </p>
     */
    inline ListControlOperationsResult& AddControlOperations(const ControlOperationSummary& value) { m_controlOperations.push_back(value); return *this; }

    /**
     * <p>Returns a list of output from control operations. PLACEHOLDER </p>
     */
    inline ListControlOperationsResult& AddControlOperations(ControlOperationSummary&& value) { m_controlOperations.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline ListControlOperationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListControlOperationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListControlOperationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListControlOperationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListControlOperationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListControlOperationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ControlOperationSummary> m_controlOperations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
