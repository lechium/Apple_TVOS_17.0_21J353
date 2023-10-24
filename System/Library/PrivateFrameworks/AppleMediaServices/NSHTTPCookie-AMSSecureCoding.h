//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSHTTPCookie.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSHTTPCookie (AMSSecureCoding) <NSSecureCoding>
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000003d626f
+ (id)classesForPropertyCoding;	// IMP=0x00100000003d6063
+ (id)ams_cookieByMarkingCookieAsDeleted:(id)arg1;	// IMP=0x00100000003d6277
+ (id)ams_propertiesForCookies:(id)arg1;	// IMP=0x00100000003d80bb
+ (id)ams_cookiesForProperties:(id)arg1;	// IMP=0x00100000003d8052
+ (id)ams_cookiesByMergingProperties:(id)arg1 intoProperties:(id)arg2;	// IMP=0x00100000003d7674
+ (id)ams_dataByArchivingPropertiesOfCookies:(id)arg1 error:(id *)arg2;	// IMP=0x00100000003d81b0
+ (id)ams_cookiesByUnarchivingPropertyData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000003d80ec
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003d61ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000003d6126
@property(readonly, nonatomic) NSString *hashedDescription;
- (_Bool)ams_shouldReplaceCookie:(id)arg1;	// IMP=0x00100000003d7351
- (_Bool)ams_matchesURL:(id)arg1;	// IMP=0x00100000003d72ca
- (_Bool)ams_isEquivalent:(id)arg1;	// IMP=0x00100000003d7166
- (_Bool)ams_isEqualToCookie:(id)arg1;	// IMP=0x00100000003d68fb
- (_Bool)_secureOnlyMatchesURL:(id)arg1;	// IMP=0x00100000003d68aa
- (_Bool)_httpOnlyMatchesURL:(id)arg1;	// IMP=0x00100000003d6859
- (_Bool)_pathMatchesURL:(id)arg1;	// IMP=0x00100000003d667c
- (_Bool)_domainMatchesURL:(id)arg1;	// IMP=0x00100000003d656c
@property(readonly, nonatomic, getter=ams_isExpired) _Bool ams_expired;
@property(readonly, nonatomic, getter=ams_isDeleted) _Bool ams_deleted;
@property(readonly, nonatomic, getter=ams_isCookieValidForBag) _Bool ams_cookieValidForBag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
