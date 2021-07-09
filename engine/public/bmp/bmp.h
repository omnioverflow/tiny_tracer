#pragma once

#include <string>
#include <vector>

#include "bmp_file_header.h"
#include "bmp_info_header.h"
#include "rgb.h"

// Please refer to the following:
// http://www.martinreddy.net/gfx/2d/BMP.txt

namespace engine
{
  class Bmp
  {
  public:
    static Bmp read(const std::string& filename);
    static void write(const std::string& filename, const Bmp& bmp);

    Rgba readPixel(unsigned int x, unsigned int y) const;
    void setPixel(unsigned int x, unsigned int y, const Rgba& rgba);

  private:
    BmpFileHeader               mFileHeader;
    BmpInfoHeader               mInfoHeader;
    std::vector<Rgba>           mColors;
    std::vector<unsigned char>  mBitmapBits;
  }; // class Bmp
} // namespace engine