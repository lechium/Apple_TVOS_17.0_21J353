//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicThresholdRangeEventModel
{
}

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4 checkForSupport:(_Bool)arg5;	// IMP=0x00600000006d9778
+ (id)properties;	// IMP=0x00600000006d9715

// Remaining properties
@property(retain, nonatomic) NSNumber *max; // @dynamic max;
@property(retain, nonatomic) NSNumber *min; // @dynamic min;

@end
