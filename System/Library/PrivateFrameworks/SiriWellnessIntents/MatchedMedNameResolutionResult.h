//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface MatchedMedNameResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x00800000000024d0
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x00800000000023d0
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x00800000000022f0
+ (id)confirmationRequiredWithMatchedMedNameToConfirm:(id)arg1;	// IMP=0x0080000000002210
+ (id)disambiguationWithMatchedMedNamesToDisambiguate:(id)arg1;	// IMP=0x00800000000020c0
+ (id)successWithResolvedMatchedMedName:(id)arg1;	// IMP=0x0080000000001f30
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x0000000000002720

@end

