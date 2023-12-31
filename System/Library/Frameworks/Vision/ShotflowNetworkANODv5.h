//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowNetworkANODv5
{
}

+ (_Bool)inputBGR;	// IMP=0x008000000028aef2
+ (tuple_8dc74180)inputBiasRGB;	// IMP=0x008000000028aec1
+ (float)inputScale;	// IMP=0x008000000028aeb3
+ (_Bool)hasFaceBodyAssociation;	// IMP=0x008000000028aeab
+ (_Bool)hasPetFaces;	// IMP=0x008000000028aea3
+ (_Bool)hasPose;	// IMP=0x008000000028ae9b
+ (const void *)importantClasses;	// IMP=0x008000000028ae6f
+ (unsigned long long)mumberPosClasses;	// IMP=0x008000000028ae64
+ (struct CGSize)inputImageSize;	// IMP=0x008000000028ae4e
+ (id)inputLayerName;	// IMP=0x008000000028ae41
+ (id)modelName;	// IMP=0x008000000028ae34
- (id)processVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;	// IMP=0x000000000028bbff
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x000000000028ba5e
- (void)initializeBuffers;	// IMP=0x000000000028afa0

@end

