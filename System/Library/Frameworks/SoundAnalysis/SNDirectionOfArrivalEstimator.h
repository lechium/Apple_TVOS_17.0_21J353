//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNDirectionOfArrivalEstimator : NSObject
{
    shared_ptr_f6ac7592 _graph;	// 8 = 0x8
    NSString *_tuningPrefix;	// 24 = 0x18
    float _azimuth;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000000ace96
- (void).cxx_destruct;	// IMP=0x00000000000ace70
@property(readonly, nonatomic) void *resultsBox;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000acac8
- (id)sharedProcessorConfiguration;	// IMP=0x00000000000acac0
- (id)resultsFromBox:(void *)arg1 renderedWithFrameCount:(int)arg2;	// IMP=0x00000000000ac771
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (id)initWithTuningPrefix:(id)arg1;	// IMP=0x00000000000ac6d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

