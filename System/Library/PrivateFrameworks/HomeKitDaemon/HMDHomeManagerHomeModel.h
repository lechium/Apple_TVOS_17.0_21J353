//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeManagerHomeHandle, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeManagerHomeModel
{
}

+ (id)modelForHomeUUID:(id)arg1;	// IMP=0x00100000004b14fc
+ (id)properties;	// IMP=0x00100000004b14cc
+ (id)deriveUUIDFromHomeUUID:(id)arg1;	// IMP=0x00100000004b14ac
+ (Class)cd_entityClass;	// IMP=0x00100000002f2af1
+ (id)cd_parentReferenceName;	// IMP=0x00100000002f2ae4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) HMDHomeManagerHomeHandle *handle; // @dynamic handle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
