//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSMutableURLRequest.h>

@interface NSMutableURLRequest (AppleAccount)
- (void)aa_addSpyglassModeHeaderWithMask:(unsigned long long)arg1;	// IMP=0x0070000000050a99
- (void)aa_addAppProvidedContext:(id)arg1;	// IMP=0x0070000000050a80
- (void)aa_addProxiedAuthHeaderWithAccount:(id)arg1;	// IMP=0x00700000000508ef
- (void)aa_addLocationSharingAllowedHeader;	// IMP=0x00700000000508a9
- (void)aa_addContentTypeHeaders:(id)arg1;	// IMP=0x007000000005084a
- (void)aa_addClientInfoHeaders;	// IMP=0x00700000000505fd
- (_Bool)aa_addDeviceProvisioningInfoHeadersWithDSIDFromReponse:(id)arg1;	// IMP=0x00700000000501b3
- (void)aa_addLoggedInAppleIDHeaderWithAccount:(id)arg1;	// IMP=0x007000000005014d
- (void)aa_addMultiUserDeviceHeaderIfEnabled;	// IMP=0x0070000000050147
- (void)aa_addDeviceIDHeader;	// IMP=0x0070000000050074
- (void)aa_addDeviceInternalDevHeaderIfEnabled;	// IMP=0x0070000000050008
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1 sendEmptyValues:(_Bool)arg2;	// IMP=0x007000000004feea
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1;	// IMP=0x007000000004fed6
- (void)aa_addDeviceProvisioningInfoHeadersWithAccount:(id)arg1;	// IMP=0x007000000004fe87
- (_Bool)aa_addGrandslamAuthorizationheaderWithAltDSID:(id)arg1 heartbeatToken:(id)arg2;	// IMP=0x007000000004fdb0
- (_Bool)aa_addGrandslamAuthorizationHeaderWithAltDSID:(id)arg1 grandslamToken:(id)arg2;	// IMP=0x007000000004fcd9
- (_Bool)aa_addGrandSlamAuthorizationHeaderWithAccount:(id)arg1 grandslamToken:(id)arg2;	// IMP=0x007000000004fb64
- (void)aa_setXMLBodyWithParameters:(id)arg1 signingSession:(id)arg2;	// IMP=0x007000000004fae9
- (void)aa_signBodyData:(id)arg1 withSigningSession:(id)arg2;	// IMP=0x007000000004f9f3
- (void)aa_setJSONBodyWithParameters:(id)arg1;	// IMP=0x007000000004f83e
- (id)aa_setXMLBodyWithParameters:(id)arg1;	// IMP=0x007000000004f71e
- (void)aa_setBodyWithParameters:(id)arg1;	// IMP=0x007000000004f61e
- (_Bool)aa_addAuthTokenOrBasicAuthHeaderWithAccount:(id)arg1 preferUsingPassword:(_Bool)arg2;	// IMP=0x007000000004f3ba
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 authToken:(id)arg2;	// IMP=0x007000000004f1d0
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 preferUsingPassword:(_Bool)arg2;	// IMP=0x007000000004ec6c
- (void)aa_addAltDSIDAndRepairStateWithAccount:(id)arg1;	// IMP=0x007000000004eb8a
- (void)aa_addBasicAuthPasswordWithAccount:(id)arg1;	// IMP=0x007000000004e9f4
- (void)aa_addTokenAuthHeaderWithAccount:(id)arg1;	// IMP=0x007000000004e85e
@end

