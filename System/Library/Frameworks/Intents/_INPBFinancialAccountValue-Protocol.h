//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBBalanceAmountValue, _INPBDataString, _INPBValueMetadata;

@protocol _INPBFinancialAccountValue <NSObject>
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) _Bool hasSecondaryBalance;
@property(retain, nonatomic) _INPBBalanceAmountValue *secondaryBalance;
@property(readonly, nonatomic) _Bool hasOrganizationName;
@property(retain, nonatomic) _INPBDataString *organizationName;
@property(readonly, nonatomic) _Bool hasBalance;
@property(retain, nonatomic) _INPBBalanceAmountValue *balance;
@property(nonatomic) _Bool hasAccountType;
@property(nonatomic) int accountType;
@property(readonly, nonatomic) _Bool hasAccountNumber;
@property(copy, nonatomic) NSString *accountNumber;
@property(readonly, nonatomic) _Bool hasAccountNickname;
@property(retain, nonatomic) _INPBDataString *accountNickname;
- (int)StringAsAccountType:(NSString *)arg1;
- (NSString *)accountTypeAsString:(int)arg1;
@end

