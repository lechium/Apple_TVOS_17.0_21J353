//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCharacteristic, HMDHAPAccessory, HMDHome, NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicWriteAction
{
    id _targetValue;	// 8 = 0x8
    NSUUID *_accessoryUUID;	// 16 = 0x10
    NSNumber *_serviceID;	// 24 = 0x18
    NSNumber *_characteristicID;	// 32 = 0x20
    NSDictionary *_actionInformation;	// 40 = 0x28
    NSString *_dumpState;	// 48 = 0x30
    HMDHome *_home;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000008741e8
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008741e0
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x0010000000873c85
- (void).cxx_destruct;	// IMP=0x000000000087364d
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSString *dumpState; // @synthesize dumpState=_dumpState;
@property(readonly, nonatomic) NSDictionary *actionInformation; // @synthesize actionInformation=_actionInformation;
@property(readonly, nonatomic) NSNumber *characteristicID; // @synthesize characteristicID=_characteristicID;
@property(readonly, nonatomic) NSNumber *serviceID; // @synthesize serviceID=_serviceID;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(copy, nonatomic) id targetValue; // @synthesize targetValue=_targetValue;
- (id)attributeDescriptions;	// IMP=0x000000000087343f
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x000000000087321c
- (void)_processWriteActionModelUpdated:(id)arg1 message:(id)arg2;	// IMP=0x0000000000872d25
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000872d1f
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000872b34
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000872a60
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000087270d
- (_Bool)isStaleWithAccessory:(id)arg1;	// IMP=0x00000000008726bf
- (id)associatedAccessories;	// IMP=0x0000000000872627
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x00000000008725b0
@property(readonly) HMDHAPAccessory *accessory;
- (unsigned long long)entitlementsForNotification;	// IMP=0x0000000000872435
- (_Bool)isUnsecuringAction;	// IMP=0x00000000008722de
- (_Bool)requiresDeviceUnlock;	// IMP=0x0000000000872203
- (_Bool)isCompatibleWithAction:(id)arg1;	// IMP=0x000000000087206e
- (_Bool)isActionForCharacteristic:(id)arg1;	// IMP=0x0000000000871e1e
- (_Bool)isSecureAction;	// IMP=0x0000000000871e0c
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000871df6
- (id)dictionaryRepresentation;	// IMP=0x0000000000871bfd
- (id)stateDump;	// IMP=0x0000000000871b24
@property(readonly, nonatomic) __weak HMDCharacteristic *characteristic;
- (unsigned long long)type;	// IMP=0x0000000000871a14
- (id)initWithUUID:(id)arg1 accessoryUUID:(id)arg2 serviceIID:(id)arg3 characteristicIID:(id)arg4 targetValue:(id)arg5 actionSet:(id)arg6;	// IMP=0x00000000008718c6
- (id)initWithUUID:(id)arg1 characteristic:(id)arg2 targetValue:(id)arg3 actionSet:(id)arg4;	// IMP=0x000000000087171a
- (id)init;	// IMP=0x0000000000871672

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
