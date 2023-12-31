//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreenAirplayEmbedded
{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00600000003bd3e4
- (unsigned int)tilesPerFrame:(int)arg1 hdrMode:(unsigned long long)arg2;	// IMP=0x00000000003be0c4
- (_Bool)setupH264Rules;	// IMP=0x00000000003bd9a3
- (_Bool)setupRules;	// IMP=0x00000000003bd991
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize)arg2;	// IMP=0x00000000003bd5f9
- (void)initSupportedPayloads;	// IMP=0x00000000003bd55e
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x00000000003bd45a

@end

