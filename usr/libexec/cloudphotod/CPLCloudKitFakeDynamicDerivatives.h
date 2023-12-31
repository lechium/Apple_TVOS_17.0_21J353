//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLCloudKitFakeDynamicDerivatives : NSObject
{
}

+ (id)transformData:(id)arg1 fileType:(id)arg2 matchingResource:(id)arg3 error:(id *)arg4;	// IMP=0x00200000000ca6c7
+ (_Bool)transformFromURL:(id)arg1 fileType:(id)arg2 toTargetURL:(id)arg3 matchingResource:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000ca421
+ (_Bool)_transferImageFromSource:(struct CGImageSource *)arg1 toDestination:(struct CGImageDestination *)arg2 matchingResource:(id)arg3;	// IMP=0x00100000000ca3c6
+ (id)_outputOptionsFromSource:(struct CGImageSource *)arg1 matchingResource:(id)arg2;	// IMP=0x00100000000ca21b
+ (id)_metadataWithoutOrientation:(id)arg1;	// IMP=0x00100000000ca135
+ (unsigned long long)realResourceTypeForResource:(id)arg1;	// IMP=0x00100000000ca091
+ (_Bool)isFakeDerivative:(id)arg1;	// IMP=0x00100000000ca00c
+ (id)overriddenResourcesFromResources:(id)arg1;	// IMP=0x00100000000c9cc9
+ (_Bool)usesFakeDerivatives;	// IMP=0x00100000000c9cbd
+ (void)setAllowsFakeDerivatives:(_Bool)arg1;	// IMP=0x00100000000c9858
+ (id)fakeDerivativesDescription;	// IMP=0x00100000000c963f
+ (_Bool)allowsFakeDerivatives;	// IMP=0x00100000000c9633

@end

