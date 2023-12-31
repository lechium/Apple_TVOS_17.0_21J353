//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _SFECKeyPair;

@interface CKKSManifestInjectionPointHelper : NSObject
{
    NSString *_peerID;	// 8 = 0x8
    _SFECKeyPair *_keyPair;	// 16 = 0x10
}

+ (void)setIgnoreChanges:(_Bool)arg1;	// IMP=0x0020000000126700
+ (_Bool)ignoreChanges;	// IMP=0x00100000001266f4
+ (void)registerEgoPeerID:(id)arg1 keyPair:(id)arg2;	// IMP=0x0010000000126675
+ (void)registerHelper:(id)arg1 forPeer:(id)arg2;	// IMP=0x00100000001265ea
- (void).cxx_destruct;	// IMP=0x00200000001263e0
- (id)peerID;	// IMP=0x00100000001263d2
- (id)keyPair;	// IMP=0x00100000001263c4
- (void)performWithPeerVerifyingKeys:(CDUnknownBlockType)arg1;	// IMP=0x00100000001260b0
- (void)performWithEgoPeerID:(CDUnknownBlockType)arg1;	// IMP=0x0010000000125fe2
- (void)performWithSigningKey:(CDUnknownBlockType)arg1;	// IMP=0x0010000000125e43
- (id)description;	// IMP=0x0010000000125dbd
- (id)initWithPeerID:(id)arg1 keyPair:(id)arg2 isEgoPeer:(_Bool)arg3;	// IMP=0x0010000000125ceb

@end

