//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerSecureTransportPairSetup
{
}

+ (id)defaultEncryptedSession;	// IMP=0x001000000015cda5
- (void)transport:(id)arg1 didReceiveEvent:(id)arg2;	// IMP=0x000000000015cd02
- (id)initWithTransport:(id)arg1 operationQueue:(id)arg2 encryptedSession:(id)arg3;	// IMP=0x000000000015cc06

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

