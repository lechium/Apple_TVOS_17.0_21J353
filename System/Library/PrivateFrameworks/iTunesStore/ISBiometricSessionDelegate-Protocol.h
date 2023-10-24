//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol ISBiometricSessionDelegate <NSObject>

@optional
- (void)sender:(id)arg1 willSendChallenge:(NSString *)arg2 andSignature:(NSString *)arg3 andPaymentTokenData:(NSData *)arg4 andFpanID:(NSString *)arg5 isExtendedAction:(_Bool)arg6 isPayment:(_Bool)arg7 additionalHeaders:(NSDictionary *)arg8;
- (void)sender:(id)arg1 shouldContinueTouchIDSession:(_Bool)arg2;
- (void)sender:(id)arg1 didFallbackToPassword:(_Bool)arg2;
@end

