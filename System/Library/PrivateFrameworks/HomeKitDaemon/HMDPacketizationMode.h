//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDPacketizationMode : HAPNumberParser
{
    unsigned long long _packetizationMode;	// 8 = 0x8
}

+ (id)arrayWithModes:(id)arg1;	// IMP=0x001000000006fc7c
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000006fc74
@property(readonly, nonatomic) unsigned long long packetizationMode; // @synthesize packetizationMode=_packetizationMode;
- (id)initWithPacketizationMode:(unsigned long long)arg1;	// IMP=0x000000000006fc1f
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000006fbc8
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006fb2c
- (id)description;	// IMP=0x000000000006fab8
- (unsigned long long)hash;	// IMP=0x000000000006faa6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006fa23
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006f98c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006f8cf

@end

