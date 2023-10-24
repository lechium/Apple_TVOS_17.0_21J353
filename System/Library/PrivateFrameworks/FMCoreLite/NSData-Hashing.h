//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (Hashing)
- (id)fm_hmac_sha512WithKey:(id)arg1;	// IMP=0x00300000000088cb
- (id)fm_hmac_sha256WithKey:(id)arg1;	// IMP=0x00300000000087d1
- (id)fm_hmac_sha1WithKey:(id)arg1;	// IMP=0x00300000000086da
- (id)fm_hmac_md5WithKey:(id)arg1;	// IMP=0x00300000000085e0
@property(readonly, copy, nonatomic) NSData *fm_sha512Hash;
@property(readonly, copy, nonatomic) NSData *fm_sha256Hash;
@property(readonly, copy, nonatomic) NSData *fm_sha1Hash;
- (id)hexString;	// IMP=0x003000000000f6c6
- (id)fm_MACAddressString;	// IMP=0x003000000000f642
- (id)fm_hexString;	// IMP=0x003000000000f583
@end
