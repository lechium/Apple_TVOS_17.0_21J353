//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/AKAppleIDAuthenticationController.h>

@class TVSettingsUserProfilesValidator;

@interface TVSettingsUserProfileAppleIDAuthenticationController : AKAppleIDAuthenticationController
{
    long long _userProfileAuthenticationType;	// 8 = 0x8
    TVSettingsUserProfilesValidator *_validator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000008561c
@property(retain, nonatomic) TVSettingsUserProfilesValidator *validator; // @synthesize validator=_validator;
@property(nonatomic) long long userProfileAuthenticationType; // @synthesize userProfileAuthenticationType=_userProfileAuthenticationType;
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008503d
- (id)initWithUserProfileAuthenticationType:(long long)arg1;	// IMP=0x0010000000084fce

@end

