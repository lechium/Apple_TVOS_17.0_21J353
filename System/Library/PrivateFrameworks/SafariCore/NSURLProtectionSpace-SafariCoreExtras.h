//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLProtectionSpace.h>

@class NSString, NSURL;

@interface NSURLProtectionSpace (SafariCoreExtras)
+ (id)safari_passkeySidecarProtectionSpaceForRelyingPartyIdentifier:(id)arg1;	// IMP=0x00200000000448d0
+ (id)safari_HTMLFormProtectionSpaceForURL:(id)arg1;	// IMP=0x00200000000447c3
@property(readonly, nonatomic) _Bool safari_hasDefaultPortForProtocol;
@property(readonly, nonatomic) long long safari_defaultPortForProtocol;
@property(readonly, nonatomic) _Bool safari_allowsCredentialSaving;
- (_Bool)isEqualToProtectionSpaceForPasswordManager:(id)arg1;	// IMP=0x001000000004533b
- (id)safari_creationDateOfCredentialWithUser:(id)arg1;	// IMP=0x0010000000045168
@property(readonly, nonatomic) NSURL *safari_URL;
@property(readonly, copy, nonatomic) NSString *safari_identityPreferenceDomain;
@property(readonly, copy, nonatomic) NSString *safari_userVisibleSiteForProtectionSpace;
@property(readonly, nonatomic) NSString *safari_addressString;
- (long long)safari_compareToHighLevelDomainFromProtectionSpace:(id)arg1;	// IMP=0x0010000000044d77
- (long long)safari_compareToHighLevelDomainFromProtectionSpaceOrderingDecimalCharactersLast:(id)arg1;	// IMP=0x0010000000044bbb
@property(readonly, nonatomic) NSURLProtectionSpace *safari_protectionSpaceByReplacingHostWithHighlevelDomain;
@property(readonly, nonatomic) struct __CFString *safari_protocolAsSecAttrProtocolValue;
@end
