﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/MetricDimension.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The metric you want to retain. Dimensions are optional.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MetricToRetain">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API MetricToRetain
  {
  public:
    MetricToRetain();
    MetricToRetain(Aws::Utils::Json::JsonView jsonValue);
    MetricToRetain& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>What is measured by the behavior.</p>
     */
    inline const Aws::String& GetMetric() const{ return m_metric; }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline MetricToRetain& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline MetricToRetain& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline MetricToRetain& WithMetric(const char* value) { SetMetric(value); return *this;}


    /**
     * <p>The dimension of a metric.</p>
     */
    inline const MetricDimension& GetMetricDimension() const{ return m_metricDimension; }

    /**
     * <p>The dimension of a metric.</p>
     */
    inline bool MetricDimensionHasBeenSet() const { return m_metricDimensionHasBeenSet; }

    /**
     * <p>The dimension of a metric.</p>
     */
    inline void SetMetricDimension(const MetricDimension& value) { m_metricDimensionHasBeenSet = true; m_metricDimension = value; }

    /**
     * <p>The dimension of a metric.</p>
     */
    inline void SetMetricDimension(MetricDimension&& value) { m_metricDimensionHasBeenSet = true; m_metricDimension = std::move(value); }

    /**
     * <p>The dimension of a metric.</p>
     */
    inline MetricToRetain& WithMetricDimension(const MetricDimension& value) { SetMetricDimension(value); return *this;}

    /**
     * <p>The dimension of a metric.</p>
     */
    inline MetricToRetain& WithMetricDimension(MetricDimension&& value) { SetMetricDimension(std::move(value)); return *this;}

  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet;

    MetricDimension m_metricDimension;
    bool m_metricDimensionHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
