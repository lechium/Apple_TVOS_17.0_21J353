//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKDialogProtocol-Protocol.h"
#import "SKMessageReceiverProtocol-Protocol.h"
#import "SKStatusReceiverProtocol-Protocol.h"
#import "SKTransactionReceiverProtocol-Protocol.h"

@class NSArray, NSDictionary, StorefrontInfo;

@protocol SKClientProtocol <SKStatusReceiverProtocol, SKTransactionReceiverProtocol, SKDialogProtocol, SKMessageReceiverProtocol>
- (void)receivedPurchaseIntentsForProductIdentifiers:(NSArray *)arg1;
- (void)updatedTransactions:(NSArray *)arg1;
- (void)storefrontChanged:(StorefrontInfo *)arg1;
- (void)removedTransactions:(NSArray *)arg1;
- (void)removedEntitlementsForProductIdentifiers:(NSArray *)arg1;
- (void)hasAnyMessageListenersWithReply:(void (^)(_Bool))arg1;
- (void)downloadStatusChanged:(NSDictionary *)arg1;
- (void)downloadRemoved:(NSDictionary *)arg1;
- (void)downloadAdded:(NSDictionary *)arg1;
- (void)askToShowMessageWithReplyBlock:(void (^)(_Bool, _Bool))arg1;
@end

