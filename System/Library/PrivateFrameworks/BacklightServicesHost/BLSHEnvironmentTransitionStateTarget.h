//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSBacklightSceneVisualState, NSDate;

__attribute__((visibility("hidden")))
@interface BLSHEnvironmentTransitionStateTarget : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _lock_performedBacklightRamp;	// 12 = 0xc
    _Bool _didUpdateInitialState;	// 13 = 0xd
    _Bool _didCompleteAnimation;	// 14 = 0xe
    unsigned long long _sequenceID;	// 16 = 0x10
    BLSBacklightSceneVisualState *_visualState;	// 24 = 0x18
    NSDate *_presentationDate;	// 32 = 0x20
    long long _backlightState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000e4c7
@property _Bool didCompleteAnimation; // @synthesize didCompleteAnimation=_didCompleteAnimation;
@property _Bool didUpdateInitialState; // @synthesize didUpdateInitialState=_didUpdateInitialState;
@property long long backlightState; // @synthesize backlightState=_backlightState;
@property(readonly, nonatomic) NSDate *presentationDate; // @synthesize presentationDate=_presentationDate;
@property(readonly, nonatomic) BLSBacklightSceneVisualState *visualState; // @synthesize visualState=_visualState;
@property(readonly, nonatomic) unsigned long long sequenceID; // @synthesize sequenceID=_sequenceID;
- (_Bool)isEqualToVisualState:(id)arg1 presentationDate:(id)arg2;	// IMP=0x000000000000e416
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e1fe
- (unsigned long long)hash;	// IMP=0x000000000000e15e
- (id)debugDescription;	// IMP=0x000000000000dffd
- (id)description;	// IMP=0x000000000000ddef
- (_Bool)setAndTestDidPerformBacklightRamp;	// IMP=0x000000000000ddb8
- (id)initWithSequenceID:(unsigned long long)arg1 backlightState:(long long)arg2 visualState:(id)arg3 presentationDate:(id)arg4;	// IMP=0x000000000000dd03
- (id)initWithTarget:(id)arg1 visualState:(id)arg2 presentationDate:(id)arg3;	// IMP=0x000000000000dc52
- (id)initWithSequenceID:(unsigned long long)arg1 backlightState:(long long)arg2;	// IMP=0x000000000000dc3a

@end

