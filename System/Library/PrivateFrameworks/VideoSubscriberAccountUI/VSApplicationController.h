//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JSValue, NSArray, NSError, NSOperationQueue, NSString, NSURL, VSAppDocumentController, VSApplication, VSApplicationControllerResponseHandler, VSAuditToken, VSIdentityProvider, VSPreferences, VSStateMachine;
@protocol VSApplicationControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSApplicationController : NSObject
{
    _Bool _applicationMustSelfValidate;	// 8 = 0x8
    _Bool _allowUI;	// 9 = 0x9
    id <VSApplicationControllerDelegate> _delegate;	// 16 = 0x10
    VSIdentityProvider *_identityProvider;	// 24 = 0x18
    NSArray *_userAccounts;	// 32 = 0x20
    NSString *_accountProviderAuthenticationToken;	// 40 = 0x28
    VSAuditToken *_auditToken;	// 48 = 0x30
    VSStateMachine *_stateMachine;	// 56 = 0x38
    NSError *_delegateError;	// 64 = 0x40
    NSError *_onLaunchError;	// 72 = 0x48
    NSURL *_fetchedURL;	// 80 = 0x50
    NSOperationQueue *_privateQueue;	// 88 = 0x58
    VSApplication *_application;	// 96 = 0x60
    VSApplicationControllerResponseHandler *_responseHandler;	// 104 = 0x68
    VSAppDocumentController *_appDocumentController;	// 112 = 0x70
    JSValue *_applicationReadyCallback;	// 120 = 0x78
    VSPreferences *_preferences;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000037c4c
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) _Bool allowUI; // @synthesize allowUI=_allowUI;
@property(nonatomic) _Bool applicationMustSelfValidate; // @synthesize applicationMustSelfValidate=_applicationMustSelfValidate;
@property(retain, nonatomic) JSValue *applicationReadyCallback; // @synthesize applicationReadyCallback=_applicationReadyCallback;
@property(retain, nonatomic) VSAppDocumentController *appDocumentController; // @synthesize appDocumentController=_appDocumentController;
@property(retain, nonatomic) VSApplicationControllerResponseHandler *responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain) VSApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) NSURL *fetchedURL; // @synthesize fetchedURL=_fetchedURL;
@property(retain) NSError *onLaunchError; // @synthesize onLaunchError=_onLaunchError;
@property(retain) NSError *delegateError; // @synthesize delegateError=_delegateError;
@property(retain, nonatomic) VSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) NSString *accountProviderAuthenticationToken; // @synthesize accountProviderAuthenticationToken=_accountProviderAuthenticationToken;
@property(retain, nonatomic) NSArray *userAccounts; // @synthesize userAccounts=_userAccounts;
@property(retain, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
@property(nonatomic) __weak id <VSApplicationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_makeJavaScriptRequest;	// IMP=0x00000000000379e4
- (id)_errorForJavascriptErrorValueValue:(id)arg1 withRequest:(id)arg2;	// IMP=0x000000000003754c
- (id)_javascriptRequestForRequest:(id)arg1 withVerificationData:(id)arg2;	// IMP=0x0000000000037298
- (void)_makeJavascriptRequestForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036fb0
- (id)_applicationControllerAlertForJavascriptAlert:(id)arg1;	// IMP=0x0000000000036a5e
- (id)_applicationLaunchParams;	// IMP=0x0000000000036636
- (id)_bootURL;	// IMP=0x000000000003658f
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000364de
- (void)_notifyStartDidFailWithError:(id)arg1;	// IMP=0x00000000000363eb
- (void)_notifyDidStart;	// IMP=0x0000000000036341
- (void)_notifyRequest:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000036229
- (void)_notifyDidReceiveViewModelError:(id)arg1;	// IMP=0x0000000000036136
- (void)_notifyDidReceiveViewModel:(id)arg1;	// IMP=0x0000000000036043
- (void)_notifyRequest:(id)arg1 didCompleteWithResponse:(id)arg2;	// IMP=0x0000000000035f2b
- (void)_completeRequest:(id)arg1 withResult:(id)arg2;	// IMP=0x0000000000035b95
- (void)_completeRequest:(id)arg1 withJavascriptResponse:(id)arg2 javascriptErrorValue:(id)arg3;	// IMP=0x000000000003589c
- (void)_applicationReadyWithSuccess:(_Bool)arg1 javascriptErrorValue:(id)arg2;	// IMP=0x0000000000035559
- (void)_submitJavascriptRequest:(id)arg1 forApplicationControllerRequest:(id)arg2;	// IMP=0x0000000000034db1
- (void)_cancelValidation;	// IMP=0x0000000000034cd1
- (void)_beginAuthentication;	// IMP=0x0000000000034b60
- (void)_presentAlert:(id)arg1;	// IMP=0x0000000000034965
- (void)_presentDocument:(id)arg1;	// IMP=0x00000000000343e9
- (void)appDocumentController:(id)arg1 didFailToUpdateViewModelWithError:(id)arg2;	// IMP=0x0000000000034372
- (void)appDocumentController:(id)arg1 didUpdateViewModel:(id)arg2;	// IMP=0x00000000000342b3
- (id)activeAppDocumentForApplication:(id)arg1;	// IMP=0x0000000000034263
- (id)launchParamsForApplication:(id)arg1;	// IMP=0x0000000000034251
- (void)application:(id)arg1 startDidFailWithError:(id)arg2;	// IMP=0x00000000000341c8
- (void)applicationDidStart:(id)arg1;	// IMP=0x0000000000034184
- (void)application:(id)arg1 evaluateAppJavascriptInContext:(id)arg2;	// IMP=0x000000000003349c
- (void)applicationStartSelfValidationWithAuthenticationToken:(id)arg1;	// IMP=0x00000000000330c6
- (void)submitRequest:(id)arg1;	// IMP=0x0000000000032f0d
- (void)showAuthenticationUserInterfaceWithAuthenticationToken:(id)arg1;	// IMP=0x0000000000032933
- (void)sendErrorMessage:(id)arg1;	// IMP=0x00000000000328ca
- (void)stop;	// IMP=0x00000000000327f4
- (void)start;	// IMP=0x00000000000327b0
- (void)transitionToInvalidState;	// IMP=0x00000000000326b7
- (void)transitionToNotifyingOfLaunchFailureState;	// IMP=0x0000000000032428
- (void)transitionToReadyState;	// IMP=0x00000000000323cb
- (void)transitionToWaitingForBothLaunchCallbacksState;	// IMP=0x0000000000031810
- (void)transitionToWaitingForBootUrlState;	// IMP=0x00000000000312f5
- (void)dealloc;	// IMP=0x0000000000031244
- (id)initWithIdentityProvider:(id)arg1;	// IMP=0x0000000000030de7
- (id)init;	// IMP=0x0000000000030d78
- (oneway void)release;	// IMP=0x000000000001b777

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

