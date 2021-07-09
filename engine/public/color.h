#pragma once

#include "bmp/bmp.h"

namespace color
{
  class RGBA
  {
    public:
      RGBA();
    private:
      int r;
      int g;
      int b;
      int a;
  };
};