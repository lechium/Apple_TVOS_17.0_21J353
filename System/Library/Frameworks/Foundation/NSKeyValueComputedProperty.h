//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueProperty, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueComputedProperty
{
    NSString *_operationName;	// 24 = 0x18
    NSString *_operationArgumentKeyPath;	// 32 = 0x20
    NSKeyValueProperty *_operationArgumentProperty;	// 40 = 0x28
}

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;	// IMP=0x00000000006982ac
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;	// IMP=0x000000000069828f
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;	// IMP=0x0000000000698272
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x0000000000698255
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x0000000000698238
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x0000000000698203
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x00000000006981c3
- (Class)_isaForAutonotifying;	// IMP=0x00000000006981a6
- (void)_addDependentValueKey:(id)arg1;	// IMP=0x0000000000698189
- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg1 getAffectingProperties:(id)arg2;	// IMP=0x000000000069816c
- (id)description;	// IMP=0x000000000069810b
- (void)dealloc;	// IMP=0x0000000000698082
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;	// IMP=0x0000000000697f40

@end

