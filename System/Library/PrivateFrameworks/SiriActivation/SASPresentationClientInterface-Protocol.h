//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AFBulletin, NSArray, NSError, NSString, SASPresentationState, SiriPresentationIdentifierTransport;
@protocol __AFBulletin__;

@protocol SASPresentationClientInterface
- (oneway void)pong;
- (oneway void)speechRequestCancelledFromSiriOrb;
- (oneway void)speechRequestStartedFromSiriOrb;
- (AFBulletin *)bulletinForIdentifier:(NSString *)arg1;
- (NSArray<__AFBulletin__> *)bulletinsOnLockScreen;
- (NSArray<__AFBulletin__> *)allBulletins;
- (oneway void)didUpdatePresentationState:(SASPresentationState *)arg1;
- (oneway void)failedToPresentSiriWithError:(NSError *)arg1;
- (oneway void)resetSiriToActive;
- (oneway void)didPresentSiri;
- (oneway void)didDismiss;
- (oneway void)willDismiss;
- (oneway void)unregisterPresentationIdentifier:(SiriPresentationIdentifierTransport *)arg1;
- (oneway void)registerPresentationIdentifier:(SiriPresentationIdentifierTransport *)arg1;
@end

