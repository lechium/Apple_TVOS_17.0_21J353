//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLICoreDataCommands : NSObject
{
}

+ (id)convertToTerminalValueFromValue:(id)arg1 forRelationship:(id)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x002000000001d718
+ (id)convertToTerminalValueFromValue:(id)arg1 forAttribute:(id)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x001000000001d4a2
+ (id)convertToValueFromTerminalValue:(id)arg1 forRelationship:(id)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x001000000001cd10
+ (id)convertToValueFromTerminalValue:(id)arg1 forAttribute:(id)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x001000000001c9da
+ (id)persistentContainer;	// IMP=0x001000000001c32c
+ (void)setPersistentContainerProvider:(CDUnknownBlockType)arg1;	// IMP=0x001000000001c30b
+ (CDUnknownBlockType)persistentContainerProvider;	// IMP=0x001000000001c2f2
+ (id)_referenceToOtherCDCommands;	// IMP=0x001000000001c1d9

@end

