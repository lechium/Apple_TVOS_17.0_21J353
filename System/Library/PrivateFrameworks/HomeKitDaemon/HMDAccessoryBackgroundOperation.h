//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryBackgroundOperation
{
}

+ (id)logCategory;	// IMP=0x0010000000b2c3d1
+ (_Bool)persistent;	// IMP=0x0010000000b2c3c9
- (id)logIdentifier;	// IMP=0x0000000000b2c379
- (id)attributeDescriptions;	// IMP=0x0000000000b2c1a4
@property(readonly, copy, nonatomic) NSUUID *homeUUID;
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy, nonatomic) NSUUID *accessoryUUID;
- (_Bool)isAccessoryOperation;	// IMP=0x0000000000b2c06a
- (unsigned long long)accessoryOperationStatus;	// IMP=0x0000000000b2bb91
- (id)initWithAccessoryUUID:(id)arg1 accessoryIdentifier:(id)arg2 homeUUIDWhereAccessoryWasPaired:(id)arg3 userData:(id)arg4;	// IMP=0x0000000000b2b880
- (id)initWithAccessory:(id)arg1 userData:(id)arg2;	// IMP=0x0000000000b2b769

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

