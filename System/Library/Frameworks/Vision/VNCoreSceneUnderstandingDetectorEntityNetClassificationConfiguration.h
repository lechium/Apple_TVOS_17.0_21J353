//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNDisallowedList;

__attribute__((visibility("hidden")))
@interface VNCoreSceneUnderstandingDetectorEntityNetClassificationConfiguration
{
    float _minimumConfidence;	// 16 = 0x10
    VNDisallowedList *_disallowedList;	// 24 = 0x18
    unsigned long long _maximumClassifications;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001f823b
@property unsigned long long maximumClassifications; // @synthesize maximumClassifications=_maximumClassifications;
@property float minimumConfidence; // @synthesize minimumConfidence=_minimumConfidence;
@property(retain) VNDisallowedList *disallowedList; // @synthesize disallowedList=_disallowedList;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f8157
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f7fab
- (id)initWithObservationsRecipient:(id)arg1;	// IMP=0x00000000001f7f62

@end

