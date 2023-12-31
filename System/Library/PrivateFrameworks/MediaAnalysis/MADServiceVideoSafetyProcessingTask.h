//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MADServiceVideoAsset, MADVideoSafetyClassificationRequest, NSDictionary, NSError, NSObject, SCMLHandler, SCMLVideoAnalyzer;
@protocol VCPBlockBasedVideoProcessorProtocol;

__attribute__((visibility("hidden")))
@interface MADServiceVideoSafetyProcessingTask
{
    MADVideoSafetyClassificationRequest *_request;	// 8 = 0x8
    MADServiceVideoAsset *_asset;	// 16 = 0x10
    NSObject<VCPBlockBasedVideoProcessorProtocol> *_videoProcessor;	// 24 = 0x18
    SCMLHandler *_handler;	// 32 = 0x20
    SCMLVideoAnalyzer *_videoAnalyzer;	// 40 = 0x28
    NSError *_processError;	// 48 = 0x30
    _Bool _isSensitive;	// 56 = 0x38
    NSDictionary *_scoresForLabels;	// 64 = 0x40
    CDUnknownBlockType _progressHandler;	// 72 = 0x48
    CDUnknownBlockType _completionHandler;	// 80 = 0x50
    _Bool _enablePowerLog;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000007a18f
@property(nonatomic) _Bool enablePowerLog; // @synthesize enablePowerLog=_enablePowerLog;
- (_Bool)run:(id *)arg1;	// IMP=0x000000000007817d
- (id)finalizeSafetyResultsWithError:(id *)arg1;	// IMP=0x0000000000077e3b
- (_Bool)configureVideoProcessorWithError:(id *)arg1;	// IMP=0x00000000000772ce
- (void)_processFrameBuffer:(struct opaqueCMSampleBuffer *)arg1 stop:(_Bool *)arg2;	// IMP=0x0000000000076f70
- (id)initWithRequest:(id)arg1 forAsset:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000076d6b

@end

