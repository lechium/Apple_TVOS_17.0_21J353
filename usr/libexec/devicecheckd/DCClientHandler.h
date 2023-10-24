//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface DCClientHandler : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000026d1
- (void)appAttestationIsSupportedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002595
- (void)appAttestationAssert:(id)arg1 keyId:(id)arg2 clientDataHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000024da
- (void)appAttestationAttestKey:(id)arg1 keyId:(id)arg2 clientDataHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000241f
- (void)appAttestationCreateKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000238f
- (id)_stringValueForEntitlement:(id)arg1;	// IMP=0x001000000000232b
- (id)_generateAppIDFromCurrentConnection;	// IMP=0x00100000000020c6
- (_Bool)_isSupported;	// IMP=0x0010000000002083
- (void)isSupportedDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002037
- (void)baaSignatureForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001e32
- (void)baaSignaturesForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001bb2
- (void)fetchOpaqueBlobWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000019bf
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000001965

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
