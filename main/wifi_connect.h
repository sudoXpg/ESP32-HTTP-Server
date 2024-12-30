#ifndef WIFI_CONNECT_H
#define WIFI_CONNECT_H

#include "nvs_flash.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include <string.h>

void wifi_connect(char *wifiSSID, char *wifiPWD);

#endif