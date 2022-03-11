#include "displayapp/screens/ZeroApp.h"
#include "displayapp/DisplayApp.h"

#include "components/ble/AlertNotificationService.h"

using namespace Pinetime::Applications::Screens;

ZeroApp::ZeroApp(DisplayApp* app) : Screen(app) {
  button = lv_btn_create(lv_scr_act(), nullptr);
  lv_obj_align(button, lv_scr_act(), LV_ALIGN_CENTER,0,0);


  title = lv_label_create(button, nullptr);
  lv_label_set_text_static(title, "Push me");

  
}

void ZeroApp::EventHandler(lv_obj_t* obj, lv_event_t event) {
  if (event != LV_EVENT_CLICKED) {
    return;
  }

  if (obj == button) {
    //alertNotificationService.HijackService();
  }
}

ZeroApp::~ZeroApp() {
  lv_obj_clean(lv_scr_act());
}