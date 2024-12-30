#ifndef HTTP_H
#define HTTP_H

#include <fcntl.h>    // For open()
#include <unistd.h>   // For read() and close()
#include <sys/stat.h>

#include "nvs_flash.h"
#include "esp_wifi.h"
#include "esp_event.h"


#include <socket.h>
#include <unistd.h>

#define PORT 22160
#define BACKLOGS 10



#define FILE_PATH "webpage/webpage.html"

void http_server();


#endif