//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSSet, NSString, NSUUID, TUNearbyDeviceHandle;
@protocol TUNeighborhoodActivityConduitXPCClient;

@protocol TUNeighborhoodActivityConduitXPCServer <NSObject>
- (void)unregisterClient:(id <TUNeighborhoodActivityConduitXPCClient>)arg1;
- (void)registerClient:(id <TUNeighborhoodActivityConduitXPCClient>)arg1;
- (void)addConversationParticipantsWithAnonyms:(NSSet *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)getImageForContactIdentifier:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)getAddressableContactsWithCompletion:(void (^)(NSSet *, long long, NSError *))arg1;
- (void)startConversationWithAnonyms:(NSSet *)arg1 completion:(void (^)(NSUUID *, NSError *))arg2;
- (void)startConversationWithHandles:(NSSet *)arg1 completion:(void (^)(NSUUID *, NSError *))arg2;
- (void)cancelFaceTimeHandoffWithDevice:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)endContinuitySessionWithDevice:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)startContinuitySessionWithDevice:(NSString *)arg1 completion:(void (^)(TUContinuitySessionInfo *, NSError *))arg2;
- (void)getCurrentContinuitySessionWithCompletion:(void (^)(TUContinuitySessionInfo *, NSError *))arg1;
- (void)cancelPendingJoinRequest;
- (void)joinConversation:(NSUUID *)arg1 onDevice:(TUNearbyDeviceHandle *)arg2 withContext:(long long)arg3 completion:(void (^)(NSUUID *, NSError *))arg4;
- (void)getCurrentSplitSessionWithCompletion:(void (^)(TUSplitSessionInfo *))arg1;
- (void)fetchNearbyConversations:(void (^)(NSDictionary *, NSError *))arg1;
- (void)fetchNearbyConversationsForProfileIdentifier:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end

