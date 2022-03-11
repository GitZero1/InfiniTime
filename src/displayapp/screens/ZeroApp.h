#pragma once

#include "displayapp/screens/Screen.h"
#include <lvgl/lvgl.h>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      class ZeroApp : public Screen {
      public:
        lv_obj_t* button, *title;
        ZeroApp(DisplayApp* app);
        ~ZeroApp() override;
        void EventHandler(lv_obj_t*, lv_event_t event);
      };
    }
  }
}