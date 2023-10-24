//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIDetector.h"

@class CIContext, FKTextDetector, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CITextDetector : CIDetector
{
    CIContext *context;	// 8 = 0x8
    double _width;	// 16 = 0x10
    double _height;	// 24 = 0x18
    NSMutableDictionary *featureOptions;	// 32 = 0x20
    FKTextDetector *textDetector;	// 40 = 0x28
}

@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (id)featuresInImage:(id)arg1;	// IMP=0x00000000001a9368
- (id)featuresInImage:(id)arg1 options:(id)arg2;	// IMP=0x00000000001a82b6
- (void)dealloc;	// IMP=0x00000000001a823e
- (id)initWithContext:(id)arg1 options:(id)arg2;	// IMP=0x00000000001a7ffa
- (id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(struct CGAffineTransform *)arg3;	// IMP=0x00000000001a95fe
- (struct CGAffineTransform)ctmForImageWithBounds:(struct CGRect)arg1 orientation:(int)arg2;	// IMP=0x00000000001a939e

@end

