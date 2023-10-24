//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDInstallConfigurationOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000050d26
+ (id)requiredEntitlements;	// IMP=0x0010000000050d0e
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000050cdc
+ (id)_intersectionAliasToFeatures;	// IMP=0x0010000000052f03
- (unsigned long long)queueGroup;	// IMP=0x0010000000050d1b
- (id)_intersectionFeatureForPayloadRestrictionKey:(id)arg1;	// IMP=0x0010000000052fb9
- (id)_applyHeuristicsToRestrictions:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000052d99
- (id)_mapMCRestrictionsFromPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000051cd8
- (_Bool)_installRestrictionsPayload:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000519d5
- (void)_rollbackProfile:(id)arg1 withRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005176a
- (_Bool)_installProfile:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000513da
- (void)runWithRequest:(id)arg1;	// IMP=0x0010000000050e50

@end
