//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFVersion, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleAccessoryIdentifier : HMFObject
{
    NSString *_productGroup;	// 8 = 0x8
    NSString *_productNumber;	// 16 = 0x10
    HMFVersion *_firmwareVersion;	// 24 = 0x18
}

+ (id)createWithProductData:(id)arg1 firmwareVersion:(id)arg2;	// IMP=0x00100000004b39bd
+ (id)identifierFromRecordID:(id)arg1;	// IMP=0x0010000000c01479
- (void).cxx_destruct;	// IMP=0x00000000004b397b
@property(readonly, nonatomic) HMFVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, nonatomic) NSString *productNumber; // @synthesize productNumber=_productNumber;
@property(readonly, nonatomic) NSString *productGroup; // @synthesize productGroup=_productGroup;
- (id)attributeDescriptions;	// IMP=0x00000000004b37ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b37bf
- (unsigned long long)hash;	// IMP=0x00000000004b36dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b34fd
- (id)initWithProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3;	// IMP=0x00000000004b33ed
- (id)cloudKitRecordID;	// IMP=0x0000000000c013b1
@property(readonly, nonatomic) NSString *cloudKitRecordName;
@property(readonly, nonatomic) NSString *cloudKitZoneName;

@end

