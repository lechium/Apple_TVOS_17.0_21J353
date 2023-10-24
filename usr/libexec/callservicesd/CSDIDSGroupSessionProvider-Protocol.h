//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CSDIDSSessionProvider-Protocol.h"

@class NSArray, NSData, NSDictionary, NSSet, NSString, TUConversationActivitySessionContainer;
@protocol CSDIDSGroupSessionProviderDelegate;

@protocol CSDIDSGroupSessionProvider <CSDIDSSessionProvider>
@property(readonly, nonatomic) NSSet *requiredLackOfCapabilities;
@property(readonly, nonatomic) NSSet *requiredCapabilities;
@property(readonly, copy, nonatomic) NSString *destination;
@property(readonly, nonatomic) unsigned int endedReason;
@property(readonly, copy, nonatomic) NSArray *participantDestinationIDs;
@property(nonatomic) __weak id <CSDIDSGroupSessionProviderDelegate> delegate;
@property(readonly, nonatomic, getter=isAVLess) _Bool avLess;
- (void)setScreening:(_Bool)arg1;
- (void)setParticipantType:(unsigned short)arg1 forRemoteMemberDestinations:(NSArray *)arg2;
- (void)setLocalParticipantType:(unsigned short)arg1 memberDestinations:(NSArray *)arg2;
- (void)addRequiredCapabilities:(NSSet *)arg1 requiredLackOfCapabilities:(NSSet *)arg2;
- (void)participantIDForAlias:(unsigned long long)arg1 salt:(NSData *)arg2 completion:(void (^)(unsigned long long))arg3;
- (unsigned long long)participantIDForAlias:(unsigned long long)arg1 salt:(NSData *)arg2;
- (void)addAliasesToConversationContainer:(TUConversationActivitySessionContainer *)arg1 withSalt:(NSData *)arg2;
- (void)requestEncryptionKeyForParticipants:(NSArray *)arg1 topic:(NSString *)arg2;
- (void)requestDataCryptorForTopic:(NSString *)arg1 completionHandler:(void (^)(id))arg2;
- (void)registerPluginWithOptions:(NSDictionary *)arg1;
- (void)allowParticipants:(NSArray *)arg1;
- (void)kickParticipants:(NSArray *)arg1;
- (void)requestActiveParticipants;
- (void)reconnect;
- (void)restart;
- (void)leaveWithOptions:(NSDictionary *)arg1;
- (void)sendParticipantData:(NSData *)arg1 withContext:(NSData *)arg2;
- (void)updateParticipantDestinationIDs:(NSArray *)arg1 withContextData:(NSData *)arg2 requiredCapabilities:(NSArray *)arg3 requiredLackOfCapabilities:(NSArray *)arg4 triggeredLocally:(_Bool)arg5;
- (void)updateParticipantDestinationIDs:(NSArray *)arg1 withContextData:(NSData *)arg2 triggeredLocally:(_Bool)arg3;
- (void)joinWithOptions:(NSDictionary *)arg1;
- (void)setPreferences:(NSDictionary *)arg1;
@end

