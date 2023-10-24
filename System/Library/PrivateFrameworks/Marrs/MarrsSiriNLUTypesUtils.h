//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MarrsSiriNLUTypesUtils : NSObject
{
}

+ (id)interactionFromTokenValues:(id)arg1 responseTokenValues:(id)arg2 utteranceString:(id)arg3 locale:(id)arg4;	// IMP=0x0080000000018bfe
+ (id)utteranceFromTokenValues:(id)arg1 utteranceString:(id)arg2;	// IMP=0x0080000000018887
+ (id)internalTokenFromTokenValue:(id)arg1 cleanValue:(id)arg2 normalizedValues:(id)arg3 isSignificant:(_Bool)arg4 isWhitespace:(_Bool)arg5;	// IMP=0x008000000001876d
+ (id)QRTokenFromTokenValue:(id)arg1;	// IMP=0x0080000000018693
+ (id)requestFromMdfDictionary:(id)arg1 turnsKey:(id)arg2 tokensKey:(id)arg3 utteranceKey:(id)arg4 valueKey:(id)arg5 siriResponseKey:(id)arg6 locale:(id)arg7;	// IMP=0x0080000000017eab
+ (id)firstRewriteHypothesisOfResponse:(id)arg1;	// IMP=0x0080000000017df7
+ (id)firstUtteranceOfRequest:(id)arg1;	// IMP=0x0080000000017dce
+ (id)firstUtteranceOfRequest:(id)arg1 WithDefaultValue:(id)arg2;	// IMP=0x0080000000017c3a
+ (_Bool)isRequestEmpty:(id)arg1;	// IMP=0x0080000000017af3
+ (id)emptyResponse;	// IMP=0x0080000000017a61
+ (id)firstRewrittenUtteranceOfResponse:(id)arg1;	// IMP=0x0080000000017a31
+ (id)firstRewrittenUtteranceOfResponse:(id)arg1 WithDefaultValue:(id)arg2;	// IMP=0x0080000000017908
+ (_Bool)isResponseEmpty:(id)arg1;	// IMP=0x00800000000178a9

@end

