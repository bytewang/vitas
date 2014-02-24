/*
** $Id: InspectorClientMg.h 546 2007-10-24 09:26:33Z jpzhang $
**
** InspectorClientMg.h: Inspector Client header file.
**
** Copyright(C) 2007 Feynman Software.
**
** All rights reserved by Feynman Software.
**
** Create date: 2007-9-20
*/

#ifndef InspectorClientMg_H
#define InspectorClientMg_H

#include "InspectorClient.h"

namespace WebCore {

class InspectorClientMg : public InspectorClient
{
public:
    InspectorClientMg();
    virtual ~InspectorClientMg();

    virtual void inspectorDestroyed(){delete this;}

    virtual void openInspectorFrontend(InspectorController*);

    virtual void highlight(Node*);
    virtual void hideHighlight();

    virtual void populateSetting(const String& key, String* value) {};
    virtual void storeSetting(const String& key, const String& value) {};
};

}
#endif // InspectorClientMg_H
