//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIDetector.h"

@class CIContext, VNDetectFaceRectanglesRequest, VNTrackLegacyFaceCoreObjectRequest;

__attribute__((visibility("hidden")))
@interface CIFaceCoreDetector : CIDetector
{
    CIContext *context;	// 8 = 0x8
    _Bool _tracking;	// 16 = 0x10
    VNDetectFaceRectanglesRequest *visionRequest;	// 24 = 0x18
    VNTrackLegacyFaceCoreObjectRequest *visionTrackingRequest;	// 32 = 0x20
}

@property(retain) VNTrackLegacyFaceCoreObjectRequest *visionTrackingRequest; // @synthesize visionTrackingRequest;
@property(retain) VNDetectFaceRectanglesRequest *visionRequest; // @synthesize visionRequest;
@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (id)featuresInImage:(id)arg1;	// IMP=0x000000000009233b
- (id)featuresInImage:(id)arg1 options:(id)arg2;	// IMP=0x0000000000091479
- (void)dealloc;	// IMP=0x000000000009140d
- (id)initWithContext:(id)arg1 options:(id)arg2;	// IMP=0x0000000000090e00
- (id)createFaceCoreDataFromCIImage:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3;	// IMP=0x0000000000092741
- (id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(struct CGAffineTransform *)arg3;	// IMP=0x0000000000092619
- (struct CGAffineTransform)ctmForImageWithBounds:(struct CGRect)arg1 orientation:(int)arg2;	// IMP=0x00000000000923bf

@end

