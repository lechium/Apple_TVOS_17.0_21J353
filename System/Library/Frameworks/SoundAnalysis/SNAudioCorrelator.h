//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFile, NSString, SNSystemConfiguration;

__attribute__((visibility("hidden")))
@interface SNAudioCorrelator : NSObject
{
    SNSystemConfiguration *_systemConfiguration;	// 8 = 0x8
    shared_ptr_f6ac7592 _graph;	// 16 = 0x10
    AVAudioFile *_referenceAudioFile;	// 32 = 0x20
    double _referenceSampleRate;	// 40 = 0x28
    unsigned int _channelCount;	// 48 = 0x30
    unsigned int _framesProcessed;	// 52 = 0x34
    double _overlapFactor;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x00000000000bd2a9
- (void).cxx_destruct;	// IMP=0x00000000000bd278
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bc7ac
- (id)resultsFromBox:(void *)arg1 renderedWithFrameCount:(int)arg2;	// IMP=0x00000000000bc32d
- (id)sharedProcessorConfiguration;	// IMP=0x00000000000bc325
@property(readonly, nonatomic) void *resultsBox;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

