#ifndef __MAIN___H
#define __MAIN___H 

/*
*Includes - BLibliotecas do sistema e do usuario.
*/
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>

//FreeRTOS
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "freertos/queue.h"
#include "freertos/event_groups.h"

#include "esp_system.h"
#include "esp_log.h"

//Callbacks
#include "esp_event.h"

//Ethernet lib
#include "esp_eth.h"
#include "esp_netif.h"

//Wifi
#include "esp_wifi.h"

//Drivers
#include "esp32/rom/gpio.h"
#include "driver/gpio.h"
#include "driver/periph_ctrl.h"

//Lwip
#include "lwip/err.h"
#include "lwip/sys.h"
#include "esp_sntp.h"
#include <lwip/sockets.h>

#endif /* __MAIN___H */