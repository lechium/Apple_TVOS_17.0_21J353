//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIDisparitySmoothingProcessor : CIImageProcessorKernel
{
}

+ (_Bool)synchronizeInputs;	// IMP=0x00000000000715bb
+ (_Bool)outputIsOpaque;	// IMP=0x00000000000715b3
+ (int)outputFormat;	// IMP=0x00000000000715a4
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x000000000007159c
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x0000000000071565
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000071343
+ (void)compilePipelinesIfNeeded:(id)arg1;	// IMP=0x00000000000712c3
+ (void)releasePipelines;	// IMP=0x00000000000712a0
+ (void)compilePipelines:(id)arg1;	// IMP=0x00000000000711c2
+ (_Bool)hasValidPipelines;	// IMP=0x00000000000711b1

@end

