//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPFaceCropUtils : NSObject
{
}

+ (struct CGSize)faceCropDimensionsFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x008000000012f8f6
+ (id)groupingIdentifierFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x008000000012f69b
+ (struct CGRect)cropBoundsInOriginalImageFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x008000000012f3f7
+ (struct CGRect)faceBoundsFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x008000000012f153
+ (_Bool)isValidFaceCrop:(id)arg1;	// IMP=0x008000000012efc3
+ (id)newFaceCropFromImageData:(id)arg1 withFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x008000000012ece1
+ (id)newFaceCropFromImageURL:(id)arg1 withNormalizedFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x008000000012e701
+ (id)newFaceCropFromCGImageSource:(const struct CGImageSource *)arg1 withFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x008000000012d0d7
+ (id)imageCreationOptions;	// IMP=0x008000000012cfe4
+ (id)newDictionaryRepresentationOfFaceCropDataFromFaceBox:(struct CGRect)arg1 andCropRegion:(struct CGRect)arg2 andGroupingIdentifier:(id)arg3;	// IMP=0x008000000012cec3
+ (id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg1;	// IMP=0x008000000012cca5
+ (struct CGImageMetadata *)createOutputMetadataFromDictionary:(id)arg1;	// IMP=0x008000000012ca54

@end

