//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface INFVariantsDescriptor : NSObject
{
    unsigned long long _plurality;	// 8 = 0x8
    unsigned long long _gender;	// 16 = 0x10
}

+ (id)variant;	// IMP=0x00100000000023cf
+ (id)variantWithVariants:(unsigned long long)arg1;	// IMP=0x00100000000023a0
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(nonatomic) unsigned long long plurality; // @synthesize plurality=_plurality;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000022f3
- (id)variantByRemovingOneAttribute;	// IMP=0x0000000000002287
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002216
- (id)initWithVariants:(unsigned long long)arg1;	// IMP=0x00000000000021c0
- (id)init;	// IMP=0x0000000000002185
- (id)append:(id)arg1 toString:(id)arg2;	// IMP=0x00000000000020ed
@property(readonly, nonatomic) NSString *dictionaryKey;

@end

