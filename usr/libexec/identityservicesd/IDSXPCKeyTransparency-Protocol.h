//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IDSKTOptInOutRequest, KTSelfVerificationHealableErrors, NSArray, NSDictionary, NSString;

@protocol IDSXPCKeyTransparency <NSObject>
- (void)peerVerificationFinishedWithResults:(NSArray *)arg1;
- (void)registrationDataNeedsUpdate;
- (void)fetchKTRegistrationStatusWithCompletion:(void (^)(IDSKTRegistrationStatusProvider *))arg1;
- (void)sendOptInUpdateRequest:(IDSKTOptInOutRequest *)arg1 withCompletion:(void (^)(IDSKTOptInResult *))arg2;
- (void)sendOptInUpdateForApplications:(NSDictionary *)arg1 withCompletion:(void (^)(IDSKTOptInResult *))arg2;
- (void)getKeyTransparencyOptInEligiblityForApplication:(NSString *)arg1 withCompletion:(void (^)(_Bool, NSUUID *, NSError *))arg2;
- (void)healSelfForApplication:(NSString *)arg1 withHealableErrors:(KTSelfVerificationHealableErrors *)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)fetchSelfVerificationInfoForApplication:(NSString *)arg1 withCompletion:(void (^)(KTSelfVerificationInfo *, NSError *))arg2;
- (void)fetchPeerVerificationInfoForApplication:(NSString *)arg1 forURIs:(NSArray *)arg2 withCompletion:(void (^)(NSDictionary *, NSError *))arg3;
@end

