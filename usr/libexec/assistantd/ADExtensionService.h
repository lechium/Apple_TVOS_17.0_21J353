//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INSExtensionService, NSString;
@protocol ADCommandCenterClient;

@interface ADExtensionService
{
    INSExtensionService *_extensionService;	// 8 = 0x8
    id <ADCommandCenterClient> _commandCenterClient;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000013a646
@property(nonatomic) __weak id <ADCommandCenterClient> commandCenterClient; // @synthesize commandCenterClient=_commandCenterClient;
- (_Bool)_intentNeedsPreparation:(id)arg1;	// IMP=0x001000000013a4cd
- (_Bool)_prepareNameComponents:(id)arg1 meCardCache:(id *)arg2;	// IMP=0x0010000000139f62
- (_Bool)_preparePerson:(id)arg1 meCardCache:(id *)arg2;	// IMP=0x0010000000139b37
- (_Bool)_replacement:(id *)arg1 forString:(id)arg2 meCardCache:(id *)arg3;	// IMP=0x0010000000139874
- (id)_meCard;	// IMP=0x001000000013960a
- (id)_meCardWithCache:(id *)arg1;	// IMP=0x00100000001395c0
- (void)extensionService:(id)arg1 handleFailedStartPlaybackWithDestination:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013949b
- (void)extensionService:(id)arg1 prepareForStartPlaybackWithDestination:(long long)arg2 intent:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000013935e
- (id)extensionService:(id)arg1 contextDictionaryForError:(id)arg2;	// IMP=0x0010000000139351
- (id)extensionService:(id)arg1 contextDictionaryForCommand:(id)arg2;	// IMP=0x0010000000139344
- (void)extensionService:(id)arg1 requiresHandlingCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000139270
- (id)siriLanguageCodeForExtensionService:(id)arg1;	// IMP=0x0010000000139219
- (void)extensionService:(id)arg1 logEventWithType:(long long)arg2 context:(id)arg3 contextNoCopy:(_Bool)arg4;	// IMP=0x001000000013918d
- (void)extensionService:(id)arg1 handleIntentForwardingAction:(id)arg2 inBackgroundAppWithBundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001390ec
- (void)extensionService:(id)arg1 handleIntent:(id)arg2 inBackgroundAppWithBundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000013904b
- (void)extensionService:(id)arg1 extensionRequestDidFinishForApplication:(id)arg2 error:(id)arg3;	// IMP=0x0010000000138fc0
- (void)extensionService:(id)arg1 extensionRequestWillStartForApplication:(id)arg2;	// IMP=0x0010000000138f57
- (void)extensionService:(id)arg1 wantsToCacheImage:(id)arg2;	// IMP=0x0010000000138eee
- (void)extensionService:(id)arg1 processDataUsingSHA256WithInMemorySalt:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000138e5a
- (void)extensionService:(id)arg1 processData:(id)arg2 usingSecurityProcedure:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000138dca
- (void)extensionService:(id)arg1 suspendTimeout:(_Bool)arg2;	// IMP=0x0010000000138d79
- (void)extensionService:(id)arg1 prepareIntent:(id)arg2;	// IMP=0x0010000000138b79
- (void)cancelOperationsForRequestID:(id)arg1 forAssistantID:(id)arg2 fromRemote:(_Bool)arg3;	// IMP=0x0010000000138a78
- (void)resetExternalResources;	// IMP=0x00100000001389d4
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000013849b
- (id)controlCenterLockRestrictedCommands;	// IMP=0x0010000000138493
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x0010000000138416
- (id)commandsForDomain:(id)arg1;	// IMP=0x0010000000138334
- (id)domains;	// IMP=0x00100000001382a0
- (id)handle;	// IMP=0x0010000000138297
- (id)init;	// IMP=0x00100000001381f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
