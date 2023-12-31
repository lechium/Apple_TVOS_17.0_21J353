//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@class NSDictionary, NSNumber, NSString;

@interface ACAccount (MCCommunicationServiceRules)
@property(retain, nonatomic) NSDictionary *communicationServiceRules;
- (id)mcBackingPayload;	// IMP=0x0030000000092e70
- (id)mcBackingProfile;	// IMP=0x0030000000092bf8
@property(retain, nonatomic) NSNumber *mcEnableNotesUserOverridable;
@property(retain, nonatomic) NSNumber *mcEnableRemindersUserOverridable;
@property(retain, nonatomic) NSNumber *mcEnableCalendarsUserOverridable;
@property(retain, nonatomic) NSNumber *mcEnableContactsUserOverridable;
@property(retain, nonatomic) NSNumber *mcEnableMailUserOverridable;
@property(retain, nonatomic) NSNumber *mcEASAccountEnableNotes;
@property(retain, nonatomic) NSString *mcPayloadUUID;
@property(retain, nonatomic) NSString *mcProfileUUID;
@property(retain, nonatomic) NSString *mcConfigurationProfileIdentifier;
@property(retain, nonatomic) NSString *mcAccountIdentifier;
- (_Bool)MCIsManaged;	// IMP=0x0030000000091e51
- (void)unenrollAccountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00300000000c248e
- (_Bool)mc_isUserEnrollmentAccount;	// IMP=0x00300000000c2297
@end

