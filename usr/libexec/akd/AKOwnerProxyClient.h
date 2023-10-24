//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKCredentialRequestContext;

@interface AKOwnerProxyClient
{
    AKCredentialRequestContext *_credentialRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000008eca
- (id)teamID;	// IMP=0x0010000000008ead
- (id)appID;	// IMP=0x0010000000008e90
- (id)bundleID;	// IMP=0x0010000000008e73
- (id)localizedAppName;	// IMP=0x0010000000008e56
- (id)name;	// IMP=0x0010000000008d81
- (_Bool)hasOwnerAccess;	// IMP=0x0010000000008d79
- (_Bool)hasWriteAccess;	// IMP=0x0010000000008d71
- (_Bool)hasPublicAccess;	// IMP=0x0010000000008d69
- (_Bool)hasPrivateSignedAccess;	// IMP=0x0010000000008d61
- (_Bool)hasPrivateAccess;	// IMP=0x0010000000008d59
- (_Bool)hasInternalAccess;	// IMP=0x0010000000008d51
- (id)description;	// IMP=0x0010000000008ce5
- (id)initWithCredentialRequest:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000008c6d
- (id)initWithCredentialRequest:(id)arg1;	// IMP=0x0010000000008bfd

@end
