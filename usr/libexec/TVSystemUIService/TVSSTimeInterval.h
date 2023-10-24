//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TVSSTimeInterval : NSObject
{
    long long _state;	// 8 = 0x8
    double _beginTime;	// 16 = 0x10
    double _endTime;	// 24 = 0x18
    NSMutableDictionary *_tokenToTransitionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000195f0
@property(retain, nonatomic) NSMutableDictionary *tokenToTransitionHandler; // @synthesize tokenToTransitionHandler=_tokenToTransitionHandler;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)_notifyStateTransitionHandlersOfTransitionFromState:(long long)arg1;	// IMP=0x00100000000192c0
- (void)reset;	// IMP=0x0010000000019250
- (void)endIntervalWithTimeOverride:(double)arg1;	// IMP=0x00100000000191a0
- (void)endInterval;	// IMP=0x0010000000019160
- (void)beginIntervalWithTimeOverride:(double)arg1;	// IMP=0x0010000000019090
- (void)beginInterval;	// IMP=0x0010000000019050
- (void)removeStateTransitionHandler:(id)arg1;	// IMP=0x0010000000018f40
- (id)addStateTransitionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000018d90
@property(readonly, nonatomic) double duration;
- (id)init;	// IMP=0x0010000000018b00

@end
