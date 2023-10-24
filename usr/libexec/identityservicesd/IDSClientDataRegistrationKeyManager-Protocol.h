//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSKTRegistrationData, IDSNGMKeyLoadingErrorContainer, IDSPublicIdentityData, NSDictionary, NSNumber, NSString;

@protocol IDSClientDataRegistrationKeyManager
- (IDSNGMKeyLoadingErrorContainer *)errorContainerToReport;
- (NSNumber *)keyTransparencyVersionNumberToRegisterForServiceType:(NSString *)arg1;
- (void)fetchKTSignatureDataForServiceTypes:(NSDictionary *)arg1 publicIdentityData:(IDSPublicIdentityData *)arg2 withCompletion:(void (^)(NSDictionary *))arg3;
- (NSDictionary *)createKTRegistrationDataForServiceTypes:(NSDictionary *)arg1 withPublicIdentity:(IDSPublicIdentityData *)arg2;
- (IDSKTRegistrationData *)copyKTRegistrationDataToRegisterForKeyIndex:(unsigned short)arg1 withError:(id *)arg2;
- (struct __SecKey *)copyPublicIdentityDataToRegisterForKeyIndex:(unsigned short)arg1 withError:(id *)arg2;
- (IDSPublicIdentityData *)publicMessageProtectionIdentityDataToRegisterWithError:(id *)arg1;
@end

