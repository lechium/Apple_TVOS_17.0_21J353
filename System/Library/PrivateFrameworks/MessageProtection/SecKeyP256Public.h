//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SecKeyP256Public : NSObject
{
    struct __SecKey *_publicKeyRef;	// 8 = 0x8
    NSData *_serializedKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000fd58
@property(retain) NSData *serializedKey; // @synthesize serializedKey=_serializedKey;
@property struct __SecKey *publicKeyRef; // @synthesize publicKeyRef=_publicKeyRef;
- (void)dealloc;	// IMP=0x000000000000fce2
- (_Bool)verifySignature:(id)arg1 data:(id)arg2;	// IMP=0x000000000000fb58
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000f874
- (id)dataRepresentation;	// IMP=0x000000000000f65c
- (id)initWithSecKeyRef:(struct __SecKey *)arg1;	// IMP=0x000000000000f5f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

