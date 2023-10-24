//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, AMSPromise, NSString;

@protocol AMSBagAccountProvider
@property(readonly, nonatomic) NSString *identity;
@property(readonly, nonatomic) _Bool bagLoadShouldUpdateAccountProperties;
- (AMSPromise *)bagStorefrontPromiseForAccountMediaType:(NSString *)arg1;
- (NSString *)bagStorefrontForAccountMediaType:(NSString *)arg1;
- (AMSPromise *)bagAccountPromiseForAccountMediaType:(NSString *)arg1;
- (ACAccount *)bagAccountForAccountMediaType:(NSString *)arg1;
- (_Bool)associatedAccountIsEqualToAccount:(ACAccount *)arg1 forMediaType:(NSString *)arg2;
@end
