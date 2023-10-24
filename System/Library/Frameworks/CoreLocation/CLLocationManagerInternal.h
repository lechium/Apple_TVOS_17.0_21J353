//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocationManager, CLLocationManagerStateTracker, CLSilo, CLTimer, NSData, NSMutableSet, NSString;
@protocol CLLocationManagerDelegate;

@interface CLLocationManagerInternal : NSObject
{
    struct __CLClient *fClient;	// 8 = 0x8
    id <CLLocationManagerDelegate> fDelegate;	// 16 = 0x10
    CLLocationManager *fManager;	// 24 = 0x18
    CLLocationManagerStateTracker *fState;	// 32 = 0x20
    CDStruct_2fb123db fLocation;	// 40 = 0x28
    NSString *fLocationEventType;	// 216 = 0xd8
    CLTimer *fLocationRequestTimer;	// 224 = 0xe0
    double fLocationRequestTimeout;	// 232 = 0xe8
    CLTimer *fRangingRequestTimer;	// 240 = 0xf0
    double fLastRangingRequestTimeout;	// 248 = 0xf8
    unsigned long long fLastRangingRequestMachTime;	// 256 = 0x100
    int fHeadingOrientation;	// 264 = 0x108
    NSMutableSet *fRangedRegions;	// 272 = 0x110
    NSMutableSet *fRangedConstraints;	// 280 = 0x118
    CDUnknownBlockType fPlaceInferenceHandler;	// 288 = 0x120
    unsigned long long fFidelityPolicy;	// 296 = 0x128
    CLTimer *fPlaceInferenceTimer;	// 304 = 0x130
    _Bool fIsMasquerading;	// 312 = 0x138
    NSMutableSet *fIdentifiableClients;	// 320 = 0x140
    CLSilo *fSilo;	// 328 = 0x148
    NSString *_clientKeyForIdentityValidation;	// 336 = 0x150
    NSData *_monitorLedgerAccessKey;	// 344 = 0x158
}

- (void).cxx_destruct;	// IMP=0x0000000000013170
@property(retain) NSData *monitorLedgerAccessKey; // @synthesize monitorLedgerAccessKey=_monitorLedgerAccessKey;
@property(retain) NSString *clientKeyForIdentityValidation; // @synthesize clientKeyForIdentityValidation=_clientKeyForIdentityValidation;
@property(nonatomic) __weak CLLocationManager *manager; // @synthesize manager=fManager;
@property(nonatomic) __weak id <CLLocationManagerDelegate> delegate; // @synthesize delegate=fDelegate;
@property(readonly, nonatomic) NSMutableSet *rangedConstraints; // @synthesize rangedConstraints=fRangedConstraints;
@property(readonly, nonatomic) NSMutableSet *rangedRegions; // @synthesize rangedRegions=fRangedRegions;
- (void)dealloc;	// IMP=0x0000000000012f14
- (void)invalidate;	// IMP=0x0000000000012eff
- (void)performCourtesyPromptIfNeeded;	// IMP=0x0000000000012ec6
- (void)cancelLingeringRangingRequest;	// IMP=0x0000000000012e8f
- (_Bool)hasLingeringRangingRequest;	// IMP=0x0000000000012ccc
- (void)cancelRangingRequest;	// IMP=0x0000000000012c6b
- (void)cancelLocationRequest;	// IMP=0x0000000000012c28
- (void)stopUpdatingLocationAutoPaused;	// IMP=0x0000000000012be7
- (_Bool)showsBackgroundLocationIndicator;	// IMP=0x0000000000012bd1
- (void)setShowsBackgroundLocationIndicator:(_Bool)arg1;	// IMP=0x0000000000012ba5
- (_Bool)allowsBackgroundLocationUpdates;	// IMP=0x0000000000012b8f
- (void)setAllowsBackgroundLocationUpdates:(_Bool)arg1;	// IMP=0x0000000000012b63
- (int)PausesLocationUpdatesAutomatically;	// IMP=0x0000000000012b4d
- (void)setPausesLocationUpdatesAutomatically:(int)arg1;	// IMP=0x0000000000012b05
- (id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundlePath:(id)arg3 websiteIdentifier:(id)arg4 delegate:(id)arg5 silo:(id)arg6;	// IMP=0x000000000001284e

@end

