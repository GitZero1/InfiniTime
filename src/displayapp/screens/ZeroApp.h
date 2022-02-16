#pragma once

#include "displayapp/screens/Screen.h"
#include <lvgl/lvgl.h>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      class ZeroApp : public Screen {
      public:
        ZeroApp(DisplayApp* app);
        ~ZeroApp() override;
      };
    }
  }
}