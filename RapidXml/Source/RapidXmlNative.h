// simple Native Wrapper for c# Rapid Xml
#pragma once

#include <rapidxml/rapidxml.hpp>

#include <string>
#include <assert.h>

#if defined(WIN32) || defined(_WIN32)
#define EXPORT_API __declspec(dllexport)
#else
#define EXPORT_API   
#endif

class RapidXmlNative
{
public:
    RapidXmlNative(const char* InContent) :
        Document(new rapidxml::xml_document<>()),
        LastErrorMessage("")
    {        
        if (!InContent)
        {
            LastErrorMessage = "EmptyContent";
            return;
        }

        Content = InContent;
    }

    ~RapidXmlNative()
    {
        if (Document)
        {
            delete Document;
            Document = NULL;
        }
    }

    bool Parse()
    {
        assert(Document);

        if (Content.empty())
        {
            return false;
        }

        try
        {
            Document->parse<0>((char*)Content.c_str());
        }
        catch (std::exception& e)
        {
            LastErrorMessage = e.what();            

            return false;
        }

        return true;
    }

    rapidxml::xml_document<>* GetDocument() const
    {
        return Document;
    }

    const std::string& GetLastErrorMessage() const
    {
        return LastErrorMessage;
    }

private:
    // disable copyable
    RapidXmlNative(const RapidXmlNative&);
    RapidXmlNative& operator = (const RapidXmlNative&);

protected:
    rapidxml::xml_document<>*  Document;
    std::string                Content;
    std::string                LastErrorMessage;
};
