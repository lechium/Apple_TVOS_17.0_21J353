//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingAudioBitRateMode : HAPNumberParser
{
    long long _type;	// 8 = 0x8
}

+ (id)arrayWithBitRateModes:(id)arg1;	// IMP=0x0010000000b27e87
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b27e7f
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b27dc5
- (id)initWithBitRateMode:(long long)arg1;	// IMP=0x0000000000b27d81
- (id)initWithTLVData:(id)arg1;	// IMP=0x0000000000b27d2a
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000b27c8e
- (id)description;	// IMP=0x0000000000b27c1a
- (unsigned long long)hash;	// IMP=0x0000000000b27c08
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b27b85
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b27aee
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b27a31

@end

