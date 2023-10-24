//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PBUserProfilesArchive : NSObject
{
    unsigned long long _version;	// 8 = 0x8
    NSDictionary *_userProfiles;	// 16 = 0x10
    NSDictionary *_homeUsersIdentifiers;	// 24 = 0x18
    NSDictionary *_groupRecommendationsSessions;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001a0a91
+ (id)archiveWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000001a0373
- (void).cxx_destruct;	// IMP=0x00200000001a0d0f
@property(readonly, nonatomic) NSDictionary *groupRecommendationsSessions; // @synthesize groupRecommendationsSessions=_groupRecommendationsSessions;
@property(readonly, nonatomic) NSDictionary *homeUsersIdentifiers; // @synthesize homeUsersIdentifiers=_homeUsersIdentifiers;
@property(readonly, nonatomic) NSDictionary *userProfiles; // @synthesize userProfiles=_userProfiles;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
- (id)succinctDescriptionBuilder;	// IMP=0x00100000001a0cc2
- (id)succinctDescription;	// IMP=0x00100000001a0c71
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00100000001a0c20
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000001a0a99
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001a0977
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001a05a8
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000001a0183
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithUserProfiles:(id)arg1 homeUsersIdentifiers:(id)arg2 groupRecommendationSessions:(id)arg3;	// IMP=0x001000000019ffa9

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
