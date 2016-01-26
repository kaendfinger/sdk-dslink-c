#ifndef BROKER_BROKER_H
#define BROKER_BROKER_H

#ifdef __cplusplus
extern "C" {
#endif

#include <wslay/wslay.h>
#include <dslink/col/map.h>
#include <dslink/socket.h>
#include "broker/remote_dslink.h"

typedef struct Broker {

    RemoteDSLink *link;
    Socket *socket;
    wslay_event_context_ptr ws;

    // Key is string and value is RemoteDSLink
    Map clientConnecting;

    // Key is a string and value is a RemoteDSLink
    Map downstream;

} Broker;

int broker_init();

#ifdef __cplusplus
}
#endif

#endif // BROKER_BROKER_H
