//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString, TUConversation, TUConversationParticipant;

@protocol TUConversationReactionsControllerXPCClient <NSObject>
- (oneway void)conversation:(TUConversation *)arg1 participantDidStopReacting:(TUConversationParticipant *)arg2;
- (oneway void)conversation:(TUConversation *)arg1 participant:(TUConversationParticipant *)arg2 didReact:(NSString *)arg3;
@end

