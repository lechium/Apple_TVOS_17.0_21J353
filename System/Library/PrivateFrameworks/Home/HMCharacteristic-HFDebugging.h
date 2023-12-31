//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMCharacteristic.h>

@class NSString, NSUUID;

@interface HMCharacteristic (HFDebugging)
+ (id)hf_descriptionForProperties:(id)arg1;	// IMP=0x00100000000afab3
+ (id)_hf_visibleLightLevelTriggerValues;	// IMP=0x001000000025df4d
+ (long long)_hf_indexOfSortedValues:(id)arg1 closestToValue:(id)arg2 top:(unsigned long long)arg3 bottom:(unsigned long long)arg4;	// IMP=0x001000000025d39e
+ (long long)hf_indexOfSortedValues:(id)arg1 closestToValue:(id)arg2;	// IMP=0x001000000025d2fb
+ (_Bool)hf_shouldCaptureCharacteristicTypeInActionSets:(id)arg1;	// IMP=0x001000000025b632
+ (CDUnknownBlockType)hf_characteristicSortComparator;	// IMP=0x001000000025b2d2
+ (long long)hf_sortPriorityForCharacteristicType:(id)arg1;	// IMP=0x001000000025a744
+ (id)hf_currentStateCharacteristicTypeForTargetStateCharacteristicType:(id)arg1;	// IMP=0x001000000025a566
+ (id)hf_targetStateCharacteristicTypeForCurrentStateCharacteristicType:(id)arg1;	// IMP=0x001000000025a388
+ (id)hf_associatedCharacteristicTypeForCharacteristicType:(id)arg1;	// IMP=0x001000000025a313
+ (id)hf_descriptionForCharacteristicType:(id)arg1;	// IMP=0x0010000000259fde
+ (id)_hf_valueRangeCharacteristicTypeToVisibleTriggerValueStepMap;	// IMP=0x0010000000259ebe
+ (id)_hf_valueRangeCharacteristicTypeToAbnormalValueMap;	// IMP=0x0010000000259d0f
+ (id)_hf_alarmCharacteristicTypeToAbnormalValueMap;	// IMP=0x0010000000259b88
+ (id)hf_abnormalValueForSensorCharacteristicType:(id)arg1;	// IMP=0x0010000000259aff
+ (id)hf_defaultAbnormalValueForValueRangeSensorCharacteristicType:(id)arg1;	// IMP=0x0010000000259a85
+ (id)hf_abnormalValueForAlarmCharacteristicType:(id)arg1;	// IMP=0x0010000000259a0b
+ (id)hf_sensingCharacteristicTypes;	// IMP=0x00100000002598c0
+ (id)hf_alarmCharacteristicTypes;	// IMP=0x0010000000259775
+ (id)hf_continuousValueRangeCharacteristicTypes;	// IMP=0x0010000000259620
+ (id)hf_valueRangeCharacteristicTypes;	// IMP=0x00100000002594d5
+ (id)hf_powerStateCharacteristicTypes;	// IMP=0x0010000000259457
+ (id)hf_suggestionVendorForCharacteristicType:(id)arg1;	// IMP=0x001000000025e27c
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00100000000afd38
- (id)_hf_stepValue;	// IMP=0x001000000025dd60
- (id)_hf_triggerValuesWithMinStepValue:(id)arg1;	// IMP=0x001000000025d9b7
- (id)_hf_lightLevelVisibleTriggerValues;	// IMP=0x001000000025d662
- (id)hf_visibleTriggerValues;	// IMP=0x001000000025d1c5
- (id)hf_triggerValues;	// IMP=0x001000000025cf05
- (id)hf_maximumTriggerValue;	// IMP=0x001000000025ceb5
- (id)hf_minimumTriggerValue;	// IMP=0x001000000025ce11
- (id)hf_thresholdValueForRange:(id)arg1;	// IMP=0x001000000025cb3e
- (id)hf_valueAfterTriggerValue:(id)arg1;	// IMP=0x001000000025ca75
- (id)hf_valueBeforeTriggerValue:(id)arg1;	// IMP=0x001000000025c9c4
- (id)hf_programmableSwitchTriggerValueToEventTriggersMap;	// IMP=0x001000000025c60f
- (id)hf_designatedEventTriggerForProgrammableSwitchWithTriggerValue:(id)arg1;	// IMP=0x001000000025c4dd
- (id)hf_eventTriggersForTriggerValue:(id)arg1;	// IMP=0x001000000025c02a
- (id)hf_eventTriggers;	// IMP=0x001000000025bca1
- (id)hf_home;	// IMP=0x001000000025bc27
- (id)hf_programmableSwitchValidValueSet;	// IMP=0x001000000025b806
- (_Bool)hf_shouldCaptureInActionSets;	// IMP=0x001000000025b77c
- (long long)hf_sortPriority;	// IMP=0x001000000025b274
- (id)hf_associatedCharacteristicType;	// IMP=0x001000000025a2a9
- (id)hf_defaultValue;	// IMP=0x001000000025a1cf
- (id)hf_formattedValueUpdatedTime;	// IMP=0x001000000025a0cb
- (_Bool)hf_isReadable;	// IMP=0x001000000025a07d
- (_Bool)hf_isWritable;	// IMP=0x001000000025a02f
- (id)hf_characteristicTypeDescription;	// IMP=0x0010000000259f74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

