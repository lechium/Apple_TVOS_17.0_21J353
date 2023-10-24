//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface MCNewDefaultsPayloadHandler
{
    NSMutableSet *_changedDomains;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000005cb3f
@property(retain, nonatomic) NSMutableSet *changedDomains; // @synthesize changedDomains=_changedDomains;
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x001000000005cabf
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x001000000005ca64
- (void)unsetAside;	// IMP=0x001000000005ca52
- (void)setAside;	// IMP=0x001000000005ca40
- (void)remove;	// IMP=0x001000000005c9d4
- (void)_remove;	// IMP=0x001000000005c6dc
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000005c616
- (_Bool)_install;	// IMP=0x001000000005c2b2
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x001000000005c255

@end

