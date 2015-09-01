/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /*
    <p>Represents the input of a <i>DescribeEngineDefaultParameters</i> action.</p>
  */
  class AWS_ELASTICACHE_API DescribeEngineDefaultParametersRequest : public ElastiCacheRequest
  {
  public:
    DescribeEngineDefaultParametersRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The name of the cache parameter group family. Valid values are: <code>memcached1.4</code> | <code>redis2.6</code> | <code>redis2.8</code></p>
    */
    inline const Aws::String& GetCacheParameterGroupFamily() const{ return m_cacheParameterGroupFamily; }

    /*
     <p>The name of the cache parameter group family. Valid values are: <code>memcached1.4</code> | <code>redis2.6</code> | <code>redis2.8</code></p>
    */
    inline void SetCacheParameterGroupFamily(const Aws::String& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = value; }

    /*
     <p>The name of the cache parameter group family. Valid values are: <code>memcached1.4</code> | <code>redis2.6</code> | <code>redis2.8</code></p>
    */
    inline void SetCacheParameterGroupFamily(Aws::String&& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = value; }

    /*
     <p>The name of the cache parameter group family. Valid values are: <code>memcached1.4</code> | <code>redis2.6</code> | <code>redis2.8</code></p>
    */
    inline void SetCacheParameterGroupFamily(const char* value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily.assign(value); }

    /*
     <p>The name of the cache parameter group family. Valid values are: <code>memcached1.4</code> | <code>redis2.6</code> | <code>redis2.8</code></p>
    */
    inline DescribeEngineDefaultParametersRequest& WithCacheParameterGroupFamily(const Aws::String& value) { SetCacheParameterGroupFamily(value); return *this;}

    /*
     <p>The name of the cache parameter group family. Valid values are: <code>memcached1.4</code> | <code>redis2.6</code> | <code>redis2.8</code></p>
    */
    inline DescribeEngineDefaultParametersRequest& WithCacheParameterGroupFamily(Aws::String&& value) { SetCacheParameterGroupFamily(value); return *this;}

    /*
     <p>The name of the cache parameter group family. Valid values are: <code>memcached1.4</code> | <code>redis2.6</code> | <code>redis2.8</code></p>
    */
    inline DescribeEngineDefaultParametersRequest& WithCacheParameterGroupFamily(const char* value) { SetCacheParameterGroupFamily(value); return *this;}

    /*
     <p>The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a marker is included in the response so that the remaining results can be retrieved.</p> <p>Default: 100</p> <p>Constraints: minimum 20; maximum 100.</p>
    */
    inline long GetMaxRecords() const{ return m_maxRecords; }

    /*
     <p>The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a marker is included in the response so that the remaining results can be retrieved.</p> <p>Default: 100</p> <p>Constraints: minimum 20; maximum 100.</p>
    */
    inline void SetMaxRecords(long value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /*
     <p>The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a marker is included in the response so that the remaining results can be retrieved.</p> <p>Default: 100</p> <p>Constraints: minimum 20; maximum 100.</p>
    */
    inline DescribeEngineDefaultParametersRequest& WithMaxRecords(long value) { SetMaxRecords(value); return *this;}

    /*
     <p>An optional marker returned from a prior request. Use this marker for pagination of results from this action. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <i>MaxRecords</i>.</p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /*
     <p>An optional marker returned from a prior request. Use this marker for pagination of results from this action. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <i>MaxRecords</i>.</p>
    */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>An optional marker returned from a prior request. Use this marker for pagination of results from this action. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <i>MaxRecords</i>.</p>
    */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>An optional marker returned from a prior request. Use this marker for pagination of results from this action. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <i>MaxRecords</i>.</p>
    */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /*
     <p>An optional marker returned from a prior request. Use this marker for pagination of results from this action. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <i>MaxRecords</i>.</p>
    */
    inline DescribeEngineDefaultParametersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p>An optional marker returned from a prior request. Use this marker for pagination of results from this action. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <i>MaxRecords</i>.</p>
    */
    inline DescribeEngineDefaultParametersRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /*
     <p>An optional marker returned from a prior request. Use this marker for pagination of results from this action. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <i>MaxRecords</i>.</p>
    */
    inline DescribeEngineDefaultParametersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_cacheParameterGroupFamily;
    bool m_cacheParameterGroupFamilyHasBeenSet;
    long m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws