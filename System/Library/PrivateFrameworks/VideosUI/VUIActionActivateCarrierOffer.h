//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIActionActivateCarrierOffer
{
    NSString *_linkParams;	// 8 = 0x8
    NSString *_productCode;	// 16 = 0x10
    NSDictionary *_additionalParams;	// 24 = 0x18
    NSString *_notificationTitle;	// 32 = 0x20
    NSString *_notificationBody;	// 40 = 0x28
    NSString *_canonicalID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009b628
@property(retain, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(retain, nonatomic) NSString *notificationBody; // @synthesize notificationBody=_notificationBody;
@property(retain, nonatomic) NSString *notificationTitle; // @synthesize notificationTitle=_notificationTitle;
@property(retain, nonatomic) NSDictionary *additionalParams; // @synthesize additionalParams=_additionalParams;
@property(retain, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(retain, nonatomic) NSString *linkParams; // @synthesize linkParams=_linkParams;
- (void)_notifyDidEndActivationWithError:(id)arg1;	// IMP=0x000000000009b348
- (void)_notifyDidStartActivation;	// IMP=0x000000000009b1d6
- (void)_showUIConfirmationForSubTransactionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009b052
- (id)_configurePreflightManager;	// IMP=0x000000000009afcc
- (void)handleDialogRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009ab5c
- (void)handleAuthenticateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009a7af
- (void)handleEngagementRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009a52e
- (void)_handleActivationSuccessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000009a0e5
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000099c3a
- (void)_activateOfferWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000099954
- (_Bool)isAccountRequired;	// IMP=0x000000000009994c
- (id)initWithContextData:(id)arg1;	// IMP=0x00000000000997b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

