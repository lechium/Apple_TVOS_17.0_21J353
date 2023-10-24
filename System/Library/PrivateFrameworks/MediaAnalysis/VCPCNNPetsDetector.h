//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNPetsDetector : NSObject
{
    struct Scaler _scaler;	// 8 = 0x8
}

+ (id)detector:(int)arg1;	// IMP=0x006000000005db80
- (id).cxx_construct;	// IMP=0x000000000005f0f4
- (void).cxx_destruct;	// IMP=0x000000000005f0d3
- (int)petsDetection:(struct __CVBuffer *)arg1 petsRegions:(id)arg2 petsFaceRegions:(id)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x000000000005ea57
- (int)postProcBoxes:(id)arg1 maxNumRegions:(int)arg2;	// IMP=0x000000000005e7d5
- (int)generatePetsRegions:(float *)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 faceBoxes:(id)arg5 maxNumRegions:(int)arg6;	// IMP=0x000000000005e24c
- (void)nonMaxSuppression:(id)arg1;	// IMP=0x000000000005e011
- (int)generatePetsBoxes:(id)arg1 faceBoxes:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x000000000005e006
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;	// IMP=0x000000000005dffe
- (int)createModel:(int)arg1 srcWidth:(int)arg2;	// IMP=0x000000000005dff3
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;	// IMP=0x000000000005df73
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChannels:(int)arg3;	// IMP=0x000000000005dbec

@end
