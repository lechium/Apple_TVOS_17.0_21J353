//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSRegistration, IDSRegistrationCenter, NSArray, NSDictionary;

@protocol IDSRegistrationCenterListener

@optional
- (void)centerUpdatedRegistrationIdentities:(IDSRegistrationCenter *)arg1;
- (void)center:(IDSRegistrationCenter *)arg1 failedCurrentEmailsRequest:(IDSRegistration *)arg2 error:(long long)arg3 info:(NSDictionary *)arg4;
- (void)center:(IDSRegistrationCenter *)arg1 succeededCurrentEmailsRequest:(IDSRegistration *)arg2 emailInfo:(NSArray *)arg3;
- (void)center:(IDSRegistrationCenter *)arg1 allSucceededRegistrations:(NSArray *)arg2;
- (void)center:(IDSRegistrationCenter *)arg1 failedRegistration:(IDSRegistration *)arg2 error:(long long)arg3 info:(NSDictionary *)arg4;
- (void)center:(IDSRegistrationCenter *)arg1 succeededRegistration:(IDSRegistration *)arg2;
- (void)center:(IDSRegistrationCenter *)arg1 failedIDSAuthentication:(IDSRegistration *)arg2 error:(long long)arg3 info:(NSDictionary *)arg4;
- (void)center:(IDSRegistrationCenter *)arg1 succeededIDSAuthentication:(IDSRegistration *)arg2;
@end

