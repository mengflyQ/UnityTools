//
// export for dll wrapper
//
#include "RapidXmlNative.h"

extern "C"
{
    EXPORT_API void* LoadFromString(const char* pInContent)
    {
        RapidXmlNative* Native = new RapidXmlNative(pInContent);

        Native->Parse();

        return Native;
    }

    EXPORT_API const char* GetLastErrorMessage(void* InDocument)
    {
        assert(InDocument);

        RapidXmlNative* Native = (RapidXmlNative*)InDocument;

        return Native->GetLastErrorMessage().c_str();
    }

    EXPORT_API void DisposeThis(void* InDocument)
    {
        assert(InDocument);

        if (InDocument)
        {
            RapidXmlNative* Native = (RapidXmlNative*)InDocument;
            delete Native;
        }
    }

    EXPORT_API void* FirstAttributePtr(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr)
    {
        assert(InDocument && InNodePtr);

        if (!InNodePtr)
        {
            return NULL;
        }

        return InNodePtr->first_attribute();
    }

    EXPORT_API void* FirstAttributePtrWithName(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr, const char* pName)
    {
        assert(InDocument && InNodePtr);

        if (!InNodePtr)
        {
            return NULL;
        }

        return InNodePtr->first_attribute(pName);
    }

    EXPORT_API void* NextAttributePtr(RapidXmlNative* InDocument, rapidxml::xml_attribute<>* InAttrPtr)
    {
        assert(InDocument && InAttrPtr);

        if (!InAttrPtr)
        {
            return NULL;
        }

        return InAttrPtr->next_attribute();
    }

    EXPORT_API void* NextAttributePtrWithName(RapidXmlNative* InDocument, rapidxml::xml_attribute<>* InAttrPtr, const char* pName)
    {
        assert(InDocument && InAttrPtr);

        if (!InAttrPtr)
        {
            return NULL;
        }

        return InAttrPtr->next_attribute(pName);
    }

    EXPORT_API bool HasAttribute(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr, const char* pName)
    {
        assert(InDocument && InNodePtr && pName);

        if (!InDocument || !InNodePtr || !pName)
        {
            return false;
        }
        
        return InNodePtr->first_attribute(pName) != NULL;
    }

    EXPORT_API bool AttributeBool(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr, const char* pName)
    {
        assert(InDocument && InNodePtr && pName);

        if (!InDocument || !InNodePtr || !pName)
        {
            return false;
        }

        rapidxml::xml_attribute<>* AttributeNode = InNodePtr->first_attribute(pName);

        if (!AttributeNode)
        {
            return false;
        }

        char* Value = AttributeNode->value();

        assert(Value != NULL);

#ifdef _MSC_VER
        return _stricmp(Value, "true") == 0;
#else
        return strcasecmp(Value, "true") == 0;
#endif
    }

    EXPORT_API int AttributeInt(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr, const char* pName)
    {
        assert(InDocument && InNodePtr && pName);

        if (!InDocument || !InNodePtr || !pName)
        {
            return 0;
        }

        rapidxml::xml_attribute<>* AttributeNode = InNodePtr->first_attribute(pName);

        if (!AttributeNode)
        {
            return 0;
        }

        char* Value = AttributeNode->value();

        assert(Value != NULL);

        return atoi(Value);
    }

    EXPORT_API unsigned AttributeUInt(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr, const char* pName)
    {
        assert(InDocument && InNodePtr && pName);

        if (!InDocument || !InNodePtr || !pName)
        {
            return 0;
        }

        rapidxml::xml_attribute<>* AttributeNode = InNodePtr->first_attribute(pName);

        if (!AttributeNode)
        {
            return 0;
        }

        char* Value = AttributeNode->value();

        assert(Value != NULL);

        return strtoul(Value, NULL, 10);
    }

    EXPORT_API long long AttributeInt64(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr, const char* pName)
    {
        assert(InDocument && InNodePtr && pName);

        if (!InDocument || !InNodePtr || !pName)
        {
            return 0;
        }

        rapidxml::xml_attribute<>* AttributeNode = InNodePtr->first_attribute(pName);

        if (!AttributeNode)
        {
            return 0;
        }

        char* Value = AttributeNode->value();

        assert(Value != NULL);

        return atoll(Value);
    }

    EXPORT_API unsigned long long AttributeUInt64(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr, const char* pName)
    {
        assert(InDocument && InNodePtr && pName);

        if (!InDocument || !InNodePtr || !pName)
        {
            return 0;
        }

        rapidxml::xml_attribute<>* AttributeNode = InNodePtr->first_attribute(pName);

        if (!AttributeNode)
        {
            return 0;
        }

        char* Value = AttributeNode->value();

        assert(Value != NULL);

        return strtoull(Value, NULL, 10);
    }

    EXPORT_API float AttributeFloat(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr, const char* pName)
    {
        assert(InDocument && InNodePtr && pName);

        if (!InDocument || !InNodePtr || !pName)
        {
            return 0;
        }

        rapidxml::xml_attribute<>* AttributeNode = InNodePtr->first_attribute(pName);

        if (!AttributeNode)
        {
            return 0;
        }

        char* Value = AttributeNode->value();

        assert(Value != NULL);

        return (float)atof(Value);
    }

    EXPORT_API double AttributeDouble(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr, const char* pName)
    {
        assert(InDocument && InNodePtr && pName);

        if (!InDocument || !InNodePtr || !pName)
        {
            return 0;
        }

        rapidxml::xml_attribute<>* AttributeNode = InNodePtr->first_attribute(pName);

        if (!AttributeNode)
        {
            return 0;
        }

        char* Value = AttributeNode->value();

        assert(Value != NULL);

        return atof(Value);
    }

    EXPORT_API void* AttributeStringPtr(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr, const char* pName)
    {
        assert(InDocument && InNodePtr && pName);

        if (!InDocument || !InNodePtr || !pName)
        {
            return NULL;
        }

        rapidxml::xml_attribute<>* AttributeNode = InNodePtr->first_attribute(pName);

        if (!AttributeNode)
        {
            return NULL;
        }

        char* Value = AttributeNode->value();

        assert(Value != NULL);

        return Value;
    }

    EXPORT_API void* FirstNodePtr(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr)
    {
        assert(InDocument);

        if (!InDocument)
        {
            return NULL;
        }

        if (InNodePtr != NULL)
        {
            return InNodePtr->first_node();
        }
        else
        {
            RapidXmlNative* Native = (RapidXmlNative*)InDocument;

            rapidxml::xml_document<>* Document = Native->GetDocument();

            assert(Document);

            return Document->first_node();
        }
    }

    EXPORT_API void* FirstNodePtrWithName(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr, const char* pName)
    {
        assert(InDocument);

        if (!InDocument)
        {
            return NULL;
        }

        if (InNodePtr != NULL)
        {
            return InNodePtr->first_node(pName);
        }
        else
        {
            RapidXmlNative* Native = (RapidXmlNative*)InDocument;

            rapidxml::xml_document<>* Document = Native->GetDocument();

            assert(Document);

            return Document->first_node(pName);
        }
    }

    EXPORT_API void* NextSiblingPtr(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr)
    {
        assert(InDocument && InNodePtr);

        if (!InDocument || !InNodePtr)
        {
            return NULL;
        }
        
        return InNodePtr->next_sibling();
    }

    EXPORT_API void* NextSiblingPtrWithName(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr, const char* pName)
    {
        assert(InDocument && InNodePtr);

        if (!InDocument || !InNodePtr)
        {
            return NULL;
        }

        return InNodePtr->next_sibling(pName);
    }

    EXPORT_API void* GetNodeTagPtr(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr)
    {
        assert(InDocument && InNodePtr);

        if (!InDocument || !InNodePtr)
        {
            return NULL;
        }
        
        return InNodePtr->name();
    }

    EXPORT_API int GetChildNodeCount(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr)
    {
        assert(InDocument && InNodePtr);

        if (!InDocument || !InNodePtr)
        {
            return NULL;
        }

        rapidxml::xml_node<>* Child = InNodePtr->first_node();

        int Result = 0;

        while (Child)
        {
            ++Result;

            Child = Child->next_sibling();
        }

        return Result;        
    }

    EXPORT_API int GetAttributeCount(RapidXmlNative* InDocument, rapidxml::xml_node<>* InNodePtr)
    {
        assert(InDocument && InNodePtr);

        if (!InDocument || !InNodePtr)
        {
            return NULL;
        }

        rapidxml::xml_attribute<>* Attr = InNodePtr->first_attribute();

        int Result = 0;

        while (Attr)
        {
            ++Result;

            Attr = Attr->next_attribute();
        }

        return Result;
    }

    EXPORT_API void* GetAttributeNamePtr(RapidXmlNative* InDocument, rapidxml::xml_attribute<>* InAttrPtr)
    {
        assert(InDocument && InAttrPtr && InAttrPtr->document() == InDocument->GetDocument());

        return InAttrPtr->name();
    }

    EXPORT_API void* GetAttributeValuePtr(RapidXmlNative* InDocument, rapidxml::xml_attribute<>* InAttrPtr)
    {
        assert(InDocument && InAttrPtr && InAttrPtr->document() == InDocument->GetDocument());

        return InAttrPtr->value();
    }

    EXPORT_API bool GetAttributeValueBool(RapidXmlNative* InDocument, rapidxml::xml_attribute<>* InAttrPtr)
    {
        assert(InDocument && InAttrPtr && InAttrPtr->document() == InDocument->GetDocument());

        if (!InAttrPtr->value())
        {
            return false;
        }
                
#ifdef _MSC_VER
        return _stricmp(InAttrPtr->value(), "true") == 0;
#else
        return strcasecmp(InAttrPtr->value(), "true") == 0;
#endif
    }

    EXPORT_API int GetAttributeValueInt(RapidXmlNative* InDocument, rapidxml::xml_attribute<>* InAttrPtr)
    {
        assert(InDocument && InAttrPtr && InAttrPtr->document() == InDocument->GetDocument());

        if (!InAttrPtr->value())
        {
            return 0;
        }

        return atoi(InAttrPtr->value());
    }

    EXPORT_API unsigned GetAttributeValueUInt(RapidXmlNative* InDocument, rapidxml::xml_attribute<>* InAttrPtr)
    {
        assert(InDocument && InAttrPtr && InAttrPtr->document() == InDocument->GetDocument());

        if (!InAttrPtr->value())
        {
            return 0;
        }

        return strtoul(InAttrPtr->value(), NULL, 10);
    }

    EXPORT_API long long GetAttributeValueInt64(RapidXmlNative* InDocument, rapidxml::xml_attribute<>* InAttrPtr)
    {
        assert(InDocument && InAttrPtr && InAttrPtr->document() == InDocument->GetDocument());

        if (!InAttrPtr->value())
        {
            return 0;
        }

        return atoll(InAttrPtr->value());
    }

    EXPORT_API unsigned long long GetAttributeValueUInt64(RapidXmlNative* InDocument, rapidxml::xml_attribute<>* InAttrPtr)
    {
        assert(InDocument && InAttrPtr && InAttrPtr->document() == InDocument->GetDocument());

        if (!InAttrPtr->value())
        {
            return 0;
        }

        return strtoull(InAttrPtr->value(), NULL, 10);
    }

    EXPORT_API float GetAttributeValueFloat(RapidXmlNative* InDocument, rapidxml::xml_attribute<>* InAttrPtr)
    {
        assert(InDocument && InAttrPtr && InAttrPtr->document() == InDocument->GetDocument());

        if (!InAttrPtr->value())
        {
            return 0;
        }

        return (float)atof(InAttrPtr->value());
    }

    EXPORT_API double GetAttributeValueDouble(RapidXmlNative* InDocument, rapidxml::xml_attribute<>* InAttrPtr)
    {
        assert(InDocument && InAttrPtr && InAttrPtr->document() == InDocument->GetDocument());

        if (!InAttrPtr->value())
        {
            return 0;
        }

        return atof(InAttrPtr->value());
    }
}
