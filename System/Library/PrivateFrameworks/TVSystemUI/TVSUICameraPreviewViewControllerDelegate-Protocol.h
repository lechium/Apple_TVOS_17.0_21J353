//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSUUID, TVSUICameraPreviewViewController;

@protocol TVSUICameraPreviewViewControllerDelegate
- (void)cameraPreviewControllerCompleted:(TVSUICameraPreviewViewController *)arg1;
- (void)cameraPreviewControllerCancelled:(TVSUICameraPreviewViewController *)arg1 error:(NSError *)arg2;

@optional
- (void)cameraPreviewController:(TVSUICameraPreviewViewController *)arg1 didConnectContinuityDeviceUUID:(NSUUID *)arg2;
@end

