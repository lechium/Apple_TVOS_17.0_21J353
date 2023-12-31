//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol _UIAssertionControllerSubject;

__attribute__((visibility("hidden")))
@interface _UIAssertionController : NSObject
{
    NSMutableDictionary *_activeAssertionRecords;	// 8 = 0x8
    id <_UIAssertionControllerSubject> _subject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000976790
@property(readonly, nonatomic) __weak id <_UIAssertionControllerSubject> subject; // @synthesize subject=_subject;
- (id)debugDescription;	// IMP=0x00000000009766d7
- (void)_endTrackingAssertion:(id)arg1;	// IMP=0x00000000009763a1
- (void)_beginTrackingAssertion:(id)arg1;	// IMP=0x0000000000976024
- (void)_enforceSubjectAwarenessOfAssertionState:(_Bool)arg1 forAssertionType:(unsigned long long)arg2;	// IMP=0x0000000000975f92
- (_Bool)hasAssertionsOfType:(unsigned long long)arg1;	// IMP=0x0000000000975f12
- (id)vendAssertionOfType:(unsigned long long)arg1 initialState:(_Bool)arg2 reason:(id)arg3 requiresExplicitInvalidation:(_Bool)arg4;	// IMP=0x0000000000975e79
- (id)vendAssertionOfType:(unsigned long long)arg1 initialState:(_Bool)arg2 reason:(id)arg3;	// IMP=0x0000000000975e61
- (id)vendAssertionOfType:(unsigned long long)arg1 initialState:(_Bool)arg2;	// IMP=0x0000000000975e4c
- (id)initWithAssertionSubject:(id)arg1;	// IMP=0x0000000000975dce

@end

