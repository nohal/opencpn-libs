//////////////////////////////////////////////////////////////////////////////
// Name:        SVGPathSegLinetoRel.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_PATH_SEG_LINETO_REL_H
#define WX_SVG_PATH_SEG_LINETO_REL_H

#include "SVGPathSeg.h"

class wxSVGPathSegLinetoRel : public wxSVGPathSeg {
protected:
  double m_x;
  double m_y;

public:
  inline double GetX() const { return m_x; }
  inline void SetX(double n) { m_x = n; }

  inline double GetY() const { return m_y; }
  inline void SetY(double n) { m_y = n; }

public:
  wxSVGPathSegLinetoRel()
      : wxSVGPathSeg(wxPATHSEG_LINETO_REL), m_x(0), m_y(0) {}
  virtual ~wxSVGPathSegLinetoRel() {}
};

#endif  // WX_SVG_PATH_SEG_LINETO_REL_H
