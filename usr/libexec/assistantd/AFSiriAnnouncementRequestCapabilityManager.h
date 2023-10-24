//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol AFAnnouncementRequestCapabilityProviding, OS_dispatch_queue;

@interface AFSiriAnnouncementRequestCapabilityManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    id <AFAnnouncementRequestCapabilityProviding> _capabilityProvider;	// 24 = 0x18
    long long _platform;	// 32 = 0x20
}

+ (_Bool)_supportsAnnouncementType:(long long)arg1 forSupportedIntents:(id)arg2 forBundleId:(id)arg3 onPlatform:(long long)arg4;	// IMP=0x00200000002aadcd
+ (id)_requiredPlatformsForNotificationAnnouncementType:(long long)arg1;	// IMP=0x00100000002aad7b
+ (id)_requiredBundleIDsForNotificationAnnouncementType:(long long)arg1;	// IMP=0x00100000002aad45
+ (long long)notificationAnnouncementTypeForNotificationFromApp:(id)arg1 withIntentIDs:(id)arg2 notificationContent:(id)arg3 onPlatform:(long long)arg4;	// IMP=0x00100000002aabb8
+ (id)_candidateAnnounceNotificationTypesFromApp:(id)arg1 withIntentIDs:(id)arg2 notificationContentType:(id)arg3 onPlatform:(long long)arg4;	// IMP=0x00100000002aa643
+ (id)supportedAnnouncementTypesForBundleId:(id)arg1 onPlatform:(long long)arg2;	// IMP=0x00100000002aa238
+ (Class)_classForPlatform:(long long)arg1;	// IMP=0x00100000002aa0e6
- (void).cxx_destruct;	// IMP=0x00200000002a9ccf
- (void)provider:(id)arg1 availableAnnouncementRequestTypesChanged:(unsigned long long)arg2;	// IMP=0x00100000002a9b7e
- (void)provider:(id)arg1 eligibleAnnouncementRequestTypesChanged:(unsigned long long)arg2;	// IMP=0x00100000002a9a2d
- (void)removeObserver:(id)arg1;	// IMP=0x00100000002a996e
- (void)addObserver:(id)arg1;	// IMP=0x00100000002a98af
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a9892
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a9875
- (id)initWithPlatform:(long long)arg1;	// IMP=0x00100000002a977e

@end

