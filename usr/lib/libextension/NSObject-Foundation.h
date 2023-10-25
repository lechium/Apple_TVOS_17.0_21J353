//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (Foundation)
+ (id)__old_unswizzled_keyPathsForValuesAffectingValueForKey:(id)arg1;	// IMP=0x00200000000737b0
+ (_Bool)__old_unswizzled_automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0020000000073760
+ (const char *)_localClassNameForClass;	// IMP=0x0020000000633b86
+ (struct objc_method_description *)methodDescriptionForSelector:(SEL)arg1;	// IMP=0x00200000006373f9
+ (struct objc_method_description *)instanceMethodDescriptionForSelector:(SEL)arg1;	// IMP=0x00200000006371f3
+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;	// IMP=0x002000000067ba28
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x002000000067ba20
+ (id)_createValuePrimitiveSetterWithContainerClassID:(id)arg1 key:(id)arg2;	// IMP=0x0020000000681c8f
+ (id)_createValuePrimitiveGetterWithContainerClassID:(id)arg1 key:(id)arg2;	// IMP=0x0020000000681991
+ (id)_createOtherValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;	// IMP=0x002000000068194f
+ (id)_createOtherValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;	// IMP=0x002000000068190d
+ (id)_createMutableSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;	// IMP=0x00200000006812ab
+ (id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;	// IMP=0x0020000000680c4b
+ (id)_createValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;	// IMP=0x002000000068092f
+ (id)_createValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;	// IMP=0x002000000068021b
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0020000000692c5a
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;	// IMP=0x0020000000692a0b
+ (id)_keysForValuesAffectingValueForKey:(id)arg1;	// IMP=0x0020000000692858
+ (void)setKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2;	// IMP=0x0020000000692f43
+ (_Bool)_shouldAddObservationForwardersForKey:(id)arg1;	// IMP=0x002000000069302e
+ (id)classFallbacksForKeyedArchiver;	// IMP=0x00200000006a7f95
+ (Class)classForKeyedUnarchiver;	// IMP=0x00200000006a7fa2
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1;	// IMP=0x0020000000703d94
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;	// IMP=0x00200000007039bd
+ (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00200000007a479f
- (id)__NS_swiftOverlay_keyPathsForValuesAffectingValueForKey:(id)arg1 foundationImplementation:(CDUnknownBlockType)arg2;	// IMP=0x0010000000073980
- (_Bool)__NS_swiftOverlay_automaticallyNotifiesObserversForKey:(id)arg1 foundationImplementation:(CDUnknownBlockType)arg2;	// IMP=0x0010000000073800
- (id)newTaggedNSStringWithASCIIBytes_:(const char *)arg1 length_:(long long)arg2;	// IMP=0x00100000001d60a0
- (id)replacementObjectForArchiver:(id)arg1;	// IMP=0x00100000005eebd5
- (Class)classForArchiver;	// IMP=0x00100000005eebc3
- (const char *)_localClassNameForClass;	// IMP=0x0010000000633b74
- (_Bool)_conformsToProtocolNamed:(const char *)arg1;	// IMP=0x001000000063753f
- (struct objc_method_description *)methodDescriptionForSelector:(SEL)arg1;	// IMP=0x00100000006374bf
- (void)setObservation:(id)arg1 forObservingKeyPath:(id)arg2;	// IMP=0x0010000000638eeb
- (void)removeObservation:(id)arg1 forObservableKeyPath:(id)arg2;	// IMP=0x0010000000638ece
- (id)addObserver:(id)arg1 forObservableKeyPath:(id)arg2;	// IMP=0x0010000000638e5d
- (void)_receiveBox:(id)arg1;	// IMP=0x0010000000657d91
- (void)removeObservation:(id)arg1;	// IMP=0x0010000000657d53
- (id)addObserver:(id)arg1;	// IMP=0x0010000000657cc9
- (void)receiveObservedValue:(id)arg1;	// IMP=0x0010000000657bc5
- (void)receiveObservedError:(id)arg1;	// IMP=0x0010000000657ac1
- (_Bool)_isToManyChangeInformation;	// IMP=0x0010000000657ab9
- (void)_destroyObserverList;	// IMP=0x0010000000657aa5
- (void *)_observerStorageOfSize:(unsigned long long)arg1;	// IMP=0x0010000000657a9d
- (id *)_observerStorage;	// IMP=0x0010000000657a95
- (id)addObservationTransformer:(CDUnknownBlockType)arg1;	// IMP=0x00100000006579f0
- (id)addObserverBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000006578a9
- (id)addChainedObservers:(id)arg1;	// IMP=0x001000000065775d
- (void)finishObserving;	// IMP=0x0010000000657724
- (_Bool)_overrideUseFastBlockObservers;	// IMP=0x001000000065771c
- (void)setValuesForKeysWithDictionary:(id)arg1;	// IMP=0x001000000067d70d
- (id)dictionaryWithValuesForKeys:(id)arg1;	// IMP=0x001000000067d618
- (void)setNilValueForKey:(id)arg1;	// IMP=0x001000000067d5ac
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x001000000067d4c0
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x001000000067d3d3
- (id)mutableSetValueForKeyPath:(id)arg1;	// IMP=0x001000000067d287
- (id)mutableOrderedSetValueForKeyPath:(id)arg1;	// IMP=0x001000000067d13b
- (id)mutableArrayValueForKeyPath:(id)arg1;	// IMP=0x001000000067cfef
- (_Bool)validateValue:(inout id *)arg1 forKeyPath:(id)arg2 error:(out id *)arg3;	// IMP=0x001000000067ce83
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x001000000067cd2e
- (id)valueForKeyPath:(id)arg1;	// IMP=0x001000000067cbe2
- (id)mutableSetValueForKey:(id)arg1;	// IMP=0x001000000067ca83
- (id)mutableOrderedSetValueForKey:(id)arg1;	// IMP=0x001000000067c924
- (id)mutableArrayValueForKey:(id)arg1;	// IMP=0x001000000067c7c5
- (_Bool)validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;	// IMP=0x001000000067c65b
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000067c433
- (id)valueForKey:(id)arg1;	// IMP=0x001000000067c1ea
- (_Bool)_isKVOA;	// IMP=0x001000000068d070
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000069072b
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0010000000691370
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x001000000069120b
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x0010000000691012
- (void)_removeObserver:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000690cce
- (void)_addObserver:(id)arg1 forProperty:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00100000006907be
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;	// IMP=0x00100000006927e4
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;	// IMP=0x001000000069240e
- (void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;	// IMP=0x0010000000691f9b
- (void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;	// IMP=0x0010000000691ce6
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x0010000000691ccd
- (void)willChangeValueForKey:(id)arg1;	// IMP=0x0010000000691cb1
@property void *observationInfo;
- (id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(_Bool)arg2;	// IMP=0x0010000000694689
- (id)_implicitObservationInfo;	// IMP=0x0010000000694681
- (void)_changeValueForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000069462a
- (void)_changeValueForKey:(id)arg1 key:(id)arg2 key:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000006945cb
- (void)_changeValueForKeys:(id *)arg1 count:(unsigned long long)arg2 maybeOldValuesDict:(id)arg3 maybeNewValuesDict:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000693a06
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;	// IMP=0x00100000006933e5
- (void)_didChangeValuesForKeys:(id)arg1;	// IMP=0x00100000006933c9
- (void)_willChangeValuesForKeys:(id)arg1;	// IMP=0x00100000006933aa
- (void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2;	// IMP=0x0010000000693036
- (void)_didEndKeyValueObserving;	// IMP=0x0010000000693028
- (void)_willBeginKeyValueObserving;	// IMP=0x0010000000693022
- (id)replacementObjectForKeyedArchiver:(id)arg1;	// IMP=0x00100000006a7f34
@property(readonly) Class classForKeyedArchiver;
@property(readonly, retain) id autoContentAccessingProxy;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;	// IMP=0x00100000007035d0
- (void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3;	// IMP=0x00100000007035be
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;	// IMP=0x0010000000703556
- (void)performSelectorInBackground:(SEL)arg1 withObject:(id)arg2;	// IMP=0x001000000072cdd4
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(_Bool)arg4;	// IMP=0x001000000072cd4d
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(_Bool)arg3;	// IMP=0x001000000072ccbd
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(_Bool)arg3 modes:(id)arg4;	// IMP=0x001000000072cc57
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(_Bool)arg4 modes:(id)arg5;	// IMP=0x001000000072c7c2
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00100000007a4762
- (Class)classForPortCoder;	// IMP=0x00100000007a4750
@end

