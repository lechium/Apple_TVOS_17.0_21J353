//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface PBCableSignalInfo : NSObject
{
    int _linkQuality;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    double _cableCheckTime;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000146cae
+ (id)currentInfoWithLastCableCheckTime:(double)arg1;	// IMP=0x0010000000146b88
+ (int)_linkQuality;	// IMP=0x0010000000146b7d
- (void).cxx_destruct;	// IMP=0x0020000000147286
@property(nonatomic) int linkQuality; // @synthesize linkQuality=_linkQuality;
@property(readonly, nonatomic) double cableCheckTime; // @synthesize cableCheckTime=_cableCheckTime;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)description;	// IMP=0x001000000014711c
- (unsigned long long)hash;	// IMP=0x0010000000147067
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000146f31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000146e9f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000146de3
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000146cb6
@property(readonly, nonatomic) long long cableStatus;
- (id)initWithDate:(id)arg1 cableCheckTime:(double)arg2 linkQuality:(int)arg3;	// IMP=0x0010000000146c16

@end

