//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSError, PKAppletSubcredential, PKPaymentPass, PKSubcredentialProvisioningOperation;

@protocol PKSubcredentialProvisioningOperationDelegate <NSObject>
- (void)operation:(PKSubcredentialProvisioningOperation *)arg1 addedPass:(PKPaymentPass *)arg2;
- (void)operation:(PKSubcredentialProvisioningOperation *)arg1 addedCredential:(PKAppletSubcredential *)arg2;
- (void)operationWasCanceled:(PKSubcredentialProvisioningOperation *)arg1;
- (void)operation:(PKSubcredentialProvisioningOperation *)arg1 failWithError:(NSError *)arg2;
- (void)operation:(PKSubcredentialProvisioningOperation *)arg1 advanceToState:(long long)arg2;
@end

