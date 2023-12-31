//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMActionSet.h>

@class HFImageIconDescriptor, NSDate, NSSet, NSString, NSUUID, UIColor;

@interface HMActionSet (HFFavoritableAdoption)
+ (id)hf_standardSystemIconIdentifierForActionSetType:(id)arg1;	// IMP=0x00100000001c3ee0
- (id)hf_updateShowInHomeDashboard:(_Bool)arg1;	// IMP=0x001000000006a048
@property(readonly, nonatomic) _Bool hf_effectiveShowInHomeDashboard;
@property(readonly, nonatomic) _Bool hf_hasSetShowInHomeDashboard;
@property(readonly, nonatomic) _Bool hf_showInHomeDashboard;
- (id)hf_updateIsFavorite:(_Bool)arg1;	// IMP=0x0010000000069fdc
@property(readonly, nonatomic) _Bool hf_effectiveIsFavorite;
@property(readonly, nonatomic) _Bool hf_shouldShowInFavorites;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00100000000b024f
- (_Bool)hf_isShortcutOwned;	// IMP=0x00100000001c4740
- (id)hf_shortcutAction;	// IMP=0x00100000001c4657
- (id)hf_standardIconTintColorForIconIdentifier:(id)arg1;	// IMP=0x00100000001c4294
- (id)hf_mapOldIconIdentifierToNewSystemIconIdentifier:(id)arg1;	// IMP=0x00100000001c405c
- (id)hf_setIconIdentifier:(id)arg1 andTintColor:(id)arg2;	// IMP=0x00100000001c3c7d
@property(readonly, nonatomic) UIColor *hf_iconTintColor;
@property(readonly, nonatomic) HFImageIconDescriptor *hf_iconDescriptor;
- (id)_hf_iconIdentifier;	// IMP=0x00100000001c38e7
- (float)hf_percentOfAccessoryRepresentableObjectsAssociatedWithGroup:(id)arg1;	// IMP=0x00100000001c36f7
@property(readonly, nonatomic) _Bool hf_requiresDeviceUnlock;
@property(readonly, nonatomic) _Bool hf_isBuilder;
- (_Bool)hf_isAnonymous;	// IMP=0x00100000001c3591
- (id)hf_affectedAccessoryRepresentableObjects;	// IMP=0x00100000001c32bf
- (_Bool)hf_affectsServiceWithIdentifier:(id)arg1;	// IMP=0x00100000001c3175
- (id)hf_affectedServices;	// IMP=0x00100000001c2e86
- (id)hf_affectedProfiles;	// IMP=0x00100000001c2ba3
- (id)hf_affectedMediaSessions;	// IMP=0x00100000001c2920
- (id)hf_affectedCharacteristics;	// IMP=0x00100000001c26e3
@property(readonly, copy, nonatomic) NSSet *hf_characteristicWriteActions;
- (id)hf_updateValue:(_Bool)arg1 forContextType:(unsigned long long)arg2;	// IMP=0x00100000001cafee
- (_Bool)hf_shouldHideForContextType:(unsigned long long)arg1;	// IMP=0x00100000001cafde
- (_Bool)hf_shouldBeOnForContextType:(unsigned long long)arg1;	// IMP=0x00100000001cae6c
- (_Bool)hf_hasSetForContextType:(unsigned long long)arg1;	// IMP=0x00100000001cad33
- (_Bool)hf_isOnForContextType:(unsigned long long)arg1;	// IMP=0x00100000001cabd7
- (void)hf_updateApplicationData:(id)arg1 handleError:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002530ca
- (void)_hf_didUpdateApplicationData:(id)arg1;	// IMP=0x0010000000252f7a
- (id)hf_updateDateAdded:(id)arg1;	// IMP=0x001000000031b948
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, copy, nonatomic) NSString *hf_displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

