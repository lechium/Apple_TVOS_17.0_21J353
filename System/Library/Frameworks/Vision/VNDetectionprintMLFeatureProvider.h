//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, VNDetectionprint;
@protocol MLFeatureProvider;

__attribute__((visibility("hidden")))
@interface VNDetectionprintMLFeatureProvider : NSObject
{
    VNDetectionprint *_detectionprint;	// 8 = 0x8
    NSDictionary *_detectionprintFeatureDescriptions;	// 16 = 0x10
    id <MLFeatureProvider> _originalFeatureProvider;	// 24 = 0x18
}

+ (id)VNDetectionprintTensorKeyForFeatureName:(id)arg1;	// IMP=0x00100000001bd234
- (void).cxx_destruct;	// IMP=0x00000000001bd201
- (id)featureValueForName:(id)arg1;	// IMP=0x00000000001bd018
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithDetectionprint:(id)arg1 featureDescriptions:(id)arg2 originalFeatureProvider:(id)arg3;	// IMP=0x00000000001bce4c

@end

