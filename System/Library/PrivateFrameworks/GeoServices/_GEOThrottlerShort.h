//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOThrottlerShort : NSObject
{
    NSString *_keyPath;	// 8 = 0x8
    struct vector<(anonymous namespace)::Timestamp, std::allocator<(anonymous namespace)::Timestamp>> _lastRequestTimes;	// 16 = 0x10
    unsigned int _currentIndex;	// 40 = 0x28
    double _timeWindow;	// 48 = 0x30
}

+ (_Bool)stateIsExpired:(id)arg1;	// IMP=0x0010000000d3b64d
- (id).cxx_construct;	// IMP=0x0000000000d3b699
- (void).cxx_destruct;	// IMP=0x0000000000d3b66a
@property(readonly, nonatomic) double timeWindow; // @synthesize timeWindow=_timeWindow;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)captureState;	// IMP=0x0000000000d3b645
@property(readonly, copy) NSString *description;
- (_Bool)isExpired;	// IMP=0x0000000000d3b368
- (id)userInfoForError;	// IMP=0x0000000000d3b1be
- (unsigned int)maxReqCount;	// IMP=0x0000000000d3b1ac
- (double)timeUntilReset;	// IMP=0x0000000000d3b12d
- (unsigned long long)remainingEntries;	// IMP=0x0000000000d3b099
- (_Bool)addRequestTimestamp;	// IMP=0x0000000000d3b007
- (id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(id)arg4;	// IMP=0x0000000000d3adae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
