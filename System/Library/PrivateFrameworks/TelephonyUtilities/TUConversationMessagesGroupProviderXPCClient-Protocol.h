//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSUUID;

@protocol TUConversationMessagesGroupProviderXPCClient <NSObject>
- (oneway void)getMessagesGroupDetailsForMessagesGroupUUID:(NSUUID *)arg1 completionHandler:(void (^)(NSString *, NSString *, NSError *))arg2;
@end
