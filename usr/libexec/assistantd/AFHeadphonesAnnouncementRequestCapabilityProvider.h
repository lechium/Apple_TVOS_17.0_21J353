//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFNotifyObserver, AFSettingsConnection, AFSiriAudioRoute, NSHashTable, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AFHeadphonesAnnouncementRequestCapabilityProvider : NSObject
{
    _Bool _localVoiceAssetAvailable;	// 8 = 0x8
    AFSettingsConnection *_settingsConnection;	// 16 = 0x10
    AFNotifyObserver *_pairedInfoChangeObserver;	// 24 = 0x18
    AFNotifyObserver *_forcedUpdateObserver;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_group;	// 48 = 0x30
    unsigned long long _lastKnownAvailableAnnouncementRequests;	// 56 = 0x38
    unsigned long long _lastKnownEligibleAnnouncementRequests;	// 64 = 0x40
    NSHashTable *_delegates;	// 72 = 0x48
    AFSiriAudioRoute *_currentAnnouncementRoute;	// 80 = 0x50
}

+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;	// IMP=0x00200000000bc8d8
+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;	// IMP=0x00100000000bc4c1
+ (long long)platform;	// IMP=0x00100000000bc4b6
+ (id)provider;	// IMP=0x00100000000bc453
- (void).cxx_destruct;	// IMP=0x00200000000bb3d1
@property(retain, nonatomic) AFSiriAudioRoute *currentAnnouncementRoute; // @synthesize currentAnnouncementRoute=_currentAnnouncementRoute;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bb333
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bb0e4
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;	// IMP=0x00100000000bb0da
- (void)addDelegate:(id)arg1;	// IMP=0x00100000000bb04d
- (void)_settingsConnectionDidDisconnect;	// IMP=0x00100000000bb002
- (id)_settingsConnection;	// IMP=0x00100000000baf93
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;	// IMP=0x00100000000bae86
- (void)privateAudioSessionStateDidChange:(unsigned long long)arg1;	// IMP=0x00100000000bad5b
- (void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bac2a
- (id)_headphonesMonitor;	// IMP=0x00100000000bac11
- (void)_notifyObserversOfEligibleAnnouncementRequestTypes:(unsigned long long)arg1;	// IMP=0x00100000000baa47
- (void)_fetchEligibleAnnouncementRequestTypesAndNotifyObservers;	// IMP=0x00100000000ba96d
- (void)fetchEligibleAnnouncementRequestTypesAndNotifyObservers:(id)arg1;	// IMP=0x00100000000ba87e
- (void)notifyObserversOfAvailableAnnouncementRequestTypes;	// IMP=0x00100000000ba832
- (void)_updateAudioRouteAvailabilityAndBroadcast:(_Bool)arg1;	// IMP=0x00100000000ba82c
- (id)_getCurrentAnnouncementRoute;	// IMP=0x00100000000ba824
- (id)currentlyRoutedHeadphonesBTAddress;	// IMP=0x00100000000ba7b2
- (id)currentlyRoutedHeadphonesProductID;	// IMP=0x00100000000ba740
- (void)fetchLocalVoiceAssetAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ba5df
- (void)_fetchInitialState;	// IMP=0x00100000000ba580
- (id)_init;	// IMP=0x00100000000ba187

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
