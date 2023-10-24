//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADRapportLinkConnectionOptions : NSObject
{
    long long _usesOnDemandConnection;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000213df9
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000213dac
@property(readonly, nonatomic) long long usesOnDemandConnection; // @synthesize usesOnDemandConnection=_usesOnDemandConnection;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000213c4c
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000213bb4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000213ba9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000213b3d
- (unsigned long long)hash;	// IMP=0x0010000000213aeb
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0010000000213a65
- (id)description;	// IMP=0x0010000000213a51
- (id)initWithUsesOnDemandConnection:(long long)arg1;	// IMP=0x0010000000213a02
- (id)init;	// IMP=0x00100000002139ee
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000000213930
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0010000000213e01

@end

