//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowNetworkANODv4
{
}

+ (_Bool)inputBGR;	// IMP=0x00800000002890d5
+ (tuple_8dc74180)inputBiasRGB;	// IMP=0x00800000002890a4
+ (float)inputScale;	// IMP=0x0080000000289096
+ (_Bool)hasPose;	// IMP=0x008000000028908e
+ (const void *)importantClasses;	// IMP=0x0080000000289062
+ (unsigned long long)mumberPosClasses;	// IMP=0x0080000000289057
+ (id)inputLayerName;	// IMP=0x008000000028904a
+ (id)modelName;	// IMP=0x008000000028903d
- (id)processVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;	// IMP=0x0000000000289af7
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x0000000000289956
- (void)initializeBuffers;	// IMP=0x0000000000289178

@end

