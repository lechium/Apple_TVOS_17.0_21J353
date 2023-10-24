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

+ (id)arrayWithCodecs:(id)arg1;	// IMP=0x001000000006e7ca
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000006e7c2
@property(readonly, nonatomic) unsigned long long codec; // @synthesize codec=_codec;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006e760
- (id)initWithAudioCodecGroup:(unsigned long long)arg1;	// IMP=0x000000000006e71c
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000006e6c5
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006e629
- (id)description;	// IMP=0x000000000006e5b5
- (unsigned long long)hash;	// IMP=0x000000000006e5a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006e520
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006e489
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006e3cc

@end
