//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKAppleIDPasskeySetupContext;

@interface (null) (akd)
- (void)appleIDPasskeyStatusWithContext:(AKAppleIDPasskeySetupContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;	// IMP=0x00200000000c0a50
- (void)unenrollAppleIDPasskeyWithContext:(AKAppleIDPasskeySetupContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00100000000c07a0
- (void)verifyAppleIDPasskeyWithContext:(AKAppleIDPasskeySetupContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;	// IMP=0x00100000000c0410
- (void)setupAppleIDPasskeyWithContext:(AKAppleIDPasskeySetupContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00100000000bfb30
@end
