//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface MCGmailAccountPayloadHandler
{
    NSDictionary *_setAsideAccountDictionary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000762b1
@property(retain, nonatomic) NSDictionary *setAsideAccountDictionary; // @synthesize setAsideAccountDictionary=_setAsideAccountDictionary;
- (void)unsetAside;	// IMP=0x0010000000076205
- (void)setAside;	// IMP=0x0010000000075e4a
- (void)remove;	// IMP=0x0010000000075da6
- (void)_remove;	// IMP=0x00100000000756f8
- (_Bool)isInstalled;	// IMP=0x0010000000075476
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000074f85
- (id)_installWithAccountDictionary:(id)arg1;	// IMP=0x0010000000074abe
- (id)accountDictionaryWithIsInstalledByMDM:(_Bool)arg1 personaID:(id)arg2 rmAccountIdentifier:(id)arg3;	// IMP=0x0010000000074678
- (id)MCACAccountIdentifier;	// IMP=0x0010000000074628
- (id)unhashedAccountIdentifier;	// IMP=0x0010000000074591
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x0010000000074562

@end

