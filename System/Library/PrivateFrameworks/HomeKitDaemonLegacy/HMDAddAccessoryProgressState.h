//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMAccessoryCategory, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAddAccessoryProgressState : HMFObject
{
    NSUUID *_accessoryUUID;	// 8 = 0x8
    NSString *_accessoryName;	// 16 = 0x10
    NSString *_manufacturerName;	// 24 = 0x18
    HMAccessoryCategory *_category;	// 32 = 0x20
    unsigned long long _certificationStatus;	// 40 = 0x28
    NSString *_productData;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000888042
@property(readonly, nonatomic) NSString *productData; // @synthesize productData=_productData;
@property(readonly, nonatomic) unsigned long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(readonly, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property(readonly, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)description;	// IMP=0x0000000000887f1f
- (id)initWithUUID:(id)arg1 accessoryName:(id)arg2 manufacturerName:(id)arg3 category:(id)arg4 certificationStatus:(unsigned long long)arg5 productData:(id)arg6;	// IMP=0x0000000000887df1

@end

