//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNPostalAddress.h>

@interface CNPostalAddress (PKAdditions)
+ (id)_CNKeyFromABKey:(id)arg1;	// IMP=0x00600000005ba43b
+ (id)_ABKeyFromCNKey:(id)arg1;	// IMP=0x00600000005ba2e9
+ (id)postalAddressFromWebServiceDictionaryRepresentation:(id)arg1;	// IMP=0x00600000005b9fc8
+ (id)backwardsCompatiblePostalAddressDictionary:(id)arg1;	// IMP=0x00600000005b9d0d
- (id)_countryCodeForCountryName:(id)arg1;	// IMP=0x00100000005b9ad2
- (id)suggestedCountryCode;	// IMP=0x00100000005b9a73
- (id)redactedPostalAddress;	// IMP=0x00100000005b989f
- (id)redactedStreetAddress;	// IMP=0x00100000005b984b
- (id)webServiceDictionaryRepresentation;	// IMP=0x00100000005b95a6
- (id)backwardsCompatibleDictionaryRepresentation;	// IMP=0x00100000005b9290
@end

