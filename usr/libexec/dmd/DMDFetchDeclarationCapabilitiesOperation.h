//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDFetchDeclarationCapabilitiesOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x004000000004e1a1
+ (id)requiredEntitlements;	// IMP=0x001000000004e194
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000004e162
- (void)runWithRequest:(id)arg1;	// IMP=0x004000000004e1db
- (unsigned long long)queueGroup;	// IMP=0x001000000004e1d0

@end

