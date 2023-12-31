//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUnifiedContacts : NSObject
{
}

+ (id)unifiedIdentifiersForValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004de14
+ (_Bool)canUnifyLabel:(id)arg1 withLabel:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004dc9c
+ (id)unifiedIdentifiersForLabeledValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004da90
+ (unsigned long long)countOfLabelsUnifiableWithLabel:(id)arg1 valuesUnifiableWithValue:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;	// IMP=0x008000000004d59a
+ (unsigned long long)countOfLabelIncludingEquivalents:(id)arg1 value:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;	// IMP=0x008000000004d261
+ (void)replaceInferiorValueInMultiValue:(id)arg1 withEntryAtIndex:(unsigned long long)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4;	// IMP=0x008000000004d135
+ (unsigned long long)indexOfValueMostInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004cdfc
+ (id)indexesOfValuesInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004cc25
+ (id)indexesOfLabeledValuesUnifiableWithLabelValuePair:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004cae8
+ (void)addLinkedLabeledValue:(id)arg1 toLabeledValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004c809
+ (_Bool)shouldLabeledValue:(id)arg1 replaceInferiorValueInMultiValue:(id)arg2 forProperty:(id)arg3;	// IMP=0x008000000004c7c1
+ (_Bool)doesMultiValue:(id)arg1 needLabeledValue:(id)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4;	// IMP=0x008000000004c6a1
+ (_Bool)shouldIncludeLabeledValue:(id)arg1 fromSource:(id)arg2 inDestination:(id)arg3 forProperty:(id)arg4;	// IMP=0x008000000004c447
+ (id)firstNonNilValueForProperty:(id)arg1 inContacts:(id)arg2;	// IMP=0x008000000004bda7
+ (void)unifySingleValuesProperties:(id)arg1 ofContacts:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;	// IMP=0x008000000004bbe0
+ (void)unifyImageOfContacts:(id)arg1 intoContact:(id)arg2 availableKeyDescriptor:(id)arg3;	// IMP=0x008000000004ba6a
+ (void)unifyNonNameSingleValuesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;	// IMP=0x008000000004b9c7
+ (void)unifyNamesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;	// IMP=0x008000000004b7d9
+ (id)unifyAvailableKeysOfContacts:(id)arg1;	// IMP=0x008000000004b515
+ (id)makeNonNameSingleValuePropertiesByKey;	// IMP=0x008000000004b23d
+ (id)nonNameSingleValuePropertiesByKey;	// IMP=0x008000000004b182
+ (id)imageValuePropertyKeys;	// IMP=0x008000000004b091
+ (id)imageValuePropertiesByKey;	// IMP=0x008000000004ae37
+ (unsigned long long)indexOfPreferredContactForImage:(id)arg1 prefersSharedImage:(_Bool)arg2;	// IMP=0x008000000004a990

@end

