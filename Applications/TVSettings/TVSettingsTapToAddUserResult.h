//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PBSUserProfile;

@interface TVSettingsTapToAddUserResult : NSObject
{
    _Bool _isVoiceProfileAvailable;	// 8 = 0x8
    PBSUserProfile *_userProfile;	// 16 = 0x10
    NSArray *_homeUserInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000006ec0e
@property(readonly, nonatomic) NSArray *homeUserInfo; // @synthesize homeUserInfo=_homeUserInfo;
@property(readonly, nonatomic) _Bool isVoiceProfileAvailable; // @synthesize isVoiceProfileAvailable=_isVoiceProfileAvailable;
@property(readonly, nonatomic) PBSUserProfile *userProfile; // @synthesize userProfile=_userProfile;
- (id)initWithUserProfile:(id)arg1 isVoiceProfileAvailable:(_Bool)arg2 homeUserInfo:(id)arg3;	// IMP=0x001000000006eb4e

@end

