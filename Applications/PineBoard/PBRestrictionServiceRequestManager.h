//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, PBRestrictionServiceRequest, TVSStateMachine;

@interface PBRestrictionServiceRequestManager : NSObject
{
    TVSStateMachine *_stateMachine;	// 8 = 0x8
    NSMutableArray *_pendingServiceRequestsQueue;	// 16 = 0x10
    NSMutableDictionary *_pendingTokenToRequestMapping;	// 24 = 0x18
    PBRestrictionServiceRequest *_currentRequest;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x004000000018c12c
+ (void)initialize;	// IMP=0x001000000018c0e1
- (void).cxx_destruct;	// IMP=0x002000000018fbc4
@property(retain, nonatomic) PBRestrictionServiceRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(readonly, nonatomic) NSMutableDictionary *pendingTokenToRequestMapping; // @synthesize pendingTokenToRequestMapping=_pendingTokenToRequestMapping;
@property(readonly, nonatomic) NSMutableArray *pendingServiceRequestsQueue; // @synthesize pendingServiceRequestsQueue=_pendingServiceRequestsQueue;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (_Bool)_isSettingRestrictedByProfile:(unsigned long long)arg1;	// IMP=0x001000000018faf6
- (_Bool)_isContentTypeRestrictedByProfile:(unsigned long long)arg1;	// IMP=0x001000000018f965
- (_Bool)_isContentType:(unsigned long long)arg1 allowedWithRating:(id)arg2;	// IMP=0x001000000018f7e3
- (_Bool)_isBooleanSettingType:(unsigned long long)arg1;	// IMP=0x001000000018f7c9
- (id)_featureNameForSetting:(unsigned long long)arg1;	// IMP=0x001000000018f784
- (id)_featureNameForContentType:(unsigned long long)arg1;	// IMP=0x001000000018f758
- (id)_dequeueNextServiceRequest;	// IMP=0x001000000018f631
- (void)_enqueueIncomingRequest:(id)arg1;	// IMP=0x001000000018f4bc
- (void)_validatePINWithRequest:(id)arg1 postCompletionEvent:(_Bool)arg2;	// IMP=0x001000000018f352
- (void)_checkRestrictionSettingWithRequest:(id)arg1;	// IMP=0x001000000018f214
- (void)_authorizeRestrictionsWithRequest:(id)arg1;	// IMP=0x001000000018efaf
- (void)_validateRestrictionForSettingWithRequest:(id)arg1;	// IMP=0x001000000018eb88
- (void)_validateRestrictionForContentTypesWithRequest:(id)arg1;	// IMP=0x001000000018e713
- (void)_initializeRestrictionServiceStateMachine;	// IMP=0x001000000018c83c
- (void)cancelRequestWithToken:(id)arg1;	// IMP=0x001000000018c75a
- (void)authorizeRestrictionsWithRequest:(id)arg1;	// IMP=0x001000000018c678
- (void)checkRestrictionSettingWithRequest:(id)arg1;	// IMP=0x001000000018c596
- (void)validateRestrictionForSettingWithRequest:(id)arg1;	// IMP=0x001000000018c4b4
- (_Bool)requestPassesAgeRestriction:(id)arg1;	// IMP=0x001000000018c428
- (void)validateRestrictionForContentTypesWithRequest:(id)arg1;	// IMP=0x001000000018c346
- (void)validatePINWithRequest:(id)arg1;	// IMP=0x001000000018c264
- (id)_init;	// IMP=0x001000000018c1a1
- (id)init;	// IMP=0x001000000018c193

@end

