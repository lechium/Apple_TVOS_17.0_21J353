//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBCallInvite;

@protocol _INPBAddCallParticipantIntentResponse <NSObject>
+ (Class)invitesType;
@property(readonly, nonatomic) unsigned long long invitesCount;
@property(copy, nonatomic) NSArray *invites;
- (_INPBCallInvite *)invitesAtIndex:(unsigned long long)arg1;
- (void)addInvites:(_INPBCallInvite *)arg1;
- (void)clearInvites;
@end

