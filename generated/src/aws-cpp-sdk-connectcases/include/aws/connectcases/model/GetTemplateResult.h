﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/LayoutConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/TemplateStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connectcases/model/RequiredField.h>
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
namespace ConnectCases
{
namespace Model
{
  class GetTemplateResult
  {
  public:
    AWS_CONNECTCASES_API GetTemplateResult();
    AWS_CONNECTCASES_API GetTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API GetTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Timestamp at which the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>Timestamp at which the resource was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>Timestamp at which the resource was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>Timestamp at which the resource was created.</p>
     */
    inline GetTemplateResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>Timestamp at which the resource was created.</p>
     */
    inline GetTemplateResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>Denotes whether or not the resource has been deleted.</p>
     */
    inline bool GetDeleted() const{ return m_deleted; }

    /**
     * <p>Denotes whether or not the resource has been deleted.</p>
     */
    inline void SetDeleted(bool value) { m_deleted = value; }

    /**
     * <p>Denotes whether or not the resource has been deleted.</p>
     */
    inline GetTemplateResult& WithDeleted(bool value) { SetDeleted(value); return *this;}


    /**
     * <p>A brief description of the template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A brief description of the template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A brief description of the template.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A brief description of the template.</p>
     */
    inline GetTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the template.</p>
     */
    inline GetTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the template.</p>
     */
    inline GetTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Timestamp at which the resource was created or last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>Timestamp at which the resource was created or last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>Timestamp at which the resource was created or last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>Timestamp at which the resource was created or last modified.</p>
     */
    inline GetTemplateResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>Timestamp at which the resource was created or last modified.</p>
     */
    inline GetTemplateResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>Configuration of layouts associated to the template.</p>
     */
    inline const LayoutConfiguration& GetLayoutConfiguration() const{ return m_layoutConfiguration; }

    /**
     * <p>Configuration of layouts associated to the template.</p>
     */
    inline void SetLayoutConfiguration(const LayoutConfiguration& value) { m_layoutConfiguration = value; }

    /**
     * <p>Configuration of layouts associated to the template.</p>
     */
    inline void SetLayoutConfiguration(LayoutConfiguration&& value) { m_layoutConfiguration = std::move(value); }

    /**
     * <p>Configuration of layouts associated to the template.</p>
     */
    inline GetTemplateResult& WithLayoutConfiguration(const LayoutConfiguration& value) { SetLayoutConfiguration(value); return *this;}

    /**
     * <p>Configuration of layouts associated to the template.</p>
     */
    inline GetTemplateResult& WithLayoutConfiguration(LayoutConfiguration&& value) { SetLayoutConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the template.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the template.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the template.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the template.</p>
     */
    inline GetTemplateResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the template.</p>
     */
    inline GetTemplateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the template.</p>
     */
    inline GetTemplateResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of fields that must contain a value for a case to be successfully
     * created with this template.</p>
     */
    inline const Aws::Vector<RequiredField>& GetRequiredFields() const{ return m_requiredFields; }

    /**
     * <p>A list of fields that must contain a value for a case to be successfully
     * created with this template.</p>
     */
    inline void SetRequiredFields(const Aws::Vector<RequiredField>& value) { m_requiredFields = value; }

    /**
     * <p>A list of fields that must contain a value for a case to be successfully
     * created with this template.</p>
     */
    inline void SetRequiredFields(Aws::Vector<RequiredField>&& value) { m_requiredFields = std::move(value); }

    /**
     * <p>A list of fields that must contain a value for a case to be successfully
     * created with this template.</p>
     */
    inline GetTemplateResult& WithRequiredFields(const Aws::Vector<RequiredField>& value) { SetRequiredFields(value); return *this;}

    /**
     * <p>A list of fields that must contain a value for a case to be successfully
     * created with this template.</p>
     */
    inline GetTemplateResult& WithRequiredFields(Aws::Vector<RequiredField>&& value) { SetRequiredFields(std::move(value)); return *this;}

    /**
     * <p>A list of fields that must contain a value for a case to be successfully
     * created with this template.</p>
     */
    inline GetTemplateResult& AddRequiredFields(const RequiredField& value) { m_requiredFields.push_back(value); return *this; }

    /**
     * <p>A list of fields that must contain a value for a case to be successfully
     * created with this template.</p>
     */
    inline GetTemplateResult& AddRequiredFields(RequiredField&& value) { m_requiredFields.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the template.</p>
     */
    inline const TemplateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the template.</p>
     */
    inline void SetStatus(const TemplateStatus& value) { m_status = value; }

    /**
     * <p>The status of the template.</p>
     */
    inline void SetStatus(TemplateStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the template.</p>
     */
    inline GetTemplateResult& WithStatus(const TemplateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the template.</p>
     */
    inline GetTemplateResult& WithStatus(TemplateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetTemplateResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetTemplateResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetTemplateResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetTemplateResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetTemplateResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetTemplateResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetTemplateResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetTemplateResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetTemplateResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline GetTemplateResult& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline GetTemplateResult& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline GetTemplateResult& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * <p>A unique identifier of a template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline GetTemplateResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline GetTemplateResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline GetTemplateResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdTime;

    bool m_deleted;

    Aws::String m_description;

    Aws::Utils::DateTime m_lastModifiedTime;

    LayoutConfiguration m_layoutConfiguration;

    Aws::String m_name;

    Aws::Vector<RequiredField> m_requiredFields;

    TemplateStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_templateArn;

    Aws::String m_templateId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
