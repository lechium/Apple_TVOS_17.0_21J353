//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSEnvironment;

@interface APSTokenStore : NSObject
{
    APSEnvironment *_environment;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000be00
@property(retain, nonatomic) APSEnvironment *environment; // @synthesize environment=_environment;
- (id)_copyTokenForDomain:(id)arg1 appSpecificIdentifier:(id)arg2 tokenServiceSuffix:(id)arg3 user:(id)arg4;	// IMP=0x001000000000b790
- (id)copyTokenForDomain:(id)arg1 appSpecificIdentifier:(id)arg2 tokenServiceSuffix:(id)arg3 user:(id)arg4;	// IMP=0x001000000000b6cf
- (void)deleteAppSpecificTokensWithDomain:(id)arg1 tokenServiceSuffix:(id)arg2 user:(id)arg3;	// IMP=0x001000000000b462
- (void)setToken:(struct __CFData *)arg1 withDomain:(id)arg2 appSpecificIdentifier:(id)arg3 tokenServiceSuffix:(id)arg4 user:(id)arg5 topic:(id)arg6;	// IMP=0x001000000000b010
- (void)deleteAppSpecificTokensWithDomain:(id)arg1 forTopic:(id)arg2 user:(id)arg3;	// IMP=0x001000000000aec6
- (id)_copyHashForString:(id)arg1;	// IMP=0x001000000000aeb0
- (void)deleteAppSpecificTokensWithRefArray:(id)arg1;	// IMP=0x001000000000ac6f
- (id)copyAppSpecificIdentifierWithTopic:(id)arg1 identifier:(id)arg2 user:(id)arg3;	// IMP=0x001000000000abe2
- (id)copyAppSpecificTokensWithDomain:(id)arg1 forTopic:(id)arg2 tokenServiceSuffix:(id)arg3 user:(id)arg4 returnRef:(_Bool)arg5 error:(id *)arg6;	// IMP=0x001000000000a385
- (id)copyAppSpecificTokensWithDomain:(id)arg1 forTopic:(id)arg2 user:(id)arg3 returnRef:(_Bool)arg4 error:(id *)arg5;	// IMP=0x001000000000a35d
- (_Bool)isAppSpecificTokenValidWithDomain:(id)arg1 token:(id)arg2 tokenServiceSuffix:(id)arg3 user:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000009d17
- (_Bool)isAppSpecificTokenValidWithDomain:(id)arg1 token:(id)arg2 user:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000009bf3
- (id)deserializedPersistedData:(id)arg1 withType:(long long)arg2 outPersistedInfo:(id *)arg3;	// IMP=0x0010000000009982
- (id)deserializedPersistedData:(id)arg1 forInfo:(id)arg2 outPersistedInfo:(id *)arg3;	// IMP=0x0010000000009881
- (id)serializeInfo:(id)arg1 withToken:(id)arg2;	// IMP=0x0010000000009755
- (id)suffixForInfo:(id)arg1;	// IMP=0x0010000000009725
- (_Bool)isMatchingTokenInKeychain:(id)arg1 user:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000009670
- (id)tokenInfoArrayForTopic:(id)arg1 user:(id)arg2;	// IMP=0x00100000000093fa
- (id)tokensForTopic:(id)arg1 user:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000008f5f
- (id)tokenForInfo:(id)arg1 user:(id)arg2 persistedInfo:(id *)arg3;	// IMP=0x0010000000008da9
- (void)setToken:(id)arg1 forInfo:(id)arg2 user:(id)arg3;	// IMP=0x0010000000008ab3
- (void)deleteAppTokensForUser:(id)arg1;	// IMP=0x00100000000089b6
- (id)systemTokenForUser:(id)arg1;	// IMP=0x0010000000008911
- (void)setSystemToken:(id)arg1 forUser:(id)arg2;	// IMP=0x0010000000008854
- (id)initWithEnvironment:(id)arg1;	// IMP=0x00100000000087e9

@end

