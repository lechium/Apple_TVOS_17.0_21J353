//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSString;

@interface _TtC19appstorecomponentsd12JSUserObject : NSObject
{
    MISSING_TYPE *accounts;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00400000000a16e0
- (id)init;	// IMP=0x00100000000a1680
- (id)cookieForUrlWithName:(id)arg1:(id)arg2;	// IMP=0x00100000000a15f0
- (id)cookiesForUrl:(id)arg1;	// IMP=0x00100000000a1330
@property(nonatomic, readonly) NSNumber *userAgeIfAvailable;
@property(nonatomic, readonly) _Bool isUnderThirteen;
@property(nonatomic, readonly) _Bool isManagedAppleID;
@property(nonatomic, readonly) NSString *dsid;
@property(nonatomic, readonly) NSString *accountIdentifier;
@property(nonatomic, readonly) NSString *lastName;
@property(nonatomic, readonly) NSString *firstName;

@end

