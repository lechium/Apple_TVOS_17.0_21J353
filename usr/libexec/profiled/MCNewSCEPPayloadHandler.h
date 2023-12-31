//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCNewSCEPPayloadHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
}

+ (void)allowInsecureHTTPLoadsOfURL:(id)arg1 forConfiguration:(id)arg2;	// IMP=0x0040000000061e79
+ (id)atsOverrideDataWithInsecureHTTPForHost:(id)arg1 fromATSOverrideData:(id)arg2;	// IMP=0x0010000000061c1a
+ (id)mutableATSExceptionInExceptionDomains:(id)arg1 matchingHost:(id)arg2;	// IMP=0x0010000000061a6e
- (struct __SecIdentity *)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id *)arg2;	// IMP=0x0020000000062dd6
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00100000000629f4
- (id)_performPKIOperation:(id)arg1 withPayload:(id)arg2 usingPost:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000062850
- (_Bool)_createKeyPairLength:(unsigned long long)arg1 outPublicKey:(struct __SecKey **)arg2 outPrivateKey:(struct __SecKey **)arg3;	// IMP=0x001000000006275e
- (id)_invalidRAResponse;	// IMP=0x00100000000626dd
- (id)_synchronousTransactionWithURL:(id)arg1 method:(id)arg2 content:(id)arg3 contentType:(id)arg4 outResponseCode:(long long *)arg5 outContentType:(id *)arg6 outError:(id *)arg7;	// IMP=0x0010000000061f7a
- (id)_SCEPOperationURLWithBaseURLString:(id)arg1 operation:(id)arg2 message:(id)arg3;	// IMP=0x00100000000618ce
- (id)userInputFields;	// IMP=0x0010000000061752
- (void)dealloc;	// IMP=0x001000000006170c

@end

