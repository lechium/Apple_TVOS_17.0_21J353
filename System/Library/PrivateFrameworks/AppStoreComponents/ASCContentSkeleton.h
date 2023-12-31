//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ASCContentSkeleton : NSObject
{
    long long _type;	// 8 = 0x8
    double _rawValue;	// 16 = 0x10
}

+ (id)fractionalSkeleton:(double)arg1;	// IMP=0x00100000000148cf
+ (id)absoluteSkeleton:(double)arg1;	// IMP=0x0010000000014899
@property(readonly, nonatomic) double rawValue; // @synthesize rawValue=_rawValue;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (double)widthThatFits:(struct CGSize)arg1;	// IMP=0x0000000000014b84
- (id)description;	// IMP=0x0000000000014ad7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000149e0
- (unsigned long long)hash;	// IMP=0x000000000001495f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014954
- (id)initWithType:(long long)arg1 rawValue:(double)arg2;	// IMP=0x0000000000014908

@end

