//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDAudioCodecGroup : HAPNumberParser
{
    unsigned long long _codec;	// 8 = 0x8
}

+ (id)arrayWithCodecs:(id)arg1;	// IMP=0x0010000000075a67
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000075a5f
@property(readonly, nonatomic) unsigned long long codec; // @synthesize codec=_codec;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000759fd
- (id)initWithAudioCodecGroup:(unsigned long long)arg1;	// IMP=0x00000000000759b9
- (id)initWithTLVData:(id)arg1;	// IMP=0x0000000000075962
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000000758c6
- (id)description;	// IMP=0x0000000000075852
- (unsigned long long)hash;	// IMP=0x0000000000075840
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000757bd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000075726
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000075669

@end

