//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface TVHKDMAPMacDateValueTransformer : NSValueTransformer
{
}

+ (id)_date1904;	// IMP=0x0080000000032efe
+ (id)_dateWithSecondsSince1904:(double)arg1;	// IMP=0x0080000000032ed7
+ (_Bool)allowsReverseTransformation;	// IMP=0x0080000000032de2
+ (Class)transformedValueClass;	// IMP=0x0080000000032dd1
- (id)reverseTransformedValue:(id)arg1;	// IMP=0x0000000000032e34
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000032dea

@end
