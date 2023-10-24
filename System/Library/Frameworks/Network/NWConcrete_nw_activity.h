//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Network/OS_nw_activity-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_activity : NSObject <OS_nw_activity>
{
    unsigned char token[16];	// 8 = 0x8
    unsigned long long investigation_identifier;	// 24 = 0x18
    unsigned long long start_time;	// 32 = 0x20
    unsigned long long end_time;	// 40 = 0x28
    unsigned int fragments_quenched;	// 48 = 0x30
    struct retained_ptr<NWConcrete_nw_activity *> parent;	// 56 = 0x38
    struct unfair_mutex lock;	// 64 = 0x40
    struct description_cache description_cache;	// 72 = 0x48
    unsigned int label;	// 88 = 0x58
    unsigned int domain;	// 92 = 0x5c
    unsigned int client_metric_count;	// 96 = 0x60
    int underlying_error_domain;	// 100 = 0x64
    int underlying_error_code;	// 104 = 0x68
    int reporting_strategy;	// 108 = 0x6c
    int completion_reason;	// 112 = 0x70
    unsigned int is_retry:1;	// 116 = 0x74
    unsigned int is_lightweight:1;	// 116 = 0x74
    unsigned int activated:1;	// 116 = 0x74
    unsigned int completed:1;	// 116 = 0x74
}

- (id).cxx_construct;	// IMP=0x0000000000654200
- (void).cxx_destruct;	// IMP=0x00000000006541a0
- (id)redactedDescription;	// IMP=0x0000000000654180
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000654020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

