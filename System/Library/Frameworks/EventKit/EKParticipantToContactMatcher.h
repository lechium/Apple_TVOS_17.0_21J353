//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface EKParticipantToContactMatcher : NSObject
{
    NSArray *_contacts;	// 8 = 0x8
    NSSet *_contactEmailAddresses;	// 16 = 0x10
    NSSet *_contactNameComponents;	// 24 = 0x18
    NSSet *_contactCompanyNames;	// 32 = 0x20
}

+ (id)_allParticipantsOnItem:(id)arg1;	// IMP=0x00600000000395e7
+ (id)_nameComponentsWithGivenName:(id)arg1 familyName:(id)arg2;	// IMP=0x00600000000394bd
+ (id)_nameComponentsForContact:(id)arg1 reverse:(_Bool)arg2;	// IMP=0x00600000000393db
- (void).cxx_destruct;	// IMP=0x0000000000039dc7
@property(retain, nonatomic) NSSet *contactCompanyNames; // @synthesize contactCompanyNames=_contactCompanyNames;
@property(retain, nonatomic) NSSet *contactNameComponents; // @synthesize contactNameComponents=_contactNameComponents;
@property(retain, nonatomic) NSSet *contactEmailAddresses; // @synthesize contactEmailAddresses=_contactEmailAddresses;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (_Bool)anyContactMatchesParticipant:(id)arg1;	// IMP=0x0000000000039ad4
- (id)matchingParticipantsFromParticipants:(id)arg1;	// IMP=0x0000000000039926
- (id)matchingParticipantsFromItem:(id)arg1;	// IMP=0x000000000003989b
- (_Bool)anyContactMatchesAnyParticipant:(id)arg1;	// IMP=0x0000000000039745
- (_Bool)anyContactMatchesAnyParticipantFromItem:(id)arg1;	// IMP=0x00000000000396c8
- (void)_cacheContactData;	// IMP=0x0000000000038dd9
- (id)initWithContacts:(id)arg1;	// IMP=0x0000000000038d5e

@end
