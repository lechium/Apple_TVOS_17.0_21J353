//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueUnnestedProperty
{
    NSArray *_affectingProperties;	// 24 = 0x18
    _Bool _cachedIsaForAutonotifyingIsValid;	// 32 = 0x20
    Class _cachedIsaForAutonotifying;	// 40 = 0x28
}

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;	// IMP=0x00000000006970e6
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;	// IMP=0x0000000000696f64
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;	// IMP=0x0000000000696cca
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x0000000000696b98
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x0000000000696a66
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x0000000000696920
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x00000000006968ed
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x000000000069677a
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x0000000000696742
- (Class)isaForAutonotifying;	// IMP=0x00000000006965f2
- (Class)_isaForAutonotifying;	// IMP=0x00000000006965a1
- (void)_addDependentValueKey:(id)arg1;	// IMP=0x000000000069659b
- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg1 getAffectingProperties:(id)arg2;	// IMP=0x0000000000696113
- (id)description;	// IMP=0x000000000069601a
- (void)dealloc;	// IMP=0x0000000000695fb5
- (id)_initWithContainerClass:(id)arg1 key:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;	// IMP=0x0000000000695da9

@end

