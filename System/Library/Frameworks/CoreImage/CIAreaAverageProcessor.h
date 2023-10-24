//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIAreaAverageProcessor : CIImageProcessorKernel
{
}

+ (_Bool)allowSRGBTranferFuntionOnOutput;	// IMP=0x008000000018296f
+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;	// IMP=0x0080000000182967
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x008000000018295f
+ (_Bool)canReduceOutputChannels;	// IMP=0x0080000000182957
+ (int)outputFormat;	// IMP=0x008000000018294f
+ (_Bool)synchronizeInputs;	// IMP=0x0080000000182947
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x008000000018235a
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x008000000018230d

@end

