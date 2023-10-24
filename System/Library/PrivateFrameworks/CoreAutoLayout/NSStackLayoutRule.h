//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NSStackLayoutRule : NSObject
{
    NSArray *_stackedRects;	// 8 = 0x8
    double _spacing;	// 16 = 0x10
    long long _orientation;	// 24 = 0x18
}

+ (id)verticalStackWithRects:(id)arg1 spacing:(double)arg2;	// IMP=0x0010000000004534
+ (id)horizontalStackWithRects:(id)arg1 spacing:(double)arg2;	// IMP=0x001000000000451d
+ (id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 spacing:(double)arg3;	// IMP=0x0010000000004493
@property(readonly) double spacing; // @synthesize spacing=_spacing;
@property(readonly) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, copy) NSArray *stackedRects; // @synthesize stackedRects=_stackedRects;
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;	// IMP=0x000000000000454e
@property(readonly, copy) NSString *identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004407
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004390
- (void)dealloc;	// IMP=0x0000000000004355

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

