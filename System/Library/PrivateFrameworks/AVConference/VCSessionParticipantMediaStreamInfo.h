//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, VCMediaStream;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantMediaStreamInfo : NSObject
{
    VCMediaStream *_stream;	// 8 = 0x8
    NSMutableArray *_streamConfigs;	// 16 = 0x10
    _Bool _isOneToOneSupported;	// 24 = 0x18
}

@property(readonly, nonatomic) _Bool isOneToOneSupported; // @synthesize isOneToOneSupported=_isOneToOneSupported;
@property(readonly, nonatomic) NSArray *streamConfigs; // @synthesize streamConfigs=_streamConfigs;
@property(retain, nonatomic) VCMediaStream *stream; // @synthesize stream=_stream;
- (void)addStreamConfig:(id)arg1;	// IMP=0x000000000040ab6b
- (void)dealloc;	// IMP=0x000000000040aafe
- (id)init;	// IMP=0x000000000040aa8f

@end

