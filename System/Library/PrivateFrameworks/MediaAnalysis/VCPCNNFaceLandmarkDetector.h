//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPCNNFaceLandmarkDetector : NSObject
{
    NSMutableArray *_landmarks;	// 8 = 0x8
}

+ (id)detector;	// IMP=0x00600000001e1bb0
- (void).cxx_destruct;	// IMP=0x00000000001e226d
- (id)landmarks;	// IMP=0x00000000001e225f
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withFaceBounds:(struct CGRect)arg2;	// IMP=0x00000000001e1c35
- (int)computeLandmarks:(float *)arg1;	// IMP=0x00000000001e1c2a
- (float *)getInputBuffer;	// IMP=0x00000000001e1c22

@end

