//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ADDeviceSyncCommandPullGenerationsResponse : NSObject
{
    NSDictionary *_generationsByDataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000003038b8
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000030386b
- (void).cxx_destruct;	// IMP=0x0020000000303749
@property(readonly, copy, nonatomic) NSDictionary *generationsByDataType; // @synthesize generationsByDataType=_generationsByDataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000030371c
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000030363f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000303634
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000303591
- (unsigned long long)hash;	// IMP=0x001000000030357b
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000003034f5
- (id)description;	// IMP=0x00100000003034e1
- (id)initWithGenerationsByDataType:(id)arg1;	// IMP=0x001000000030344b
- (id)init;	// IMP=0x0010000000303437
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000303344
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000003038c0

@end

