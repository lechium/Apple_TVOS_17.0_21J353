//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMAccessoryCategory, HMDAccessoryAdvertisement, HMFMessageDispatcher, NSData, NSNumber, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDUnassociatedAccessory : HMFObject
{
    NSUUID *_uuid;	// 8 = 0x8
    struct os_unfair_recursive_lock_s _lock;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    HMAccessoryCategory *_category;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    long long _associationOptions;	// 48 = 0x30
    HMDAccessoryAdvertisement *_accessoryAdvertisement;	// 56 = 0x38
    HMFMessageDispatcher *_messageDispatcher;	// 64 = 0x40
    NSData *_rootPublicKey;	// 72 = 0x48
    NSNumber *_nodeID;	// 80 = 0x50
    NSString *_serialNumber;	// 88 = 0x58
    NSUUID *_commissioningID;	// 96 = 0x60
    NSNumber *_vendorID;	// 104 = 0x68
    NSNumber *_productID;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000085052a
+ (id)logCategory;	// IMP=0x00100000008504fa
+ (id)shortDescription;	// IMP=0x00100000008504e8
+ (id)otherAccessoryCategory;	// IMP=0x00100000008503ed
- (void).cxx_destruct;	// IMP=0x00000000008501be
@property(copy) NSNumber *productID; // @synthesize productID=_productID;
@property(copy) NSNumber *vendorID; // @synthesize vendorID=_vendorID;
@property(copy) NSUUID *commissioningID; // @synthesize commissioningID=_commissioningID;
@property(copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy) NSNumber *nodeID; // @synthesize nodeID=_nodeID;
@property(readonly, copy) NSData *rootPublicKey; // @synthesize rootPublicKey=_rootPublicKey;
@property(readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) HMDAccessoryAdvertisement *accessoryAdvertisement; // @synthesize accessoryAdvertisement=_accessoryAdvertisement;
@property(readonly) long long associationOptions; // @synthesize associationOptions=_associationOptions;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, setter=setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000084fc87
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000084fb12
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)messageDestination;	// IMP=0x000000000084fa97
- (id)logIdentifier;	// IMP=0x000000000084fa85
- (void)associateWithAccessoryAdvertisement:(id)arg1;	// IMP=0x000000000084f9eb
- (void)identifyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000084f8c9
- (void)_handleIdentify:(id)arg1;	// IMP=0x000000000084f747
@property(readonly, getter=isReachable) _Bool reachable;
- (void)updateCategoryWithCategoryIdentifier:(id)arg1;	// IMP=0x000000000084f605
@property(retain) HMAccessoryCategory *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_registerForMessages;	// IMP=0x000000000084f107
- (id)dumpDescription;	// IMP=0x000000000084efd6
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1 additionalDescription:(id)arg2;	// IMP=0x000000000084ec8b
- (id)shortDescription;	// IMP=0x000000000084ebf0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000084eb15
@property(readonly, getter=isKnownToSystemCommissioner) _Bool knownToSystemCommissioner;
@property(readonly) _Bool supportsCHIP;
@property(readonly) unsigned long long transportTypes;
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x000000000084e9ab
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;	// IMP=0x000000000084e812
- (id)init;	// IMP=0x000000000084e76a

// Remaining properties
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

