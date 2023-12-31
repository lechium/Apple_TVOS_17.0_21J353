//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreenSecondaryEmbedded
{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0060000000472bfc
- (unsigned int)tilesPerFrame:(int)arg1;	// IMP=0x000000000047399c
- (_Bool)setupH264Rules;	// IMP=0x0000000000473124
- (_Bool)setupRules;	// IMP=0x0000000000473112
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize)arg2;	// IMP=0x0000000000472d7a
- (void)initSupportedPayloads;	// IMP=0x0000000000472d08
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x0000000000472c04

@end

