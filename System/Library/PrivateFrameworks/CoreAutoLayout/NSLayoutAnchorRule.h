//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutAnchor, NSString;

@interface NSLayoutAnchorRule : NSObject
{
    NSLayoutAnchor *_firstAnchor;	// 8 = 0x8
    NSLayoutAnchor *_secondAnchor;	// 16 = 0x10
    long long _relation;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    double _constant;	// 40 = 0x28
    double _multiplier;	// 48 = 0x30
    float _priority;	// 56 = 0x38
}

@property(readonly) double multiplier; // @synthesize multiplier=_multiplier;
@property(readonly) float priority; // @synthesize priority=_priority;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) double constant; // @synthesize constant=_constant;
@property(readonly) long long relation; // @synthesize relation=_relation;
@property(readonly, copy) NSLayoutAnchor *secondAnchor; // @synthesize secondAnchor=_secondAnchor;
@property(readonly, copy) NSLayoutAnchor *firstAnchor; // @synthesize firstAnchor=_firstAnchor;
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;	// IMP=0x0000000000003499
- (id)makeLayoutConstraint;	// IMP=0x000000000000343f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000334c
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003293
- (void)dealloc;	// IMP=0x0000000000003242

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

