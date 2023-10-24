//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCQoSMonitorManager
{
    NSMutableArray *_monitors;	// 88 = 0x58
    NSMutableDictionary *_sources;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 104 = 0x68
    long long _reportingInterval;	// 112 = 0x70
    NSMutableArray *_moitors;	// 120 = 0x78
}

+ (id)sharedInstance;	// IMP=0x0060000000155ace
@property(readonly, nonatomic) NSMutableArray *moitors; // @synthesize moitors=_moitors;
- (_Bool)doesQoSSourceExistForStreamToken:(id)arg1;	// IMP=0x0000000000156b82
- (void)deregisterBlocksForService;	// IMP=0x0000000000156b00
- (void)registerBlocksForService;	// IMP=0x000000000015669c
- (void)updateEventDrivenQoSReport:(id)arg1 toClientsWithToken:(long long)arg2;	// IMP=0x00000000001563bd
- (void)updateQoSReport:(id)arg1 toClientsWithToken:(long long)arg2;	// IMP=0x00000000001560de
- (void)unregisterQoSReportingSourceForToken:(long long)arg1;	// IMP=0x0000000000155ecb
- (void)registerQoSReportingSourceForToken:(long long)arg1;	// IMP=0x0000000000155c8d
- (void)dealloc;	// IMP=0x0000000000155bf2
- (id)init;	// IMP=0x0000000000155b1d

@end

