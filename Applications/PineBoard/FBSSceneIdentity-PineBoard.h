//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBSSceneIdentity.h>

@interface FBSSceneIdentity (PineBoard)
+ (id)pb_CRDSceneIdentity;	// IMP=0x0020000000037c02
+ (id)pb_TVWatchListSceneIdentity;	// IMP=0x0010000000037afe
+ (id)pb_idleScreenSceneIdentity;	// IMP=0x00100000000379fa
+ (id)pb_kioskAppSceneIdentity;	// IMP=0x00100000000378ef
+ (id)pb_defaultKioskAppSceneIdentity;	// IMP=0x00100000000377eb
+ (id)pb_uniqueIdentityForApplicationIdentifier:(id)arg1 role:(id)arg2;	// IMP=0x001000000003746a
+ (id)pb_identityForApplicationIdentifier:(id)arg1 role:(id)arg2;	// IMP=0x001000000003716c
+ (id)_pb_defaultSceneIdentity;	// IMP=0x0010000000037d06
@property(readonly, nonatomic, getter=pb_isCRDSceneIdentity) _Bool pb_isCRDSceneIdentity;
@property(readonly, nonatomic, getter=pb_isTVWatchListSceneIdentity) _Bool pb_isTVWatchListSceneIdentity;
@property(readonly, nonatomic, getter=pb_isIdleScreenSceneIdentity) _Bool pb_isIdleScreenSceneIdentity;
@property(readonly, nonatomic, getter=pb_isKioskAppSceneIdentity) _Bool pb_isKioskAppSceneIdentity;
@property(readonly, nonatomic, getter=pb_isDefaultKioskAppSceneIdentity) _Bool pb_isDefaultKioskAppSceneIdentity;
@end

