//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSObject, NSString;
@protocol OS_dispatch_source;

@interface CMHealthColdStorageCompanionSyncService : CLIntersiloService
{
    struct shared_ptr<CLHRRecoveryInputHRRecorderDb> fInputHRDb;	// 8 = 0x8
    struct unique_ptr<CLActivityAggregator<HRRecoveryInputHR>, std::default_delete<CLActivityAggregator<HRRecoveryInputHR>>> fInputHRAggregator;	// 24 = 0x18
    struct shared_ptr<CLHRRecoveryInputWRRecorderDb> fInputWRDb;	// 32 = 0x20
    struct unique_ptr<CLActivityAggregator<HRRecoveryInputWR>, std::default_delete<CLActivityAggregator<HRRecoveryInputWR>>> fInputWRAggregator;	// 48 = 0x30
    struct shared_ptr<CLHRRecoverySessionRecorderDb> fSessionDb;	// 56 = 0x38
    struct unique_ptr<CLActivityAggregator<HRRecoverySession>, std::default_delete<CLActivityAggregator<HRRecoverySession>>> fSessionAggregator;	// 72 = 0x48
    NSObject<OS_dispatch_source> *fAggregationTimer;	// 80 = 0x50
}

+ (_Bool)isSupported;	// IMP=0x0020000000501a6f
+ (id)getSilo;	// IMP=0x00100000005019d6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000005019bd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000501960
- (id).cxx_construct;	// IMP=0x0020000000503347
- (void).cxx_destruct;	// IMP=0x00100000005032d8
- (void)receiveColdStorageDataUpdate:(id)arg1;	// IMP=0x00100000005025fd
- (void)setUpAggregationOnTimer;	// IMP=0x00100000005022ae
- (void)endService;	// IMP=0x0010000000502100
- (void)beginService;	// IMP=0x0010000000501ab5
- (id)init;	// IMP=0x0010000000501a32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

