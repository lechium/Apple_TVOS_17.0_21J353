//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VideoConversionHangDetector;

@interface VideoTranscodingTask
{
    VideoConversionHangDetector *_hangDetector;	// 144 = 0x90
}

+ (_Bool)shouldMaximizeVideoConversionPowerEfficiencyForOptions:(id)arg1 inputAssetDuration:(double)arg2 taskIdentifier:(id)arg3;	// IMP=0x004000000001654f
+ (id)metadataItemsByApplyingSignatureMetadataFromOptions:(id)arg1 toMetadataItems:(id)arg2;	// IMP=0x00100000000163bc
+ (id)signatureOptionToIdentifierMapping;	// IMP=0x001000000001638c
- (void).cxx_destruct;	// IMP=0x0020000000016363
@property(retain) VideoConversionHangDetector *hangDetector; // @synthesize hangDetector=_hangDetector;
- (id)outputAssetInformationWithError:(id *)arg1;	// IMP=0x0010000000015bfc
- (void)cancelProgressUpdateTimerAndMarkEndTime;	// IMP=0x0010000000015ae3
- (void)startProgressUpdateTimerAndMarkStartTime;	// IMP=0x001000000001579b
- (void)callCompletionHandler;	// IMP=0x001000000001575a
- (_Bool)hasSlowMotionAdjustments;	// IMP=0x00100000000156e1
- (void)transitionToRunningStateAndConditionallyRunBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015648
- (void)cancelTranscode;	// IMP=0x00100000000155e8
- (double)currentFractionCompleted;	// IMP=0x001000000001557f
- (_Bool)hasProgress;	// IMP=0x001000000001551c
- (void)performExport;	// IMP=0x00100000000154bc
- (void)cancel;	// IMP=0x001000000001530b
- (_Bool)didDetectHang;	// IMP=0x00100000000152c7
- (void)determineAndNotifyProgress;	// IMP=0x00100000000151ef
- (void)performConversion;	// IMP=0x00100000000150e2

@end

