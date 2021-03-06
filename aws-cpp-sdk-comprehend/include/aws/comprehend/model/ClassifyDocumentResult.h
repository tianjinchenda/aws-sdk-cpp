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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/DocumentClass.h>
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
namespace Comprehend
{
namespace Model
{
  class AWS_COMPREHEND_API ClassifyDocumentResult
  {
  public:
    ClassifyDocumentResult();
    ClassifyDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ClassifyDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline const Aws::Vector<DocumentClass>& GetClasses() const{ return m_classes; }

    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline void SetClasses(const Aws::Vector<DocumentClass>& value) { m_classes = value; }

    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline void SetClasses(Aws::Vector<DocumentClass>&& value) { m_classes = std::move(value); }

    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline ClassifyDocumentResult& WithClasses(const Aws::Vector<DocumentClass>& value) { SetClasses(value); return *this;}

    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline ClassifyDocumentResult& WithClasses(Aws::Vector<DocumentClass>&& value) { SetClasses(std::move(value)); return *this;}

    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline ClassifyDocumentResult& AddClasses(const DocumentClass& value) { m_classes.push_back(value); return *this; }

    /**
     * <p>The classes used by the document being analyzed. These are used for
     * multi-class trained models. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p>
     */
    inline ClassifyDocumentResult& AddClasses(DocumentClass&& value) { m_classes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DocumentClass> m_classes;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
