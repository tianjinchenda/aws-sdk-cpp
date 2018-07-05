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

#include <aws/pinpoint/model/UpdateAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

UpdateAttributesRequest::UpdateAttributesRequest() : 
    m_blacklistHasBeenSet(false)
{
}

UpdateAttributesRequest::UpdateAttributesRequest(const JsonValue& jsonValue) : 
    m_blacklistHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateAttributesRequest& UpdateAttributesRequest::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Blacklist"))
  {
    Array<JsonValue> blacklistJsonList = jsonValue.GetArray("Blacklist");
    for(unsigned blacklistIndex = 0; blacklistIndex < blacklistJsonList.GetLength(); ++blacklistIndex)
    {
      m_blacklist.push_back(blacklistJsonList[blacklistIndex].AsString());
    }
    m_blacklistHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateAttributesRequest::Jsonize() const
{
  JsonValue payload;

  if(m_blacklistHasBeenSet)
  {
   Array<JsonValue> blacklistJsonList(m_blacklist.size());
   for(unsigned blacklistIndex = 0; blacklistIndex < blacklistJsonList.GetLength(); ++blacklistIndex)
   {
     blacklistJsonList[blacklistIndex].AsString(m_blacklist[blacklistIndex]);
   }
   payload.WithArray("Blacklist", std::move(blacklistJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
