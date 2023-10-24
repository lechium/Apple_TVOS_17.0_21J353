//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_nw_array, OS_nw_browser, OS_nw_context, OS_nw_endpoint, OS_nw_interface, OS_nw_object, OS_nw_parameters, OS_nw_path;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_resolver : NSObject
{
    int status;	// 8 = 0x8
    struct os_unfair_lock_s lock;	// 12 = 0xc
    NSObject<OS_nw_parameters> *parameters;	// 16 = 0x10
    NSObject<OS_nw_endpoint> *endpoint;	// 24 = 0x18
    NSObject<OS_nw_context> *context;	// 32 = 0x20
    NSObject<OS_dispatch_group> *cancel_group;	// 40 = 0x28
    NSObject<OS_nw_object> *gai;	// 48 = 0x30
    unsigned int dns_service_id;	// 56 = 0x38
    struct _DNSServiceRef_t *dns_service;	// 64 = 0x40
    struct _DNSServiceRef_t *dns_service_secondary_pointer;	// 72 = 0x48
    unsigned int forced_protocol;	// 80 = 0x50
    int dns_error;	// 84 = 0x54
    unsigned short flags;	// 88 = 0x58
    CDUnknownBlockType update_block;	// 96 = 0x60
    CDUnknownBlockType cancel_handler;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *client_queue;	// 112 = 0x70
    NSObject<OS_nw_browser> *awdl_trigger_browser;	// 120 = 0x78
    void *query_timer;	// 128 = 0x80
    void *delayed_reporting_timer;	// 136 = 0x88
    NSObject<OS_nw_array> *endpoint_array;	// 144 = 0x90
    NSObject<OS_nw_array> *non_preferred_endpoint_array;	// 152 = 0x98
    void *non_preferred_timer;	// 160 = 0xa0
    CDUnknownBlockType alternative_handler;	// 168 = 0xa8
    NSObject<OS_nw_array> *services;	// 176 = 0xb0
    NSObject<OS_nw_array> *alternative_endpoints;	// 184 = 0xb8
    NSObject<OS_nw_array> *alternative_protocols;	// 192 = 0xc0
    NSObject<OS_nw_path> *path;	// 200 = 0xc8
    NSObject<OS_nw_interface> *path_required_interface;	// 208 = 0xd0
    NWConcrete_nw_resolver *internally_retained_object;	// 216 = 0xd8
    char *extended_dns_error_extra_text;	// 224 = 0xe0
    unsigned char selected_resolver_config[16];	// 232 = 0xe8
    int result_protocol;	// 248 = 0xf8
    int result_provider;	// 252 = 0xfc
    char log_str[84];	// 256 = 0x100
    unsigned int unique_id;	// 340 = 0x154
    unsigned short extended_dns_error_code;	// 344 = 0x158
    unsigned int is_custom_resolver:1;	// 346 = 0x15a
    unsigned int used_local_cache:1;	// 346 = 0x15a
    unsigned int ipv4_used_resolver_cache:1;	// 346 = 0x15a
    unsigned int ipv6_used_resolver_cache:1;	// 346 = 0x15a
    unsigned int local_only:1;	// 346 = 0x15a
    unsigned int suppress_logging:1;	// 346 = 0x15a
    unsigned int has_ipv4:1;	// 346 = 0x15a
    unsigned int has_ipv6:1;	// 346 = 0x15a
    unsigned int svcb_requested:1;	// 347 = 0x15b
    unsigned int svcb_received:1;	// 347 = 0x15b
    unsigned int svcb_dohuri:1;	// 347 = 0x15b
    unsigned int is_standalone:1;	// 347 = 0x15b
    unsigned int has_oblivious_config:1;	// 347 = 0x15b
    unsigned int config_allows_failover:1;	// 347 = 0x15b
    unsigned int oblivious_config_fell_back:1;	// 347 = 0x15b
    unsigned int has_completed_preferred_weighting:1;	// 347 = 0x15b
}

- (void).cxx_destruct;	// IMP=0x0000000000130cb0
- (id)redactedDescription;	// IMP=0x0000000000130c90
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000001301f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

