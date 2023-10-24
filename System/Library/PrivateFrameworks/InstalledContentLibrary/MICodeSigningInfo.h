//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MICodeSigningInfo : NSObject
{
    NSString *_signerIdentity;	// 8 = 0x8
    NSString *_signerOrganization;	// 16 = 0x10
    NSString *_codeInfoIdentifier;	// 24 = 0x18
    NSString *_teamIdentifier;	// 32 = 0x20
    NSNumber *_signatureVersion;	// 40 = 0x28
    NSDictionary *_entitlements;	// 48 = 0x30
    unsigned long long _codeSignerType;	// 56 = 0x38
    unsigned long long _profileValidationType;	// 64 = 0x40
    unsigned long long _signingInfoSource;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000127bf
@property(readonly, nonatomic) unsigned long long signingInfoSource; // @synthesize signingInfoSource=_signingInfoSource;
@property(readonly, nonatomic) unsigned long long profileValidationType; // @synthesize profileValidationType=_profileValidationType;
@property(readonly, nonatomic) unsigned long long codeSignerType; // @synthesize codeSignerType=_codeSignerType;
@property(readonly, copy, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, copy, nonatomic) NSNumber *signatureVersion; // @synthesize signatureVersion=_signatureVersion;
@property(readonly, copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(readonly, copy, nonatomic) NSString *codeInfoIdentifier; // @synthesize codeInfoIdentifier=_codeInfoIdentifier;
@property(readonly, copy, nonatomic) NSString *signerOrganization; // @synthesize signerOrganization=_signerOrganization;
@property(readonly, copy, nonatomic) NSString *signerIdentity; // @synthesize signerIdentity=_signerIdentity;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 fromSource:(unsigned long long)arg2;	// IMP=0x0000000000011be4
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000011bd0
- (id)initWithSignerIdentity:(id)arg1 signerOrganization:(id)arg2 codeInfoIdentifier:(id)arg3 teamIdentifier:(id)arg4 signatureVersion:(id)arg5 entitlements:(id)arg6 signerType:(unsigned long long)arg7 profileType:(unsigned long long)arg8 signingInfoSource:(unsigned long long)arg9;	// IMP=0x0000000000011a91
- (id)initForTesting;	// IMP=0x0000000000011a62

@end

