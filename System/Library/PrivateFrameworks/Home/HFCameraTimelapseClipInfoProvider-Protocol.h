//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFCameraClipPosition, HMCameraClip, NSDate, NSURL;

@protocol HFCameraTimelapseClipInfoProvider
- (NSURL *)timelapseURLForTimelapseClip:(HMCameraClip *)arg1;
- (HFCameraClipPosition *)timelapseClipPositionForDate:(NSDate *)arg1 inHighQualityClip:(HMCameraClip *)arg2;
@end

