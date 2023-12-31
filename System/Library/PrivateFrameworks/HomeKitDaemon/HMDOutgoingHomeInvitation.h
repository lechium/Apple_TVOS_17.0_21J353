//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDUser, NSArray, NSDate, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDOutgoingHomeInvitation
{
    struct os_unfair_lock_s _lock;	// 96 = 0x60
    NSArray *_operationIdentifiers;	// 104 = 0x68
    NSUUID *_uuid;	// 112 = 0x70
    HMDUser *_user;	// 120 = 0x78
    NSString *_inviteeDestinationAddress;	// 128 = 0x80
    NSUUID *_messageIdentifier;	// 136 = 0x88
    NSDate *_dateSent;	// 144 = 0x90
    NSNumber *_announceAccessLevel;	// 152 = 0x98
    NSString *_accessCode;	// 160 = 0xa0
    NSUUID *_pendingUserUUID;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000b00ba
- (void).cxx_destruct;	// IMP=0x00000000000af626
@property(retain, nonatomic) NSUUID *pendingUserUUID; // @synthesize pendingUserUUID=_pendingUserUUID;
@property(retain, nonatomic) NSString *accessCode; // @synthesize accessCode=_accessCode;
@property(retain, nonatomic) NSNumber *announceAccessLevel; // @synthesize announceAccessLevel=_announceAccessLevel;
@property(retain, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(readonly, nonatomic) NSUUID *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property(retain, nonatomic) NSString *inviteeDestinationAddress; // @synthesize inviteeDestinationAddress=_inviteeDestinationAddress;
@property(retain, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000000af22c
- (id)emptyModelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000000af170
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000000af019
- (void)_transactionOutgoingInvitationUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000000ae90a
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000000ae87b
@property(retain, nonatomic) NSArray *operationIdentifiers; // @synthesize operationIdentifiers=_operationIdentifiers;
- (void)updateInvitationState:(long long)arg1;	// IMP=0x00000000000ae749
- (void)notifyStateChangedForMessage:(id)arg1;	// IMP=0x00000000000ae387
- (_Bool)refreshDisplayName;	// IMP=0x00000000000ae268
- (void)updateUser:(id)arg1;	// IMP=0x00000000000ae262
- (id)describeWithFormat;	// IMP=0x00000000000ae12b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000adf57
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000add47
@property(readonly, nonatomic) NSArray *accessoryInvitationsInformation;
- (void)cancel;	// IMP=0x00000000000adcc0
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic) _Bool responseReceived;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)shortDescription;	// IMP=0x00000000000ad9e1
- (id)initWithUUID:(id)arg1 invitee:(id)arg2 invitationState:(long long)arg3 forHome:(id)arg4 expiryDate:(id)arg5 messageIdentifier:(id)arg6;	// IMP=0x00000000000ad85b
- (id)initWithInvitee:(id)arg1 invitationState:(long long)arg2 forHome:(id)arg3 expiryDate:(id)arg4 messageIdentifier:(id)arg5;	// IMP=0x00000000000ad832

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

