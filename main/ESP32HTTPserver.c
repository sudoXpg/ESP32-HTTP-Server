#include <stdio.h>
#include "wifi_connect.h"
#include "http.h"

void app_main(void){
    wifi_connect("s", "");
    http_server();
    //xTaskCreate(http_server, "HTTP SERVER", 4096, NULL, 3, NULL);
}