//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/EARSyncPSRAudioProcessorDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNSpeechEmotionEstimator : NSObject <EARSyncPSRAudioProcessorDelegate>
{
    shared_ptr_f6ac7592 _graph;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000000c87f5
- (void).cxx_destruct;	// IMP=0x00000000000c87e7
@property(readonly, nonatomic) void *resultsBox;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c827d
- (id)sharedProcessorConfiguration;	// IMP=0x00000000000c8275
- (id)resultsFromBox:(void *)arg1 renderedWithFrameCount:(int)arg2;	// IMP=0x00000000000c7ead
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
