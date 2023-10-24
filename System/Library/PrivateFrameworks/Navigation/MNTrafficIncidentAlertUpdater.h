//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNLocation, MNTrafficIncidentAlert, NSDate, NSMutableSet, NSString;
@protocol MNTrafficIncidentAlertUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNTrafficIncidentAlertUpdater : NSObject
{
    id <MNTrafficIncidentAlertUpdaterDelegate> _delegate;	// 8 = 0x8
    MNLocation *_lastLocation;	// 16 = 0x10
    NSMutableSet *_pendingAlerts;	// 24 = 0x18
    MNTrafficIncidentAlert *_activeAlert;	// 32 = 0x20
    NSDate *_activeAlertDisplayedTime;	// 40 = 0x28
    NSDate *_nextAlertDisplayTime;	// 48 = 0x30
    int _trafficIncidentStatus;	// 56 = 0x38
    NSString *_previousBannerID;	// 64 = 0x40
    NSMutableSet *_displayedBannerIds;	// 72 = 0x48
    _Bool _useTriggerPointRangeBannerQueuing;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000006b01d
@property(nonatomic) _Bool useTriggerPointRangeBannerQueuing; // @synthesize useTriggerPointRangeBannerQueuing=_useTriggerPointRangeBannerQueuing;
@property(nonatomic) __weak id <MNTrafficIncidentAlertUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateAlertDistanceAndETAForLocation:(id)arg1;	// IMP=0x000000000006af88
- (void)_updateActiveAlertForLocation:(id)arg1;	// IMP=0x000000000006aa79
- (void)_removeActiveAlert;	// IMP=0x000000000006a9d4
- (void)_updateRerouteProposalStatusForRequest:(id)arg1;	// IMP=0x000000000006a99c
- (void)_updatePreviousDisplayedBannerForRequest:(id)arg1;	// IMP=0x000000000006a8a9
- (void)_activateAlert:(id)arg1 forLocation:(id)arg2;	// IMP=0x0000000000069e2f
- (void)_updateForLocationUsingDistancePoints:(id)arg1;	// IMP=0x0000000000069a31
- (void)_updateForAlertsFromResponseUsingDistancePoints:(id)arg1;	// IMP=0x00000000000696fe
- (id)_nextAlert;	// IMP=0x00000000000682e4
- (void)clearAlerts;	// IMP=0x00000000000682b5
- (void)updateForAlertsFromResponse:(id)arg1;	// IMP=0x0000000000067d85
- (void)updateIncidentResultForRerouteRequest:(id)arg1;	// IMP=0x0000000000067d05
- (void)updateIncidentResultForETARequest:(id)arg1;	// IMP=0x0000000000067cb0
- (void)updateForReroute:(id)arg1;	// IMP=0x0000000000067bc8
- (void)updateForLocation:(id)arg1;	// IMP=0x00000000000675ca
@property(retain, nonatomic) MNTrafficIncidentAlert *activeAlert;
- (void)dealloc;	// IMP=0x0000000000067486
- (id)init;	// IMP=0x00000000000673d8

@end

