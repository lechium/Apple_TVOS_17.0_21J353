//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC17identityservicesd36IDSGroupEncryptionIdentityController : NSObject
{
    MISSING_TYPE *l;	// 5625536 = 0x55d6c0
    MISSING_TYPE *q;	// 304324 = 0x4a4c4
    MISSING_TYPE *lock;	// 5625536 = 0x55d6c0
    MISSING_TYPE *identity;	// 1937330991 = 0x7379532f
    MISSING_TYPE *previousIdentity;	// 0 = 0x0
    MISSING_TYPE *listeners;	// 65536 = 0x10000
    MISSING_TYPE *previousPreKeyExpirationDuration;	// 2 = 0x2
    MISSING_TYPE *preKeyExpirationDuration;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000004ac500
- (id)init;	// IMP=0x00100000004ac4a0
- (void)resetPreKey;	// IMP=0x00100000004ac210
- (void)ensurePublicIdentityForDevice:(id)arg1;	// IMP=0x00100000004ab140
- (id)initWithConfig:(id)arg1;	// IMP=0x00100000004ab090

@end

