//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, VUIAppContext;

__attribute__((visibility("hidden")))
@interface VUIJSFoundation : NSObject
{
    VUIAppContext *_appContext;	// 8 = 0x8
    NSMutableDictionary *_jsTimers;	// 16 = 0x10
    NSMutableDictionary *_dateFormatterCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009f848
@property(retain, nonatomic) NSMutableDictionary *dateFormatterCache; // @synthesize dateFormatterCache=_dateFormatterCache;
@property(retain, nonatomic) NSMutableDictionary *jsTimers; // @synthesize jsTimers=_jsTimers;
@property(nonatomic) __weak VUIAppContext *appContext; // @synthesize appContext=_appContext;
- (void)_jsTimerFired:(id)arg1;	// IMP=0x000000000009f4e7
- (void)_clearTimer:(id)arg1;	// IMP=0x000000000009f325
- (id)_startTimer:(id)arg1 time:(long long)arg2 repeating:(_Bool)arg3;	// IMP=0x000000000009efdc
- (void)stopTimers;	// IMP=0x000000000009ec5d
- (void)clearTimeout:(id)arg1;	// IMP=0x000000000009ec4b
- (id)setTimeout:(id)arg1 time:(long long)arg2;	// IMP=0x000000000009ec36
- (void)clearInterval:(id)arg1;	// IMP=0x000000000009ec24
- (id)setInterval:(id)arg1 time:(long long)arg2;	// IMP=0x000000000009ec0c
- (id)initWithAppContext:(id)arg1;	// IMP=0x000000000009eb6f

@end

