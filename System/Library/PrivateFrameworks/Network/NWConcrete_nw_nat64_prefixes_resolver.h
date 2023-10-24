//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_context, OS_nw_parameters, OS_nw_path_evaluator;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_nat64_prefixes_resolver : NSObject
{
    struct os_unfair_lock_s lock;	// 8 = 0x8
    unsigned int ifindex;	// 12 = 0xc
    NSObject<OS_nw_parameters> *parameters;	// 16 = 0x10
    NSObject<OS_nw_context> *context;	// 24 = 0x18
    NWConcrete_nw_nat64_prefixes_resolver *internally_retained_object;	// 32 = 0x20
    unsigned int dns_service_id;	// 40 = 0x28
    struct _DNSServiceRef_t *dns_service;	// 48 = 0x30
    int dns_error;	// 56 = 0x38
    CDUnknownBlockType update_handler;	// 64 = 0x40
    CDUnknownBlockType cancel_handler;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *client_queue;	// 80 = 0x50
    struct in6_addr *ipv6_addrs;	// 88 = 0x58
    NSObject<OS_nw_path_evaluator> *evaluator;	// 96 = 0x60
    int address_count;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000604a80
- (void)dealloc;	// IMP=0x00000000006045c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

