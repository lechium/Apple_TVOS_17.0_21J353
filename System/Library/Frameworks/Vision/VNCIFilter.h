//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIColorKernel, CIImage;

__attribute__((visibility("hidden")))
@interface VNCIFilter : CIFilter
{
    CIColorKernel *_kernel;	// 72 = 0x48
    CIImage *_inputImage;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000145545
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)initWithKernelName:(id)arg1 inputParameters:(id)arg2;	// IMP=0x000000000014540f
- (id)initWithKernelName:(id)arg1;	// IMP=0x0000000000145223

@end

