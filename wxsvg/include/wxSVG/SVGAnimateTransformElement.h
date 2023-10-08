//////////////////////////////////////////////////////////////////////////////
// Name:        SVGAnimateTransformElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ANIMATE_TRANSFORM_ELEMENT_H
#define WX_SVG_ANIMATE_TRANSFORM_ELEMENT_H

#include "SVGAnimationElement.h"
#include "String_wxsvg.h"
#include "Element.h"

enum wxSVG_ANIMATETRANSFORM {
  wxSVG_ANIMATETRANSFORM_TRANSLATE = 0,
  wxSVG_ANIMATETRANSFORM_SCALE = 1,
  wxSVG_ANIMATETRANSFORM_ROTATE = 2,
  wxSVG_ANIMATETRANSFORM_SKEWX = 3,
  wxSVG_ANIMATETRANSFORM_SKEWY = 4
};

class wxSVGAnimateTransformElement : public wxSVGAnimationElement {
protected:
  wxSVG_ANIMATETRANSFORM m_type;
  int m_transformIdx;

public:
  inline wxSVG_ANIMATETRANSFORM GetType() const { return m_type; }
  inline void SetType(const wxSVG_ANIMATETRANSFORM& n) { m_type = n; }

public:
  wxSVGAnimateTransformElement(wxString tagName = wxT("animateTransform"))
      : wxSVGAnimationElement(tagName),
        m_type(wxSVG_ANIMATETRANSFORM(0)),
        m_transformIdx(-1) {}
  virtual ~wxSVGAnimateTransformElement() {}
  wxSvgXmlNode* CloneNode(bool deep = true) {
    return new wxSVGAnimateTransformElement(*this);
  }

  virtual void ApplyAnimation();

  bool HasAttribute(const wxString& name) const;
  wxString GetAttribute(const wxString& name) const;
  bool SetAttribute(const wxString& name, const wxString& value);
  wxSvgXmlAttrHash GetAttributes() const;
  virtual wxSVGDTD GetDtd() const { return wxSVG_ANIMATETRANSFORM_ELEMENT; }
};

#endif  // WX_SVG_ANIMATE_TRANSFORM_ELEMENT_H
