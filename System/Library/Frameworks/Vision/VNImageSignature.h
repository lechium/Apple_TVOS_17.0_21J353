//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNImageSignature : NSObject
{
    struct FastRegistration_Signatures _signature;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000ecd3c
@property(readonly) const struct FastRegistration_Signatures *signature;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ecc27
- (unsigned long long)hash;	// IMP=0x00000000000ecba0
- (void)dealloc;	// IMP=0x00000000000ecb5e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ec867
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ec37d
- (id)initWithImageBuffer:(id)arg1 regionOfInterest:(struct CGRect)arg2 error:(id *)arg3;	// IMP=0x00000000000ebdaf

@end
