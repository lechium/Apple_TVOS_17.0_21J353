//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioFileReader, NSData, NSError;

@protocol CSAudioFileReaderDelegate <NSObject>
- (void)audioFileReaderDidStopRecording:(CSAudioFileReader *)arg1 forReason:(long long)arg2;
- (void)audioFileReaderDidStartRecording:(CSAudioFileReader *)arg1 successfully:(_Bool)arg2 error:(NSError *)arg3;
- (void)audioFileReaderBufferAvailable:(CSAudioFileReader *)arg1 buffer:(NSData *)arg2 atTime:(unsigned long long)arg3;
@end

