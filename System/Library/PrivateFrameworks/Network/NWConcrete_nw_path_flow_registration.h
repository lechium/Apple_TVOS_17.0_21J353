//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NWConcrete_nw_path_evaluator;
@protocol OS_nw_array;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_path_flow_registration : NSObject
{
    NWConcrete_nw_path_evaluator *parent_evaluator;	// 8 = 0x8
    NSObject<OS_nw_array> *subflow_registrations;	// 16 = 0x10
    NSObject<OS_nw_array> *override_extra_interface_options;	// 24 = 0x18
    unsigned char registration_id[16];	// 32 = 0x20
    unsigned char nexus_agent[16];	// 48 = 0x30
    struct necp_all_stats *flow_stats_area;	// 64 = 0x40
    struct ifnet_stats_per_flow *flow_interface_stats;	// 72 = 0x48
    const struct sk_nexusadv *advisory;	// 80 = 0x50
    struct nw_protocol_identifier *upper_transport_stats_protocol;	// 88 = 0x58
    struct nw_protocol_identifier *transport_stats_protocol;	// 96 = 0x60
    struct nw_protocol_identifier *internet_stats_protocol;	// 104 = 0x68
    void *upper_transport_stats_region;	// 112 = 0x70
    void *transport_stats_region;	// 120 = 0x78
    void *internet_stats_region;	// 128 = 0x80
    unsigned int override_traffic_class;	// 136 = 0x88
    unsigned int registered:1;	// 140 = 0x8c
    unsigned int partial_checksum_offload:1;	// 140 = 0x8c
    unsigned int uses_nexus:1;	// 140 = 0x8c
    unsigned int override_is_expensive:1;	// 140 = 0x8c
    unsigned int override_is_constrained:1;	// 140 = 0x8c
    unsigned int override_uses_wifi:1;	// 140 = 0x8c
    unsigned int override_uses_cellular:1;	// 140 = 0x8c
    unsigned int override_reason:1;	// 140 = 0x8c
    unsigned int specific_use_only:1;	// 141 = 0x8d
}

- (void).cxx_destruct;	// IMP=0x0000000000722120
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000722030
- (id)init;	// IMP=0x0000000000721e00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

