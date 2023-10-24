//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface CSDThumperAccount : NSObject
{
    NSString *_accountID;	// 8 = 0x8
    NSString *_primaryDeviceID;	// 16 = 0x10
    NSString *_phoneNumberURI;	// 24 = 0x18
    long long _availableDeviceSlots;	// 32 = 0x20
    NSSet *_allowedSecondaryDeviceIDs;	// 40 = 0x28
}

+ (void)setPhoneNumberMCCToISOCountryCodeTransformBlock:(CDUnknownBlockType)arg1;	// IMP=0x002000000009b7ae
+ (CDUnknownBlockType)phoneNumberMCCToISOCountryCodeTransformBlock;	// IMP=0x001000000009b795
- (void).cxx_destruct;	// IMP=0x002000000009b847
@property(copy, nonatomic) NSSet *allowedSecondaryDeviceIDs; // @synthesize allowedSecondaryDeviceIDs=_allowedSecondaryDeviceIDs;
@property(nonatomic) long long availableDeviceSlots; // @synthesize availableDeviceSlots=_availableDeviceSlots;
@property(copy, nonatomic) NSString *phoneNumberURI; // @synthesize phoneNumberURI=_phoneNumberURI;
@property(copy, nonatomic) NSString *primaryDeviceID; // @synthesize primaryDeviceID=_primaryDeviceID;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (_Bool)containsRegisteredDeviceID:(id)arg1;	// IMP=0x001000000009b4a3
- (_Bool)isEqualToAccount:(id)arg1;	// IMP=0x001000000009b2ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009b245
- (unsigned long long)hash;	// IMP=0x001000000009b13e
- (id)description;	// IMP=0x001000000009ae8b
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009ada1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009acb7
- (id)initWithAccountID:(id)arg1 primaryDeviceID:(id)arg2 phoneNumberURI:(id)arg3 availableDeviceSlots:(long long)arg4 allowedSecondaryDeviceIDs:(id)arg5;	// IMP=0x001000000009ab9f
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x001000000009a72d
- (id)init;	// IMP=0x001000000009a702

@end

