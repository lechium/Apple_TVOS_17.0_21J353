//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSUserActivity.h>

@class INInteraction, NSString;

@interface NSUserActivity (INCacheSupport)
+ (void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e2f7
+ (void)deleteInteractionsWithGroupIdentifier:(id)arg1;	// IMP=0x00100000000c9490
+ (void)deleteInteractionsWithIdentifiers:(id)arg1;	// IMP=0x00100000000c9475
+ (void)deleteAllInteractions;	// IMP=0x00100000000c945a
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00100000001237cf
@property(readonly, copy, nonatomic) NSString *cacheIdentifier;
- (void)generateCachePayloadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e0b0
- (id)_intents_copy;	// IMP=0x00100000000c9298
- (long long)_executionContext;	// IMP=0x00100000000c9216
- (void)_setExecutionContext:(long long)arg1;	// IMP=0x00100000000c91aa
- (_Bool)_isEligibleForPrediction;	// IMP=0x00100000000c91a2
- (void)_setEligibleForPrediction:(_Bool)arg1;	// IMP=0x00100000000c919c
- (void)_intentsPrepareForEncoding;	// IMP=0x00100000000c90ec
- (id)_intentsIdentifier;	// IMP=0x00100000000c8e7f
@property(nonatomic) unsigned long long shortcutAvailability;
@property(copy, nonatomic) NSString *suggestedInvocationPhrase;
- (void)setInteraction:(id)arg1;	// IMP=0x00100000000c8c86
- (void)_setAccessedInteraction:(_Bool)arg1;	// IMP=0x00100000000c8c2d
- (_Bool)_accessedInteraction;	// IMP=0x00100000000c8beb
- (_Bool)_hasInteraction;	// IMP=0x00100000000c8b9c
- (void)_setInteraction:(id)arg1 donate:(_Bool)arg2;	// IMP=0x00100000000c8aa9
@property(readonly, nonatomic) INInteraction *interaction;
- (void)_setAppIntent:(id)arg1;	// IMP=0x00100000000c8898
- (id)_appIntent;	// IMP=0x00100000000c873a
- (id)_initWithIntent:(id)arg1;	// IMP=0x00100000000c864d
- (void)setInInteraction:(id)arg1;	// IMP=0x00100000000c863b
- (id)inInteraction;	// IMP=0x00100000000c8629
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x0010000000123761

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

