//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SABaseClientBoundCommand (ADTimerTransformer)
- (id)_ad_timerResponseForResponse:(id)arg1;	// IMP=0x00200000000811f7
- (id)_ad_timerRequestRepresentation;	// IMP=0x00100000000811ef
- (id)_ad_transformedHealthSuccessResponse;	// IMP=0x00100000000a042c
- (id)_ad_transformedShowActivityRequest;	// IMP=0x00100000000a0424
- (id)_ad_transformedMailSuccessResponse;	// IMP=0x00100000000ac610
- (id)_ad_transformedSendEmailRequest;	// IMP=0x00100000000ac608
- (id)_ad_transformedMapsSuccessResponse;	// IMP=0x00100000000fd584
- (id)_ad_transformedMapsRequest;	// IMP=0x00100000000fd57c
- (void)_ad_handleAppLaunchCommandWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001160f8
- (id)_ad_replyCommandValue;	// IMP=0x00100000001180cb
- (void)_ad_getMessagesRequestValueWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001180b5
- (id)_ad_transformedWorkoutSuccessResponse;	// IMP=0x001000000012dc9d
- (id)_ad_transformedWorkoutRequest;	// IMP=0x001000000012dc95
- (id)_ad_aceSettingsResponseCommandRepresentationForSiriResponse:(id)arg1;	// IMP=0x00100000001d7557
- (id)_ad_settingsRequestRepresentation;	// IMP=0x00100000001d74cf
- (_Bool)ad_hasCallbacks;	// IMP=0x00100000001daeb7
- (id)ad_callbacks;	// IMP=0x00100000001daea5
- (id)_ad_alarmResponseForResponse:(id)arg1;	// IMP=0x00100000001f8844
- (void)_ad_getAlarmRequestRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f8834
- (id)ad_aceResponseCommandGenericErrorRepresentation;	// IMP=0x0010000000258719
- (id)ad_aceResponseCommandRepresentationWithErrorCode:(long long)arg1 reason:(id)arg2;	// IMP=0x001000000025866d
- (id)_ad_preheatableDomain;	// IMP=0x00100000002975ab
- (void)_ad_handleAceDomainSignalRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000029748d
- (void)_ad_getOTTRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a539a
- (id)ad_OTTRequestRepresentation;	// IMP=0x00100000002a52ff
- (_Bool)ad_requiresResponse;	// IMP=0x00100000002f73fa
@end
