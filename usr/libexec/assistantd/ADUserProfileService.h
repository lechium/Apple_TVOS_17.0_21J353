//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet, NSSet, NSString, SAUserProfile;
@protocol OS_dispatch_queue;

@interface ADUserProfileService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SAUserProfile *_userProfileCommand;	// 16 = 0x10
    _Bool _isFetchingProfileNames;	// 24 = 0x18
    NSSet *_localUserProfileNames;	// 32 = 0x20
    NSMutableSet *_homeUserProfileNames;	// 40 = 0x28
    NSMutableSet *_namesToDelete;	// 48 = 0x30
    NSDictionary *_userProfiles;	// 56 = 0x38
    _Bool _needsProfileNameSync;	// 64 = 0x40
}

+ (id)sharedService;	// IMP=0x00200000001ebedd
- (void).cxx_destruct;	// IMP=0x00200000001eb01b
- (void)resetAllProfiles:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001eaf7c
- (void)mergeHomeProfileNamesWithNamesFromCloud:(id)arg1;	// IMP=0x00100000001eae54
- (void)refreshUserProfilesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ead49
- (id)getLocalProfileNames;	// IMP=0x00100000001eac90
- (id)getUserProfileAceCommand;	// IMP=0x00100000001eabd7
- (void)getUserProfileDictionariesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001eaacc
- (_Bool)userProfileExistsWithiCloudAltDSID:(id)arg1;	// IMP=0x00100000001ea979
- (id)dictionaryFromPBSUserProfile:(id)arg1;	// IMP=0x00100000001ea7c1
- (void)_setUserProfileAceCommand;	// IMP=0x00100000001ea751
- (void)_updateUserProfilesFromSnapshot:(id)arg1;	// IMP=0x00100000001ea3ea
- (_Bool)_postProfileUpdateNotificationsIfNeeded:(id)arg1;	// IMP=0x00100000001e9aa4
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x00100000001e9a17
- (void)_donateToVocabularyWithUserProfiles:(id)arg1;	// IMP=0x00100000001e9839
- (void)_loadProfileNamesFromCloudWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e972d
- (void)_addProfileNamesToSharedStore:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e9727
- (void)syncProfileNamesToCloudWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e9653
- (void)syncUserProfileNamesIfNeeded;	// IMP=0x00100000001e9608
- (id)_init;	// IMP=0x00000000001e9409
- (id)init;	// IMP=0x00100000001e9382

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

