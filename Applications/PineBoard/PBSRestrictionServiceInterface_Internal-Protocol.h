//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PBSRestrictionServiceInterface-Protocol.h"

@class PBSUserProfile;

@protocol PBSRestrictionServiceInterface_Internal <PBSRestrictionServiceInterface>
- (void)setUser:(PBSUserProfile *)arg1 canBypassRestrictionsUsingCompanionDevice:(_Bool)arg2;
- (void)canUserBypassRestrictionsUsingCompanionDevice:(PBSUserProfile *)arg1 result:(void (^)(_Bool))arg2;
@end

