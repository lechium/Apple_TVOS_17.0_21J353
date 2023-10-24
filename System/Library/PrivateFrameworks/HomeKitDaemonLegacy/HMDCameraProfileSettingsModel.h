//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class HMDBulletinBoardNotification, NSData, NSNumber, NSSet;

__attribute__((visibility("hidden")))
@interface HMDCameraProfileSettingsModel : HMBModel
{
    _Bool _cameraManuallyDisabled;	// 8 = 0x8
    unsigned long long _currentAccessMode;	// 16 = 0x10
}

+ (id)hmbProperties;	// IMP=0x006000000052715a
@property _Bool cameraManuallyDisabled; // @synthesize cameraManuallyDisabled=_cameraManuallyDisabled;
@property unsigned long long currentAccessMode; // @synthesize currentAccessMode=_currentAccessMode;
@property _Bool activityZonesIncludedForSignificantEventDetection;
@property(retain) NSSet *activityZones;
@property(readonly) HMDBulletinBoardNotification *smartBulletinBoardNotification;
@property(readonly) _Bool reachabilityEventNotificationEnabled;
@property(readonly) _Bool accessModeChangeNotificationEnabled;
@property _Bool recordingAudioEnabled;
@property _Bool periodicSnapshotsAllowed;
@property _Bool snapshotsAllowed;
@property _Bool nightVisionModeEnabled;
@property _Bool accessModeIndicatorEnabled;
@property unsigned long long recordingEventTriggers;
@property unsigned long long accessModeNotAtHome;
@property unsigned long long accessModeAtHome;
@property long long version;
@property(readonly) unsigned long long mostPrivateAccessMode;
@property(readonly) _Bool hasAnyNotificationFieldsSet;

// Remaining properties
@property(copy) NSNumber *accessModeAtHomeField; // @dynamic accessModeAtHomeField;
@property(copy) NSNumber *accessModeChangeNotificationEnabledField; // @dynamic accessModeChangeNotificationEnabledField;
@property(copy) NSNumber *accessModeIndicatorEnabledField; // @dynamic accessModeIndicatorEnabledField;
@property(copy) NSNumber *accessModeNotAtHomeField; // @dynamic accessModeNotAtHomeField;
@property(copy) NSData *activityZonesField; // @dynamic activityZonesField;
@property(copy) NSNumber *activityZonesIncludedForSignificantEventDetectionField; // @dynamic activityZonesIncludedForSignificantEventDetectionField;
@property(copy) NSNumber *nightVisionModeEnabledField; // @dynamic nightVisionModeEnabledField;
@property(copy) NSNumber *periodicSnapshotsAllowedField; // @dynamic periodicSnapshotsAllowedField;
@property(copy) NSNumber *reachabilityEventNotificationEnabledField; // @dynamic reachabilityEventNotificationEnabledField;
@property(copy) NSNumber *recordingAudioEnabledField; // @dynamic recordingAudioEnabledField;
@property(copy) NSNumber *recordingEventTriggersField; // @dynamic recordingEventTriggersField;
@property(copy) NSData *smartBulletinBoardNotificationDataField; // @dynamic smartBulletinBoardNotificationDataField;
@property(copy) NSNumber *snapshotsAllowedField; // @dynamic snapshotsAllowedField;
@property(copy) NSNumber *versionField; // @dynamic versionField;

@end

