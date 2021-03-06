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

#include <aws/securityhub/model/NoteUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

NoteUpdate::NoteUpdate() : 
    m_textHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
}

NoteUpdate::NoteUpdate(JsonView jsonValue) : 
    m_textHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
  *this = jsonValue;
}

NoteUpdate& NoteUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedBy"))
  {
    m_updatedBy = jsonValue.GetString("UpdatedBy");

    m_updatedByHasBeenSet = true;
  }

  return *this;
}

JsonValue NoteUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("UpdatedBy", m_updatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
