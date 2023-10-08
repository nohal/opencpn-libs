//////////////////////////////////////////////////////////////////////////////
// Name:        SVGAnimatedPathData.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ANIMATED_PATH_DATA_H
#define WX_SVG_ANIMATED_PATH_DATA_H

#include "SVGPathSegList.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGAnimatedPathData {
protected:
  wxSVGPathSegList m_pathSegList;
  wxSVGPathSegList m_normalizedPathSegList;
  wxSVGPathSegList m_animatedPathSegList;
  wxSVGPathSegList m_animatedNormalizedPathSegList;

public:
  inline const wxSVGPathSegList& GetPathSegList() const {
    return m_pathSegList;
  }
  inline void SetPathSegList(const wxSVGPathSegList& n) { m_pathSegList = n; }

  inline const wxSVGPathSegList& GetNormalizedPathSegList() const {
    return m_normalizedPathSegList;
  }
  inline void SetNormalizedPathSegList(const wxSVGPathSegList& n) {
    m_normalizedPathSegList = n;
  }

  inline const wxSVGPathSegList& GetAnimatedPathSegList() const {
    return m_animatedPathSegList;
  }
  inline void SetAnimatedPathSegList(const wxSVGPathSegList& n) {
    m_animatedPathSegList = n;
  }

  inline const wxSVGPathSegList& GetAnimatedNormalizedPathSegList() const {
    return m_animatedNormalizedPathSegList;
  }
  inline void SetAnimatedNormalizedPathSegList(const wxSVGPathSegList& n) {
    m_animatedNormalizedPathSegList = n;
  }

public:
  virtual ~wxSVGAnimatedPathData() {}
  bool HasAttribute(const wxString& name) const;
  wxString GetAttribute(const wxString& name) const;
  bool SetAttribute(const wxString& name, const wxString& value);
  wxSvgXmlAttrHash GetAttributes() const;
};

#endif  // WX_SVG_ANIMATED_PATH_DATA_H
