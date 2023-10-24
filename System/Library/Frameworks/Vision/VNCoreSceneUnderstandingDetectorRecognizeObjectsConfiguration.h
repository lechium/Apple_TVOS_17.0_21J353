//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNDisallowedList;

__attribute__((visibility("hidden")))
@interface VNCoreSceneUnderstandingDetectorRecognizeObjectsConfiguration
{
    float _minimumDetectionConfidence;	// 16 = 0x10
    float _nonMaximumSuppressionThreshold;	// 20 = 0x14
    VNDisallowedList *_disallowedList;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001f86e7
@property(nonatomic) float nonMaximumSuppressionThreshold; // @synthesize nonMaximumSuppressionThreshold=_nonMaximumSuppressionThreshold;
@property(nonatomic) float minimumDetectionConfidence; // @synthesize minimumDetectionConfidence=_minimumDetectionConfidence;
@property(copy, nonatomic) VNDisallowedList *disallowedList; // @synthesize disallowedList=_disallowedList;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f8603
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f8457
- (id)initWithObservationsRecipient:(id)arg1;	// IMP=0x00000000001f8407

@end
