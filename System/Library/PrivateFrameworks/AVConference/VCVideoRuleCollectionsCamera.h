//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsCamera
{
    _Bool _encodeHighDef;	// 24 = 0x18
    _Bool _decodeHighDef;	// 25 = 0x19
}

+ (id)sharedInstance;	// IMP=0x006000000032a0c2
- (struct _VCBitrateConfiguration *)bitrateConfiguration;	// IMP=0x000000000032b059
- (void)resetEncodingRulesForCameraIsHD:(_Bool)arg1 isWVGA:(_Bool)arg2 is1080:(_Bool)arg3;	// IMP=0x000000000032b053
- (_Bool)getBestFrameWidth:(int *)arg1 frameHeight:(int *)arg2 frameRate:(float *)arg3;	// IMP=0x000000000032ad26
- (_Bool)useSoftFramerateSwitching;	// IMP=0x000000000032ad1e
- (_Bool)isHiDefCapable;	// IMP=0x000000000032acfb
- (id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2;	// IMP=0x000000000032abb1
- (id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2 payload:(int)arg3;	// IMP=0x000000000032a763
- (_Bool)setupH264CellularRules;	// IMP=0x000000000032a0d8
- (double)preferredAspectRatio;	// IMP=0x000000000032a0ca

@end
