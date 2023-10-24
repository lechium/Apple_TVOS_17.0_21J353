//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCHacks.h>

@interface MCServerSideHacks : MCHacks
{
}

+ (id)mergeArray:(id)arg1 withArray:(id)arg2;	// IMP=0x004000000007aed3
+ (id)sharedHacks;	// IMP=0x0010000000078e38
+ (void)setAllowHacksToCallExternalComponents:(_Bool)arg1;	// IMP=0x0010000000078de1
- (void)setUserTrackingTCCAccessOverrideForRestrictions:(id)arg1;	// IMP=0x004000000007c523
- (void)resetSettingsSender:(id)arg1;	// IMP=0x001000000007c48f
- (void)applyGracePeriodSettingFromKeybagToUserSettings;	// IMP=0x001000000007c34a
- (void)recomputeHacksAfterProfileChangesEffectiveUserSettings:(id)arg1 sendNotifications:(_Bool)arg2;	// IMP=0x001000000007c267
- (void)recomputeWebContentFilterEffectiveUserSettings:(id)arg1 outEffectiveChangeDetected:(_Bool *)arg2 outMechanismChangedDetected:(_Bool *)arg3;	// IMP=0x001000000007afae
- (id)recomputeAccountVPNAssociations;	// IMP=0x001000000007aecb
- (void)recomputeAppRulesForNetworkExtension;	// IMP=0x001000000007aec5
- (void)recomputeAppOptionsEffectiveUserSettings:(id)arg1 outEffectiveChangeDetected:(_Bool *)arg2;	// IMP=0x0010000000079d02
- (_Bool)applyEffectiveSettings:(id)arg1 toSettings:(id)arg2 withOldRestrictions:(id)arg3 newRestrictions:(id)arg4;	// IMP=0x0010000000079ab4
- (void)applyEffectiveSettings:(id)arg1 toOtherSubsystemsPasscode:(id)arg2 credentialSet:(id)arg3;	// IMP=0x00100000000797ac
- (void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4;	// IMP=0x001000000007900a
- (_Bool)_anyBoolRestrictionChangedInSet:(id)arg1 oldRestrictions:(id)arg2 newRestrictions:(id)arg3;	// IMP=0x0010000000078e76

@end

