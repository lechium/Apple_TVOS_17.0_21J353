//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallHistory/CHRecentCall.h>

@class NSString, NSUUID;

@interface CHRecentCall (CSD)
+ (id)predicateForFilteringOutFaceTimeAudioCalls;	// IMP=0x002000000012cac9
- (id)provider;	// IMP=0x002000000012ca42
- (id)initWithConversation:(id)arg1 startDate:(id)arg2;	// IMP=0x001000000012c594
- (id)initWithCall:(id)arg1;	// IMP=0x001000000012b5b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSUUID *localParticipantUUID;
@property(retain, nonatomic) NSUUID *outgoingLocalParticipantUUID;
@property(readonly) Class superclass;
@end
