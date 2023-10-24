//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface VNMPImageDescriptor : NSObject
{
    long long _internalNonSerializedDescriptorId;	// 8 = 0x8
    float _quality;	// 16 = 0x10
    float _nextLeafDescriptorDistance;	// 20 = 0x14
    float _previousLeafDescriptorDistance;	// 24 = 0x18
    float _nextLeafTotalDistance;	// 28 = 0x1c
    float _previousLeafTotalDistance;	// 32 = 0x20
    NSString *_externalImageId;	// 40 = 0x28
    long long _exifTimestamp;	// 48 = 0x30
    void *_colorGaborDescriptor;	// 56 = 0x38
    void *_sceneClassifierDescriptor;	// 64 = 0x40
    void *_imageRegistrationDescriptor;	// 72 = 0x48
    long long _previousLeafId;	// 80 = 0x50
    long long _nextLeafId;	// 88 = 0x58
    long long _nextLeafTimestampDistance;	// 96 = 0x60
    long long _previousLeafTimestampDistance;	// 104 = 0x68
    NSString *_imageFilePath;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001efe8e
+ (unsigned long long)currentVersion;	// IMP=0x00100000001efe83
- (void).cxx_destruct;	// IMP=0x00000000001efe5b
@property(readonly) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property float previousLeafTotalDistance; // @synthesize previousLeafTotalDistance=_previousLeafTotalDistance;
@property float nextLeafTotalDistance; // @synthesize nextLeafTotalDistance=_nextLeafTotalDistance;
@property long long previousLeafTimestampDistance; // @synthesize previousLeafTimestampDistance=_previousLeafTimestampDistance;
@property long long nextLeafTimestampDistance; // @synthesize nextLeafTimestampDistance=_nextLeafTimestampDistance;
@property float previousLeafDescriptorDistance; // @synthesize previousLeafDescriptorDistance=_previousLeafDescriptorDistance;
@property float nextLeafDescriptorDistance; // @synthesize nextLeafDescriptorDistance=_nextLeafDescriptorDistance;
@property long long nextLeafId; // @synthesize nextLeafId=_nextLeafId;
@property long long previousLeafId; // @synthesize previousLeafId=_previousLeafId;
@property(readonly) void *imageRegistrationDescriptor; // @synthesize imageRegistrationDescriptor=_imageRegistrationDescriptor;
@property(readonly) void *sceneClassifierDescriptor; // @synthesize sceneClassifierDescriptor=_sceneClassifierDescriptor;
@property(readonly) void *colorGaborDescriptor; // @synthesize colorGaborDescriptor=_colorGaborDescriptor;
@property(readonly) float quality; // @synthesize quality=_quality;
@property(readonly) long long exifTimestamp; // @synthesize exifTimestamp=_exifTimestamp;
@property(readonly) NSString *externalImageId; // @synthesize externalImageId=_externalImageId;
@property(readonly) long long descriptorId; // @synthesize descriptorId=_internalNonSerializedDescriptorId;
- (id)initWithRawColorGaborDescriptor:(id)arg1;	// IMP=0x00000000001efb5f
@property(readonly) NSData *rawColorGaborDescriptor;
- (float)computeFinalDescriptorBasedDistanceForColorDistance:(float)arg1 andSceneClassifierDistance:(float)arg2;	// IMP=0x00000000001efaf5
- (float)distanceFromDescriptor:(id)arg1;	// IMP=0x00000000001efa72
- (_Bool)computeRegistrationFeaturesForImageData:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001efa6a
- (_Bool)computeDescriptorForImageData:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001ef7b3
- (_Bool)computeConvnetDescriptorForImageData:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001ef7ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ef5dc
- (unsigned long long)hash;	// IMP=0x00000000001ef4c3
- (void)dealloc;	// IMP=0x00000000001ef483
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x00000000001ef152
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001eeee0
@property(readonly, nonatomic) unsigned long long serializedLength;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001eec21
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ee6a7
- (id)initWithImageData:(id)arg1 andCustomQualityScore:(float)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001ee678
- (id)initWithImageData:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001ee440

@end

