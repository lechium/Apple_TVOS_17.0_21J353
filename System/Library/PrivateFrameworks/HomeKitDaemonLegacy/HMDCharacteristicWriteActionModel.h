//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicWriteActionModel
{
}

+ (id)properties;	// IMP=0x00600000007735cd
- (id)dependentUUIDs;	// IMP=0x00000000007733d8
- (void)loadModelWithActionInformation:(id)arg1;	// IMP=0x0000000000773298

// Remaining properties
@property(retain, nonatomic) NSString *accessory; // @dynamic accessory;
@property(retain, nonatomic) NSNumber *characteristicID; // @dynamic characteristicID;
@property(retain, nonatomic) NSNumber *serviceID; // @dynamic serviceID;
@property(retain, nonatomic) id targetValue; // @dynamic targetValue;

@end
