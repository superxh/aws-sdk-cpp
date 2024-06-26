﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Wi-Fi access point.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/WiFiAccessPoint">AWS
   * API Reference</a></p>
   */
  class WiFiAccessPoint
  {
  public:
    AWS_LOCATIONSERVICE_API WiFiAccessPoint();
    AWS_LOCATIONSERVICE_API WiFiAccessPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API WiFiAccessPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Medium access control address (Mac).</p>
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }

    /**
     * <p>Medium access control address (Mac).</p>
     */
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }

    /**
     * <p>Medium access control address (Mac).</p>
     */
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }

    /**
     * <p>Medium access control address (Mac).</p>
     */
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }

    /**
     * <p>Medium access control address (Mac).</p>
     */
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }

    /**
     * <p>Medium access control address (Mac).</p>
     */
    inline WiFiAccessPoint& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}

    /**
     * <p>Medium access control address (Mac).</p>
     */
    inline WiFiAccessPoint& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}

    /**
     * <p>Medium access control address (Mac).</p>
     */
    inline WiFiAccessPoint& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}


    /**
     * <p>Received signal strength (dBm) of the WLAN measurement data.</p>
     */
    inline int GetRss() const{ return m_rss; }

    /**
     * <p>Received signal strength (dBm) of the WLAN measurement data.</p>
     */
    inline bool RssHasBeenSet() const { return m_rssHasBeenSet; }

    /**
     * <p>Received signal strength (dBm) of the WLAN measurement data.</p>
     */
    inline void SetRss(int value) { m_rssHasBeenSet = true; m_rss = value; }

    /**
     * <p>Received signal strength (dBm) of the WLAN measurement data.</p>
     */
    inline WiFiAccessPoint& WithRss(int value) { SetRss(value); return *this;}

  private:

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    int m_rss;
    bool m_rssHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
