//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCACMEPayloadHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
}

- (struct __SecIdentity *)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id *)arg2;	// IMP=0x0020000000023ba1
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000002379a
- (void)dealloc;	// IMP=0x0010000000023754

@end

