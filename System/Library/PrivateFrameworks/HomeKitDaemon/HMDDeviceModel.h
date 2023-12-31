//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeKitVersion, HMDRPIdentity, HMFProductInfo, NSArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDDeviceModel
{
}

+ (id)properties;	// IMP=0x0010000000828e9d
+ (id)schemaHashRoot;	// IMP=0x0010000000828e7c
+ (Class)cd_entityClass;	// IMP=0x0010000000a1683c
+ (id)cd_parentReferenceName;	// IMP=0x0010000000a1682f
- (_Bool)diff:(id)arg1 differingFields:(id *)arg2;	// IMP=0x0000000000828ca9
@property(readonly, nonatomic) NSArray *deviceHandles;
- (id)cd_childrenExcluding:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000a167be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *handles; // @dynamic handles;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) HMFProductInfo *productInfo; // @dynamic productInfo;
@property(copy, nonatomic) HMDRPIdentity *rpIdentity; // @dynamic rpIdentity;
@property(readonly) Class superclass;
@property(copy, nonatomic) HMDHomeKitVersion *version; // @dynamic version;

@end

