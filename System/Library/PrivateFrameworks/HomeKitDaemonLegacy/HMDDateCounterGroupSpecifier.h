//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

__attribute__((visibility("hidden")))
@interface HMDDateCounterGroupSpecifier
{
    NSDate *_date;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000003623d5
+ (id)specifierWithGroupName:(id)arg1 date:(id)arg2;	// IMP=0x0060000000362363
- (void).cxx_destruct;	// IMP=0x0000000000362350
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)description;	// IMP=0x00000000003622ac
- (unsigned long long)hash;	// IMP=0x0000000000362220
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003620cb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000362030
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000361f95
- (id)initWithGroupName:(id)arg1 date:(id)arg2;	// IMP=0x0000000000361f1d

@end

