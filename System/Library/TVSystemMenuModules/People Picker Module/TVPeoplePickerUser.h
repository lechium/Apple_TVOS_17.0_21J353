//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersonNameComponents, NSString, PBSUserProfile, UIImage;

@interface TVPeoplePickerUser : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSPersonNameComponents *_personNameComponents;	// 16 = 0x10
    NSString *_formattedShortName;	// 24 = 0x18
    UIImage *_profilePhoto;	// 32 = 0x20
    PBSUserProfile *_userProfile;	// 40 = 0x28
    NSString *_firstName;	// 48 = 0x30
    NSString *_lastName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000041c0
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) PBSUserProfile *userProfile; // @synthesize userProfile=_userProfile;
@property(retain, nonatomic) UIImage *profilePhoto; // @synthesize profilePhoto=_profilePhoto;
@property(readonly, nonatomic) NSString *formattedShortName; // @synthesize formattedShortName=_formattedShortName;
@property(readonly, nonatomic) NSPersonNameComponents *personNameComponents; // @synthesize personNameComponents=_personNameComponents;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithUserProfile:(id)arg1;	// IMP=0x0000000000003e80

@end

