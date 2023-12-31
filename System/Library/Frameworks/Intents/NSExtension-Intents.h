//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtension.h>

@interface NSExtension (Intents)
+ (_Bool)appAllowedToTalkToSiri:(id)arg1;	// IMP=0x006000000034958c
+ (void)_findAppsWithAnyIntentsExtensionCheckingSiriEnabledUseFilter:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000349468
+ (void)_intents_findSiriEntitledAppsContainingAnIntentsExtensionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00600000003493d5
+ (void)_intents_findPossibleSiriEnabledAppsWithAnIntentsServiceExtension:(CDUnknownBlockType)arg1;	// IMP=0x00600000003493be
+ (void)_intents_findAppsWithAnIntentsServiceExtension:(CDUnknownBlockType)arg1;	// IMP=0x006000000034932b
+ (id)_extensionMatchingDictionaryForIntentClassNames:(id)arg1 extensionPointName:(id)arg2 launchId:(id)arg3;	// IMP=0x00600000003491b8
+ (id)_intents_uiExtensionMatchingAttributesForIntents:(id)arg1;	// IMP=0x006000000034919c
+ (id)_intents_extensionMatchingAttributesForIntents:(id)arg1;	// IMP=0x0060000000349180
+ (void)_matchExtensionsWithAttributes:(id)arg1 extensionPointName:(id)arg2 requireTrustCheck:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00600000003490c5
+ (void)_matchSnippetExtensionsWithExtensionPointName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000348f44
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(_Bool)arg3 shouldIgnoreLaunchId:(_Bool)arg4 requireTrustCheck:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00600000003489ff
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(_Bool)arg3 requireTrustCheck:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00600000003489de
+ (void)_intents_matchSiriUISnippetExtensionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0060000000348949
+ (void)_intents_matchSiriUIExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x006000000034889c
+ (void)_intents_matchSiriExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x006000000034886a
+ (void)_intents_matchUIExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00600000003487c0
+ (void)_intents_matchExtensionsForIntent:(id)arg1 requireTrustCheck:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0060000000348794
+ (void)_intents_matchExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000348765
+ (void)_intents_matchExtensionsForIntent:(id)arg1 shouldIgnoreLaunchId:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x006000000034873b
- (_Bool)_intents_extensionSupportsAtLeastOneSiriIntent;	// IMP=0x0010000000348615
- (id)_intents_intentsRestrictedWhileProtectedDataUnavailable;	// IMP=0x001000000034858a
@end

