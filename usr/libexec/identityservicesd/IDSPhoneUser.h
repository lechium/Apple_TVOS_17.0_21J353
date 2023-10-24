//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSPhoneUser : NSObject
{
    _Bool _isDefaultUser;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
    NSString *_phoneBookNumber;	// 24 = 0x18
    NSString *_labelID;	// 32 = 0x20
    NSString *_countryCode;	// 40 = 0x28
    NSString *_networkCode;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000018f595
- (void).cxx_destruct;	// IMP=0x002000000018fa6b
@property(retain, nonatomic) NSString *networkCode; // @synthesize networkCode=_networkCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool isDefaultUser; // @synthesize isDefaultUser=_isDefaultUser;
@property(readonly, nonatomic) NSString *labelID; // @synthesize labelID=_labelID;
@property(retain, nonatomic) NSString *phoneBookNumber; // @synthesize phoneBookNumber=_phoneBookNumber;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018f857
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000018f795
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000018f59d
- (_Bool)differsFromPhoneNumber:(id)arg1;	// IMP=0x001000000018f3d5
- (_Bool)isIdenticalToUser:(id)arg1;	// IMP=0x001000000018f25b
- (_Bool)isEqualToUser:(id)arg1;	// IMP=0x001000000018f249
- (_Bool)isEqualToPhoneUser:(id)arg1;	// IMP=0x001000000018f014
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000018efbb
@property(readonly) unsigned long long hash;
- (_Bool)shouldReplace:(id)arg1;	// IMP=0x001000000018eebe
- (id)storageIdentifier;	// IMP=0x001000000018eeac
- (id)unprefixedIdentifier;	// IMP=0x001000000018ee4a
- (id)realmPrefixedIdentifier;	// IMP=0x001000000018ed5e
- (long long)realm;	// IMP=0x001000000018ed56
- (id)uniqueIdentifier;	// IMP=0x001000000018ed44
- (id)phoneUserWithUpdatedDefaultUser:(_Bool)arg1 countryCode:(id)arg2 networkCode:(id)arg3;	// IMP=0x001000000018eca4
- (id)phoneUserWithUpdatedPhoneNumber:(id)arg1;	// IMP=0x001000000018ec47
- (id)phoneUserWithUpdatedPhoneNumber:(id)arg1 phoneBookNumber:(id)arg2;	// IMP=0x001000000018ebb7
- (id)initWithLabelID:(id)arg1 phoneBookNumber:(id)arg2 isDefaultUser:(_Bool)arg3 countryCode:(id)arg4 networkCode:(id)arg5;	// IMP=0x001000000018ead3
- (id)initWithLabelID:(id)arg1 phoneBookNumber:(id)arg2;	// IMP=0x001000000018ea3a
- (id)initWithLabelID:(id)arg1;	// IMP=0x001000000018e9cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

