//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSNumber;

@interface LoadRentalInformationOperation : ISOperation
{
    NSNumber *_accountIdentifier;	// 96 = 0x60
    NSNumber *_rentalKeyIdentifier;	// 104 = 0x68
    NSDictionary *_rentalInformation;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000f5c84
@property(readonly, copy, nonatomic) NSDictionary *rentalInformation; // @synthesize rentalInformation=_rentalInformation;
@property(copy, nonatomic) NSNumber *rentalKeyIdentifier; // @synthesize rentalKeyIdentifier=_rentalKeyIdentifier;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void)run;	// IMP=0x00100000000f5be2
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;	// IMP=0x00100000000f5b1b

@end
