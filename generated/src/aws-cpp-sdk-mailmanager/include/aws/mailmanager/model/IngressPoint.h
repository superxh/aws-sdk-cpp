﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/IngressPointStatus.h>
#include <aws/mailmanager/model/IngressPointType.h>
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
   * <p>The structure of an ingress endpoint resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressPoint">AWS
   * API Reference</a></p>
   */
  class IngressPoint
  {
  public:
    AWS_MAILMANAGER_API IngressPoint();
    AWS_MAILMANAGER_API IngressPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The DNS A Record that identifies your ingress endpoint. Configure your DNS
     * Mail Exchange (MX) record with this value to route emails to Mail Manager. </p>
     */
    inline const Aws::String& GetARecord() const{ return m_aRecord; }

    /**
     * <p> The DNS A Record that identifies your ingress endpoint. Configure your DNS
     * Mail Exchange (MX) record with this value to route emails to Mail Manager. </p>
     */
    inline bool ARecordHasBeenSet() const { return m_aRecordHasBeenSet; }

    /**
     * <p> The DNS A Record that identifies your ingress endpoint. Configure your DNS
     * Mail Exchange (MX) record with this value to route emails to Mail Manager. </p>
     */
    inline void SetARecord(const Aws::String& value) { m_aRecordHasBeenSet = true; m_aRecord = value; }

    /**
     * <p> The DNS A Record that identifies your ingress endpoint. Configure your DNS
     * Mail Exchange (MX) record with this value to route emails to Mail Manager. </p>
     */
    inline void SetARecord(Aws::String&& value) { m_aRecordHasBeenSet = true; m_aRecord = std::move(value); }

    /**
     * <p> The DNS A Record that identifies your ingress endpoint. Configure your DNS
     * Mail Exchange (MX) record with this value to route emails to Mail Manager. </p>
     */
    inline void SetARecord(const char* value) { m_aRecordHasBeenSet = true; m_aRecord.assign(value); }

    /**
     * <p> The DNS A Record that identifies your ingress endpoint. Configure your DNS
     * Mail Exchange (MX) record with this value to route emails to Mail Manager. </p>
     */
    inline IngressPoint& WithARecord(const Aws::String& value) { SetARecord(value); return *this;}

    /**
     * <p> The DNS A Record that identifies your ingress endpoint. Configure your DNS
     * Mail Exchange (MX) record with this value to route emails to Mail Manager. </p>
     */
    inline IngressPoint& WithARecord(Aws::String&& value) { SetARecord(std::move(value)); return *this;}

    /**
     * <p> The DNS A Record that identifies your ingress endpoint. Configure your DNS
     * Mail Exchange (MX) record with this value to route emails to Mail Manager. </p>
     */
    inline IngressPoint& WithARecord(const char* value) { SetARecord(value); return *this;}


    /**
     * <p>The identifier of the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetIngressPointId() const{ return m_ingressPointId; }

    /**
     * <p>The identifier of the ingress endpoint resource.</p>
     */
    inline bool IngressPointIdHasBeenSet() const { return m_ingressPointIdHasBeenSet; }

    /**
     * <p>The identifier of the ingress endpoint resource.</p>
     */
    inline void SetIngressPointId(const Aws::String& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = value; }

    /**
     * <p>The identifier of the ingress endpoint resource.</p>
     */
    inline void SetIngressPointId(Aws::String&& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = std::move(value); }

    /**
     * <p>The identifier of the ingress endpoint resource.</p>
     */
    inline void SetIngressPointId(const char* value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId.assign(value); }

    /**
     * <p>The identifier of the ingress endpoint resource.</p>
     */
    inline IngressPoint& WithIngressPointId(const Aws::String& value) { SetIngressPointId(value); return *this;}

    /**
     * <p>The identifier of the ingress endpoint resource.</p>
     */
    inline IngressPoint& WithIngressPointId(Aws::String&& value) { SetIngressPointId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the ingress endpoint resource.</p>
     */
    inline IngressPoint& WithIngressPointId(const char* value) { SetIngressPointId(value); return *this;}


    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetIngressPointName() const{ return m_ingressPointName; }

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline bool IngressPointNameHasBeenSet() const { return m_ingressPointNameHasBeenSet; }

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline void SetIngressPointName(const Aws::String& value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName = value; }

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline void SetIngressPointName(Aws::String&& value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName = std::move(value); }

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline void SetIngressPointName(const char* value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName.assign(value); }

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline IngressPoint& WithIngressPointName(const Aws::String& value) { SetIngressPointName(value); return *this;}

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline IngressPoint& WithIngressPointName(Aws::String&& value) { SetIngressPointName(std::move(value)); return *this;}

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline IngressPoint& WithIngressPointName(const char* value) { SetIngressPointName(value); return *this;}


    /**
     * <p>The status of the ingress endpoint resource.</p>
     */
    inline const IngressPointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the ingress endpoint resource.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the ingress endpoint resource.</p>
     */
    inline void SetStatus(const IngressPointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the ingress endpoint resource.</p>
     */
    inline void SetStatus(IngressPointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the ingress endpoint resource.</p>
     */
    inline IngressPoint& WithStatus(const IngressPointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the ingress endpoint resource.</p>
     */
    inline IngressPoint& WithStatus(IngressPointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of ingress endpoint resource.</p>
     */
    inline const IngressPointType& GetType() const{ return m_type; }

    /**
     * <p>The type of ingress endpoint resource.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of ingress endpoint resource.</p>
     */
    inline void SetType(const IngressPointType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of ingress endpoint resource.</p>
     */
    inline void SetType(IngressPointType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of ingress endpoint resource.</p>
     */
    inline IngressPoint& WithType(const IngressPointType& value) { SetType(value); return *this;}

    /**
     * <p>The type of ingress endpoint resource.</p>
     */
    inline IngressPoint& WithType(IngressPointType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_aRecord;
    bool m_aRecordHasBeenSet = false;

    Aws::String m_ingressPointId;
    bool m_ingressPointIdHasBeenSet = false;

    Aws::String m_ingressPointName;
    bool m_ingressPointNameHasBeenSet = false;

    IngressPointStatus m_status;
    bool m_statusHasBeenSet = false;

    IngressPointType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
