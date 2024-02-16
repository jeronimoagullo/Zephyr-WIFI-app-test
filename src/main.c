/**
 * @file main.c
 * @author Jeronimo Agullo (jeronimo.agullo@sngular.com)
 * @brief It is a WIFI test that just connect to a WIFI
 * it supports Esp32 using the corresponding Kconfig and dts overlay
 * @version 1.0
 * @date 2024-02-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <zephyr/kernel.h>
#include "jero_wifi.h"

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(wifi_test, LOG_LEVEL_DBG);

int main(void)
{
	if (init_wifi()){
		while(1){
			LOG_INF("Know you can use WIFI for your projects! Project by Jeronimo");
			k_msleep(10000);
		}
	}
	
	return 0;
}
