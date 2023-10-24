//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ADDeviceSyncCommandPushGenerationsRequest : NSObject
{
    NSDictionary *;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001d2a5f
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d2a12
- (void).cxx_destruct;	// IMP=0x00200000001d28f0
@property(readonly, copy, nonatomic) NSDictionary *generationsByDataType; // @synthesize generationsByDataType=_generationsByDataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001d28c3
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001d27e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001d27db
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001d2738
- (unsigned long long)hash;	// IMP=0x00100000001d2722
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000001d269c
- (id)description;	// IMP=0x00100000001d2688
- (id)initWithGenerationsByDataType:(id)arg1;	// IMP=0x00100000001d25f2
- (id)init;	// IMP=0x00100000001d25de
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d24eb
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d2a67

@end

