#include <esphome.h>
#include <display_buffer.h>

#define xres 960
#define yres 540
void loadingPage(DisplayBuffer it)
{
  it.print(480, 15, id(vga_font), TextAlign::CENTER, "Loading");
  it.print(xres - 30, 5, id(font_icons_tiny), TextAlign::TOP_CENTER, id(icon_wifi).c_str());
  
}
