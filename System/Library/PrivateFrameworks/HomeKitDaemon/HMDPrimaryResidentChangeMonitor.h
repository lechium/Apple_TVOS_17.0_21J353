//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSNotificationCenter, NSString, NSUUID;
@protocol HMDPrimaryResidentChangeMonitorDataSource;

__attribute__((visibility("hidden")))
@interface HMDPrimaryResidentChangeMonitor : HMFObject
{
    _Bool _isCurrentDevicePrimaryResident;	// 8 = 0x8
    _Bool _hasResidentDevices;	// 9 = 0x9
    id <HMDPrimaryResidentChangeMonitorDataSource> _dataSource;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    NSUUID *_confirmedPrimaryResidentDeviceIdentifier;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000004d2182
- (void).cxx_destruct;	// IMP=0x00000000004d2131
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(copy) NSUUID *confirmedPrimaryResidentDeviceIdentifier; // @synthesize confirmedPrimaryResidentDeviceIdentifier=_confirmedPrimaryResidentDeviceIdentifier;
@property _Bool hasResidentDevices; // @synthesize hasResidentDevices=_hasResidentDevices;
@property _Bool isCurrentDevicePrimaryResident; // @synthesize isCurrentDevicePrimaryResident=_isCurrentDevicePrimaryResident;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDPrimaryResidentChangeMonitorDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x00000000004d201d
- (void)notifyChangeToHasResidentDevices;	// IMP=0x00000000004d1fca
- (void)notifyChangeToConfirmedPrimaryResidentDeviceIdentifier;	// IMP=0x00000000004d1f77
- (void)notifyChangeToIsCurrentPrimaryResident;	// IMP=0x00000000004d1f24
- (_Bool)dataSourceHasResidentDevices;	// IMP=0x00000000004d1e0c
- (id)confirmedPrimaryResidentDevice;	// IMP=0x00000000004d1ce8
- (void)handlePrimaryResidentChangedNotification:(id)arg1;	// IMP=0x00000000004d1cd6
- (void)refreshHasResidentDevices;	// IMP=0x00000000004d1b7b
- (void)refreshConfirmedPrimaryResidentDeviceIdentifierWithDevice:(id)arg1;	// IMP=0x00000000004d19ed
- (void)refreshCurrentDevicePrimaryResidentWithDevice:(id)arg1;	// IMP=0x00000000004d1847
- (void)refreshMonitor;	// IMP=0x00000000004d17de
- (void)registerForNotificationsWithHome:(id)arg1;	// IMP=0x00000000004d16c0
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000004d1692
- (id)initWithIdentifier:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x00000000004d15ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

