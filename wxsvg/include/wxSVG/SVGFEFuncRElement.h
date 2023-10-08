//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFEFuncRElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_FUNC_R_ELEMENT_H
#define WX_SVG_FE_FUNC_R_ELEMENT_H

#include "SVGComponentTransferFunctionElement.h"
#include "String_wxsvg.h"
#include "Element.h"
#include "SVGAnimatedType.h"

class wxSVGFEFuncRElement : public wxSVGComponentTransferFunctionElement {
public:
  wxSVGFEFuncRElement(wxString tagName = wxT("feFuncR"))
      : wxSVGComponentTransferFunctionElement(tagName) {}
  virtual ~wxSVGFEFuncRElement() {}
  wxSvgXmlNode* CloneNode(bool deep = true) {
    return new wxSVGFEFuncRElement(*this);
  }
  bool HasAttribute(const wxString& name) const;
  wxString GetAttribute(const wxString& name) const;
  bool SetAttribute(const wxString& name, const wxString& value);
  wxSvgXmlAttrHash GetAttributes() const;
  bool SetAnimatedValue(const wxString& name, const wxSVGAnimatedType& value);
  virtual wxSVGDTD GetDtd() const { return wxSVG_FEFUNCR_ELEMENT; }
};

#endif  // WX_SVG_FE_FUNC_R_ELEMENT_H
