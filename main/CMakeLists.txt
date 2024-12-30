idf_component_register(SRCS "ESP32HTTPserver.c" "wifi_connect.c" "http.c"
                    INCLUDE_DIRS "."
                    EMBED_FILES webpage/webpage.html)