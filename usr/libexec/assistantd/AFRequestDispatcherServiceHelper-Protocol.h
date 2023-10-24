//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AFServiceHelper-Protocol.h"

@class AFCommandExecutionInfo, AFDictationNLUResult, AFRequestInfo, AFSpeechPackage, NSArray, NSDictionary, NSError, NSSet, NSString, SABaseCommand, SASResultCandidate, SASSpeechRecognized, SASSpeechServerEndpointIdentified;

@protocol AFRequestDispatcherServiceHelper <AFServiceHelper>
- (void)handleCommand:(SABaseCommand *)arg1 withExecutionContextMatchingInfo:(AFCommandExecutionInfo *)arg2 completion:(void (^)(SABaseCommand *, NSError *))arg3;

@optional
- (void)submitExternalActivationRequest:(AFRequestInfo *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)notifySpeechDetectedIsUndirected;
- (void)handleSpeechRecognized:(SASSpeechRecognized *)arg1 completion:(void (^)(SABaseCommand *, NSError *))arg2;
- (void)handleSpeechServerEndpointIdentified:(SASSpeechServerEndpointIdentified *)arg1 completion:(void (^)(SABaseCommand *, NSError *))arg2;
- (void)selectResultWithResultCandidate:(SASResultCandidate *)arg1 completion:(void (^)(SABaseCommand *, NSError *))arg2;
- (void)didRecognizeVoiceCommandCandidatePackage:(AFSpeechPackage *)arg1 nluResult:(AFDictationNLUResult *)arg2 sessionUUID:(NSString *)arg3;
- (void)didRecognizePackage:(AFSpeechPackage *)arg1 nluResult:(AFDictationNLUResult *)arg2 sessionUUID:(NSString *)arg3;
- (void)didRecognizePartialPackage:(AFSpeechPackage *)arg1 nluResult:(AFDictationNLUResult *)arg2 sessionUUID:(NSString *)arg3;
- (void)didRecognizeTokens:(NSArray *)arg1 nluResult:(AFDictationNLUResult *)arg2 sessionUUID:(NSString *)arg3;
- (void)didCompleteRecognitionWithError:(NSError *)arg1 secureOfflineOnlyRecognition:(_Bool)arg2 sessionUUID:(NSString *)arg3 statistics:(NSDictionary *)arg4;
- (void)didRecognizePackage:(AFSpeechPackage *)arg1 sessionUUID:(NSString *)arg2;
- (void)didRecognizeFinalResultCandidatePackage:(AFSpeechPackage *)arg1 sessionUUID:(NSString *)arg2;
- (void)didRecognizeTokens:(NSArray *)arg1 sessionUUID:(NSString *)arg2;
- (void)fetchContextsForKeys:(NSSet *)arg1 forRequestID:(NSString *)arg2 includesNearbyDevices:(_Bool)arg3 completion:(void (^)(NSArray *))arg4;
@end

