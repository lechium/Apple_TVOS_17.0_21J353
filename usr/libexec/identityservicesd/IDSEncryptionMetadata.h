//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSEncryptionMetadata : NSObject
{
    long long _encryptionType;	// 8 = 0x8
    NSMutableDictionary *_additionalEncryptionResult;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000014186c
@property(readonly, nonatomic) NSMutableDictionary *additionalEncryptionResult; // @synthesize additionalEncryptionResult=_additionalEncryptionResult;
@property(readonly, nonatomic) long long encryptionType; // @synthesize encryptionType=_encryptionType;
- (id)initWithAdditionalEncryptionResult:(id)arg1;	// IMP=0x00100000001417ed
- (id)initWithMPIdentityIdentifier:(id)arg1;	// IMP=0x001000000014178c
- (id)initWithEncryptionType:(long long)arg1;	// IMP=0x001000000014174f
- (id)init;	// IMP=0x0010000000141736

@end

