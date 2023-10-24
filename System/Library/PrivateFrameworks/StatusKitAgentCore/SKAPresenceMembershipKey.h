//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SKAPresenceMembershipKey : NSObject
{
    struct __SecKey *_privateKey;	// 8 = 0x8
}

+ (id)logger;	// IMP=0x006000000001bd5e
@property(nonatomic) struct __SecKey *privateKey; // @synthesize privateKey=_privateKey;
- (_Bool)_generateKeyFromKeyData:(id)arg1;	// IMP=0x000000000001bbad
- (_Bool)_generateKey;	// IMP=0x000000000001ba43
@property(readonly, nonatomic) NSData *privateKeyMaterial;
@property(readonly, nonatomic) NSData *publicKeyMaterial;
- (id)signPayload:(id)arg1;	// IMP=0x000000000001b7a8
- (void)dealloc;	// IMP=0x000000000001b74a
- (id)initWithPrivateKeyMaterial:(id)arg1;	// IMP=0x000000000001b64e
- (id)initWithNewKeyMaterial;	// IMP=0x000000000001b5e0

@end

