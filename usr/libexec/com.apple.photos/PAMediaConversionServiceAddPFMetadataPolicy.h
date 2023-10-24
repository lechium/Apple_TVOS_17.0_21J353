//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PAMediaConversionServiceAddPFMetadataPolicy
{
    NSString *_key;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000037fd
+ (id)policyWithKey:(id)arg1 value:(id)arg2;	// IMP=0x0010000000003775
- (void).cxx_destruct;	// IMP=0x0020000000003b4b
@property(retain) id value; // @synthesize value=_value;
@property(retain) NSString *key; // @synthesize key=_key;
- (id)processMetadata:(id)arg1;	// IMP=0x00100000000039a6
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x001000000000399e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000038f0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000003805

@end
