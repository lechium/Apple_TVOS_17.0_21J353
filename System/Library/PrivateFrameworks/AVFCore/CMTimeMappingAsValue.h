//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface CMTimeMappingAsValue : NSValue
{
    CDStruct_82206317 _timeMapping;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000000fdcf
+ (id)valueWithCMTimeMapping:(CDStruct_82206317)arg1;	// IMP=0x006000000000f922
- (Class)classForCoder;	// IMP=0x000000000001007d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ff3b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000fdd7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000fd16
- (unsigned long long)hash;	// IMP=0x000000000000fc3b
- (_Bool)isEqualToValue:(id)arg1;	// IMP=0x000000000000faec
- (id)description;	// IMP=0x000000000000fa12
- (const char *)objCType;	// IMP=0x000000000000fa05
- (void)getValue:(void *)arg1;	// IMP=0x000000000000f9c4
- (CDStruct_82206317)CMTimeMappingValue;	// IMP=0x000000000000f980

@end

