//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MCGlobalEthernetPayloadHandler
{
    NSString *_setAsideProfileID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000078843
- (void)unsetAside;	// IMP=0x001000000007883d
- (void)setAside;	// IMP=0x0010000000078837
- (void)remove;	// IMP=0x0010000000078816
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00100000000787b3
- (id)profileMetadata;	// IMP=0x0010000000078725
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x00100000000786f6

@end

