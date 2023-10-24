//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

__attribute__((visibility("hidden")))
@interface AVAssetWriterFailedTerminalHelper
{
    NSError *_terminalError;	// 24 = 0x18
}

- (_Bool)_isDefunct;	// IMP=0x00000000000a06e4
- (void)flushSegment;	// IMP=0x00000000000a06de
- (void)flush;	// IMP=0x00000000000a06d8
- (void)setFinishWritingDelegate:(id)arg1;	// IMP=0x00000000000a06d2
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a06c7
- (void)finishWriting;	// IMP=0x00000000000a06c1
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000a06bb
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000a06b5
- (id)error;	// IMP=0x00000000000a06a4
- (long long)status;	// IMP=0x00000000000a0699
- (void)dealloc;	// IMP=0x00000000000a0657
- (id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2;	// IMP=0x00000000000a056a
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x00000000000a04fd

@end

