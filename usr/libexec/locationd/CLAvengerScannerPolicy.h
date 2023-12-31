//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CLAvengerScannerPolicyDelegate;

@interface CLAvengerScannerPolicy : NSObject
{
    id <CLAvengerScannerPolicyDelegate> _delegate;	// 8 = 0x8
    struct CLAvengerScannerPolicyContext _currentContext;	// 16 = 0x10
    long long _currentScanType;	// 88 = 0x58
}

+ (id)convertCLAvengerScannerPolicyScanTypeToString:(long long)arg1;	// IMP=0x00400000001f9db0
- (id).cxx_construct;	// IMP=0x00200000001f9dde
@property(readonly, nonatomic) long long currentScanType; // @synthesize currentScanType=_currentScanType;
@property(readonly, nonatomic) struct CLAvengerScannerScanParameters currentScanParameters;
@property(nonatomic) unsigned long long totalAdvertisementBuffersAvailable;
@property(readonly, nonatomic) _Bool downgradedDuringCoexFriendlyAggressiveDiscoveryScan;
@property(nonatomic) _Bool bluetoothAudioActive;
@property(nonatomic) _Bool wifi2GHzCriticalState;
@property(nonatomic) _Bool associatedTo2GHzWiFi;
@property(nonatomic) _Bool optedIn;
- (_Bool)hasActiveBTFindingScan;	// IMP=0x00100000001f9a85
- (void)stopHawkeyeLowEnergyScan;	// IMP=0x00100000001f99be
- (void)startHawkeyeLowEnergyScan;	// IMP=0x00100000001f98c0
- (void)stopWatchAdvertisementBufferScan;	// IMP=0x00100000001f9843
- (void)startWatchAdvertisementBufferScan;	// IMP=0x00100000001f97c5
- (void)stopBTFindingScan;	// IMP=0x00100000001f96fe
- (void)startBTFindingScan;	// IMP=0x00100000001f9600
- (_Bool)hasActiveAggressiveScan;	// IMP=0x00100000001f95e9
- (void)stopCoexFriendlyAggressiveScan;	// IMP=0x00100000001f94de
- (void)startCoexFriendlyAggressiveScan;	// IMP=0x00100000001f93eb
- (void)stopAggressiveScan;	// IMP=0x00100000001f92f0
- (void)startAggressiveScan;	// IMP=0x00100000001f91f5
- (void)updateContext:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x00100000001f9143
- (long long)resolveNewScanTypeWithNewContext:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x00100000001f8dec
- (long long)desiredHawkeyeLowEnergyScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x00100000001f8dd6
- (long long)desiredWatchAdvertisementBufferScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x00100000001f8db1
- (long long)desiredBTFindingDiscoveryScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x00100000001f8d7e
- (long long)desiredCoexFriendlyAggressiveDiscoveryScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x00100000001f8c97
- (long long)desiredAggressiveDiscoveryScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x00100000001f8c81
- (long long)desiredDefaultScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x00100000001f8c31
- (id)initWithDelegate:(id)arg1 platformType:(long long)arg2 supportsPerTypeDuplicateFilter:(_Bool)arg3;	// IMP=0x00100000001f8b94

@end

