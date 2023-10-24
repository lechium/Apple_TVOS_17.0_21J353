//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriterFigAssetWriterNotificationHandler, NSString;

__attribute__((visibility("hidden")))
@interface AVFigAssetWriterFinishWritingAsyncOperation
{
    struct OpaqueFigAssetWriter *_figAssetWriter;	// 32 = 0x20
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;	// 40 = 0x28
}

- (void)didReceiveFigAssetWriterNotificationWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000000a0470
- (void)didEnterTerminalState;	// IMP=0x00000000000a0411
- (void)cancel;	// IMP=0x00000000000a03d0
- (void)start;	// IMP=0x00000000000a0319
- (_Bool)isAsynchronous;	// IMP=0x00000000000a0311
- (void)dealloc;	// IMP=0x00000000000a02ba
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;	// IMP=0x00000000000a01b7
- (id)init;	// IMP=0x00000000000a0151

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

