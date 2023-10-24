//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCPSoundDetector : NSObject
{
    NSMutableArray *_results;	// 8 = 0x8
    CDStruct_1b6d18a9 _activeStart;	// 16 = 0x10
    CDStruct_1b6d18a9 _activeEnd;	// 40 = 0x28
    int _length;	// 64 = 0x40
    float _sampleRate;	// 68 = 0x44
    CDStruct_1b6d18a9 _trackStart;	// 72 = 0x48
    float _activeConfidence;	// 96 = 0x60
    float _threshold;	// 100 = 0x64
    int _minDetections;	// 104 = 0x68
    NSString *_resultsKey;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000001d551b
- (id)results;	// IMP=0x00000000001d54ab
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;	// IMP=0x00000000001d544d
- (void)request:(id)arg1 didProduceResult:(id)arg2;	// IMP=0x00000000001d5239
- (void)addDetectionFromTime:(const CDStruct_1b6d18a9 *)arg1 toTime:(const CDStruct_1b6d18a9 *)arg2 confidence:(float)arg3;	// IMP=0x00000000001d4f42
- (id)initWithTrackStart:(CDStruct_1b6d18a9)arg1 threshold:(float)arg2 resultsKey:(id)arg3;	// IMP=0x00000000001d4dfa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

