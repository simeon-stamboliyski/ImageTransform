/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

namespace uiuc {

class HSLAPixel {
public:
  double h;  // Hue, in degrees [0, 360)
  double s;  // Saturation, [0.0, 1.0]
  double l;  // Luminance, [0.0, 1.0]
  double a;  // Alpha, [0.0, 1.0]

  // Default constructor
  HSLAPixel()
      : h(0.0), s(0.0), l(0.0), a(1.0) { }

  // Parameterized constructor
  HSLAPixel(double hue, double saturation, double luminance, double alpha = 1.0)
      : h(hue), s(saturation), l(luminance), a(alpha) { }
};

}
