//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MCMCommandUserDataMigration
{
}

+ (Class)incomingMessageClass;	// IMP=0x0080000000033b68
+ (unsigned long long)command;	// IMP=0x0080000000033b32
- (_Bool)_bundleContainerExistsForDataContainer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000034e9c
- (int)_intendedDataProtectionClassBasedOnEntitlementsForIdentifier:(id)arg1;	// IMP=0x0000000000034e1d
- (void)_setDataProtectionIfNecessaryOnContainer:(id)arg1;	// IMP=0x0000000000034947
- (void)execute;	// IMP=0x0000000000033c38
- (_Bool)preflightClientAllowed;	// IMP=0x0000000000033ba4

@end
