//////////////////////////////////////////////////////////////////////////////
// Name:        SVGLength.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_LENGTH_H
#define WX_SVG_LENGTH_H

#include "String_wxsvg.h"
#include "SVGLengthCalculate.h"
#include "math.h"

enum wxSVG_LENGTHTYPE {
  wxSVG_LENGTHTYPE_UNKNOWN = 0,
  wxSVG_LENGTHTYPE_NUMBER = 1,
  wxSVG_LENGTHTYPE_PERCENTAGE = 2,
  wxSVG_LENGTHTYPE_EMS = 3,
  wxSVG_LENGTHTYPE_EXS = 4,
  wxSVG_LENGTHTYPE_PX = 5,
  wxSVG_LENGTHTYPE_CM = 6,
  wxSVG_LENGTHTYPE_MM = 7,
  wxSVG_LENGTHTYPE_IN = 8,
  wxSVG_LENGTHTYPE_PT = 9,
  wxSVG_LENGTHTYPE_PC = 10
};

class wxSVGLength {
protected:
  wxSVG_LENGTHTYPE m_unitType;
  double m_value;
  double m_valueInSpecifiedUnits;

public:
  inline wxSVG_LENGTHTYPE GetUnitType() const { return m_unitType; }
  inline void SetUnitType(const wxSVG_LENGTHTYPE& n) { m_unitType = n; }

public:
  wxSVGLength()
      : m_unitType(wxSVG_LENGTHTYPE_UNKNOWN),
        m_value(0),
        m_valueInSpecifiedUnits(0) {}
  wxSVGLength(double v)
      : m_unitType(wxSVG_LENGTHTYPE_NUMBER),
        m_value(v),
        m_valueInSpecifiedUnits(v) {}
  wxSVGLength(wxSVG_LENGTHTYPE unitType, double v) : m_unitType(unitType) {
    SetValueInSpecifiedUnits(v);
  }
  wxSVGLength(const wxSVGLength& l)
      : m_unitType(l.m_unitType),
        m_value(l.m_value),
        m_valueInSpecifiedUnits(l.m_valueInSpecifiedUnits) {}
  virtual ~wxSVGLength() {}

  inline double GetValue() const { return m_value; }
  inline void SetValue(double n) {
    m_unitType = wxSVG_LENGTHTYPE_NUMBER;
    m_valueInSpecifiedUnits = n;
    m_value = n;
  }
  inline operator double() const { return GetValue(); }

  double GetValueInSpecifiedUnits() const { return m_valueInSpecifiedUnits; }
  void SetValueInSpecifiedUnits(double n);

  wxString GetValueAsString() const;
  void SetValueAsString(const wxString& n);

  inline void ToViewportWidth(float viewportWidth) {
    m_value = m_valueInSpecifiedUnits * viewportWidth / 100;
  }
  inline void ToViewportHeight(float viewportHeight) {
    m_value = m_valueInSpecifiedUnits * viewportHeight / 100;
  }
  inline void ToViewportSize(float viewportWidth, float viewportHeight) {
    m_value =
        m_valueInSpecifiedUnits *
        sqrt(viewportWidth * viewportWidth + viewportHeight * viewportHeight) /
        sqrt(2.0) / 100;
  }

  virtual void NewValueSpecifiedUnits(wxSVG_LENGTHTYPE unitType,
                                      double valueInSpecifiedUnits);
  virtual void ConvertToSpecifiedUnits(wxSVG_LENGTHTYPE unitType);
};

#endif  // WX_SVG_LENGTH_H
