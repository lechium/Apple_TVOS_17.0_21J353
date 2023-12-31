//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (SafariCoreExtras)
+ (struct _NSRange)safari_hostAndPortRangeFromUserTypedString:(id)arg1;	// IMP=0x002000000004627d
+ (void)safari_enumeratePossibleURLsForUserTypedString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0020000000045cc0
+ (id)safari_URLWithUserTypedString:(id)arg1;	// IMP=0x00200000000458c0
@property(readonly, copy, nonatomic) NSURL *safari_wellKnownChangePasswordURL;
@property(readonly, nonatomic) _Bool safari_isWellKnownChangePasswordURL;
@property(readonly, copy, nonatomic) NSURL *safari_URLByRemovingUserPasswordPathQueryAndFragment;
- (id)safari_URLByReplacingSchemeWithString:(id)arg1;	// IMP=0x0010000000046aa8
@property(readonly, nonatomic) _Bool safari_isHTTPFamilyURL;
@property(readonly, nonatomic) NSString *safari_displayNameForFile;
@property(readonly, nonatomic) NSURL *safari_canonicalURL;
- (_Bool)safari_hasSameSiteAsURL:(id)arg1;	// IMP=0x0010000000046728
- (_Bool)safari_hasSameOriginAsURL:(id)arg1 relaxingWWW:(_Bool)arg2;	// IMP=0x001000000004647c
- (_Bool)safari_hasSameOriginAsURL:(id)arg1;	// IMP=0x0010000000046468
- (_Bool)safari_isSubdomainOfDomain:(id)arg1;	// IMP=0x0010000000045a11
- (id)_labelsOfDomainWithoutWWWOrMSubdomains:(id)arg1;	// IMP=0x00100000000458eb
@end

