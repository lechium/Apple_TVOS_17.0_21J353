//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraVideoTier, HMDH264Level, HMDH264Profile;

__attribute__((visibility("hidden")))
@interface HMDCameraVideoParameterCombination : HMFObject
{
    HMDH264Profile *_profile;	// 8 = 0x8
    HMDH264Level *_level;	// 16 = 0x10
    HMDCameraVideoTier *_videoTier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004b33ab
@property(readonly, nonatomic) HMDCameraVideoTier *videoTier; // @synthesize videoTier=_videoTier;
@property(readonly, nonatomic) HMDH264Level *level; // @synthesize level=_level;
@property(readonly, nonatomic) HMDH264Profile *profile; // @synthesize profile=_profile;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b31bd
- (id)description;	// IMP=0x00000000004b3100
- (id)initWithProfile:(id)arg1 level:(id)arg2 videoTier:(id)arg3;	// IMP=0x00000000004b3036

@end

