//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDCameraSnapshotData, HMDCameraStreamSnapshotCapture;

@protocol HMDCameraStreamSnapshotCaptureDelegate <NSObject>
- (void)streamSnapshotCapture:(HMDCameraStreamSnapshotCapture *)arg1 didGetLastSnapshot:(HMDCameraSnapshotData *)arg2;
- (void)streamSnapshotCapture:(HMDCameraStreamSnapshotCapture *)arg1 didGetNewSnapshot:(HMDCameraSnapshotData *)arg2;
@end

