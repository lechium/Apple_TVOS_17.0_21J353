//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCharacteristic, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicWriteAction
{
    HMDCharacteristic *_characteristic;	// 8 = 0x8
    id _targetValue;	// 16 = 0x10
    NSDictionary *_actionInformation;	// 24 = 0x18
    NSString *_dumpState;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000773daf
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000773da7
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x001000000077384c
- (void).cxx_destruct;	// IMP=0x0000000000773245
@property(readonly, nonatomic) NSString *dumpState; // @synthesize dumpState=_dumpState;
@property(readonly, nonatomic) NSDictionary *actionInformation; // @synthesize actionInformation=_actionInformation;
@property(copy, nonatomic) id targetValue; // @synthesize targetValue=_targetValue;
- (id)attributeDescriptions;	// IMP=0x0000000000773083
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000772e60
- (void)_processWriteActionModelUpdated:(id)arg1 message:(id)arg2;	// IMP=0x0000000000772969
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000772963
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000772778
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007726a4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000772351
- (id)associatedAccessories;	// IMP=0x0000000000772296
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x00000000007721da
- (unsigned long long)entitlementsForNotification;	// IMP=0x0000000000772119
- (_Bool)isUnsecuringAction;	// IMP=0x0000000000771fc2
- (_Bool)requiresDeviceUnlock;	// IMP=0x0000000000771ee7
- (_Bool)isCompatibleWithAction:(id)arg1;	// IMP=0x0000000000771e26
- (_Bool)isActionForCharacteristic:(id)arg1;	// IMP=0x0000000000771bd6
- (_Bool)isSecureAction;	// IMP=0x0000000000771bc4
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000771bae
- (id)dictionaryRepresentation;	// IMP=0x00000000007719b5
- (id)stateDump;	// IMP=0x00000000007718dc
@property(readonly, nonatomic) __weak HMDCharacteristic *characteristic;
- (unsigned long long)type;	// IMP=0x00000000007718bf
- (id)initWithUUID:(id)arg1 characteristic:(id)arg2 targetValue:(id)arg3 actionSet:(id)arg4;	// IMP=0x000000000077180a
- (id)init;	// IMP=0x0000000000771762

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

