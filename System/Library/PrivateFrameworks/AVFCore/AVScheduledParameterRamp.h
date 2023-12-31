//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVScheduledParameterRamp : NSObject
{
    CDStruct_e83c9415 _timeRange;	// 8 = 0x8
}

+ (id)_defaultAdditionalFigRepresentationObjects;	// IMP=0x00100000000cc66b
+ (id)defaultValue;	// IMP=0x00100000000cc644
+ (id)scheduledParameterRampWithPropertyList:(id)arg1;	// IMP=0x00100000000ccab0
- (id)description;	// IMP=0x00000000000cc9c2
- (unsigned long long)hash;	// IMP=0x00000000000cc8eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cc774
- (id)scheduledParameterRampInterpolatedToTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000cc74d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cc742
@property(readonly, getter=_additionalFigRepresentationObjects) NSArray *additionalFigRepresentationObjects;
@property(readonly) id endValue;
@property(readonly) id startValue;
@property(readonly) CDStruct_e83c9415 timeRange;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x00000000000cc678
- (id)propertyList;	// IMP=0x00000000000ccb06
- (id)initWithPropertyList:(id)arg1;	// IMP=0x00000000000ccadf

@end

