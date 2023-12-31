//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsCameraMac
{
    unsigned int _encodeScore;	// 28 = 0x1c
    unsigned int _decodeScore;	// 32 = 0x20
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00600000003026c5
- (void)resetEncodingRulesForCameraIsHD:(_Bool)arg1 isWVGA:(_Bool)arg2 is1080:(_Bool)arg3;	// IMP=0x000000000030428e
- (void)_resetJ92EncodingRulesForCameraIsHD:(_Bool)arg1 isWVGA:(_Bool)arg2 is1080:(_Bool)arg3;	// IMP=0x00000000003040ee
- (void)_removeRulesGreaterThan720p;	// IMP=0x000000000030408c
- (void)_removeRulesGreaterThanVGA;	// IMP=0x0000000000303fec
- (void)_addWVGAEncodingRules;	// IMP=0x0000000000303ed0
- (_Bool)useSoftFramerateSwitching;	// IMP=0x0000000000303eb3
- (_Bool)setupRules;	// IMP=0x0000000000303c76
- (_Bool)setUp1080pRules:(int)arg1;	// IMP=0x00000000003038d0
- (_Bool)setupH264Rules;	// IMP=0x0000000000303865
- (_Bool)setupH264WifiRules;	// IMP=0x000000000030298e
- (void)computeDecodingScore;	// IMP=0x00000000003028ea
- (void)computeEncodingScore;	// IMP=0x00000000003026db
- (double)preferredAspectRatio;	// IMP=0x00000000003026cd
- (void)initSupportedPayloads;	// IMP=0x0000000000302577
- (void)dealloc;	// IMP=0x0000000000302525
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x0000000000302337

@end

