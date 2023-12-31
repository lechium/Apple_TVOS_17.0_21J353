//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDVideoCodec : HAPNumberParser
{
    long long _codecType;	// 8 = 0x8
}

+ (id)arrayWithCodecTypes:(id)arg1;	// IMP=0x001000000007291f
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000072917
@property(readonly, nonatomic) long long codecType; // @synthesize codecType=_codecType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000728b5
- (id)initWithCodec:(long long)arg1;	// IMP=0x0000000000072871
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000007281a
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000007277e
- (id)description;	// IMP=0x000000000007270a
- (unsigned long long)hash;	// IMP=0x00000000000726f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000072675
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000725de
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000072521

@end

