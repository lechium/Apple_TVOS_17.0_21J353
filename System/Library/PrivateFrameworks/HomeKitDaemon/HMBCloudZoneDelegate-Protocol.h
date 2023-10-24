//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBCloudZone, HMBCloudZoneRebuilderStatus, HMBProcessingOptions, NSArray, NSUUID;

@protocol HMBCloudZoneDelegate <NSObject>

@optional
- (void)cloudZone:(HMBCloudZone *)arg1 didChangeRebuildStatus:(HMBCloudZoneRebuilderStatus *)arg2;
- (void)cloudZone:(HMBCloudZone *)arg1 didRemoveParticipantWithClientIdentifier:(NSUUID *)arg2;
- (void)cloudZone:(HMBCloudZone *)arg1 didUpdateParticipantWithClientIdentifier:(NSUUID *)arg2;
- (_Bool)cloudZone:(HMBCloudZone *)arg1 didEncounterConflicts:(NSArray *)arg2 options:(HMBProcessingOptions *)arg3;
@end

