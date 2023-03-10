/*
 * Copyright (C) 2015-2019 Alibaba Group Holding Limited
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

#include "cJSON.h"
#include "iot_import.h"
#include "iot_export_linkkit.h"
#include "iotx_log.h"

#include "ct_main.h"
#include "ct_entry.h"
#include "ct_ut.h"
#include "ct_ota.h"

int32_t ct_simulate_post_property(char *prop)
{
    ct_ctx_t *ct_ctx = ct_get_ctx();
    int32_t res = -0x100;

    res = IOT_Linkkit_Report(ct_ctx->master_devid, ITM_MSG_POST_PROPERTY,
                             (uint8_t *)prop, strlen(prop));
    return res;
}

int32_t ct_simulate_post_event(char *event_id, char *event_payload)
{
    ct_ctx_t *ct_ctx = ct_get_ctx();
    int32_t res = -0x100;

    res = IOT_Linkkit_TriggerEvent(ct_ctx->master_devid, event_id, strlen(event_id),
                                   event_payload, strlen(event_payload));
    return res;
}

//Just for reference
void ct_simulate_deviceinfo_update(char *device_info_update)
{
    int res = 0;
    ct_ctx_t *ct_ctx = ct_get_ctx();

    res = IOT_Linkkit_Report(ct_ctx->master_devid, ITM_MSG_DEVICEINFO_UPDATE,
                             (unsigned char *)device_info_update, strlen(device_info_update));
    ct_info("Device Info Update Message ID: %d", res);
}

//Just for reference
void ct_simulate_deviceinfo_delete(char *device_info_delete)
{
    int res = 0;
    ct_ctx_t *ct_ctx = ct_get_ctx();

    res = IOT_Linkkit_Report(ct_ctx->master_devid, ITM_MSG_DEVICEINFO_DELETE,
                             (unsigned char *)device_info_delete, strlen(device_info_delete));
    ct_info("Device Info Delete Message ID: %d", res);
}

void ct_simulate_service_response(int code, char*msg_id, char *service_id, char *service, char*ctx)
{
    ct_ctx_t *ct_ctx = ct_get_ctx();

    iotx_dm_send_service_response(ct_ctx->master_devid, msg_id, strlen(msg_id), code,
                                 service_id, strlen(service_id), service, strlen(service), ctx);
}
