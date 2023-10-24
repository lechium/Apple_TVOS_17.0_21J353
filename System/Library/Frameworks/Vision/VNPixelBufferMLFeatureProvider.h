//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol MLFeatureProvider;

__attribute__((visibility("hidden")))
@interface VNPixelBufferMLFeatureProvider : NSObject
{
    struct __CVBuffer *_pixelBuffer;	// 8 = 0x8
    NSString *_imageInputKey;	// 16 = 0x10
    id <MLFeatureProvider> _originalFeatureProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001bcb5c
- (id)featureValueForName:(id)arg1;	// IMP=0x00000000001bcacc
@property(readonly, nonatomic) NSSet *featureNames;
- (void)dealloc;	// IMP=0x00000000001bc9b4
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 forKey:(id)arg2 originalFeatureProvider:(id)arg3;	// IMP=0x00000000001bc8ca

@end

