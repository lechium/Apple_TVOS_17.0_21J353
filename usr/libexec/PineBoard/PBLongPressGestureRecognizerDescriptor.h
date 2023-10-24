//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PBLongPressGestureRecognizerDescriptor
{
    double _minimumPressDuration;	// 8 = 0x8
}

@property(readonly, nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000e305f
- (double)_minimumPressDuration;	// IMP=0x00100000000e304d
- (unsigned long long)_numberOfPressBeganRequired;	// IMP=0x00100000000e301b
- (void)applySettingsToGestureRecognizer:(id)arg1;	// IMP=0x00100000000e2f66
- (void)appendDescriptionToBuilder:(id)arg1;	// IMP=0x00100000000e2ecc
- (id)hashBuilder;	// IMP=0x00100000000e2e60
- (unsigned long long)type;	// IMP=0x00100000000e2e55
- (_Bool)hasCustomNumberOfTapsRequired;	// IMP=0x00100000000e2e0a
@property(readonly, nonatomic) _Bool hasCustomMinimumPressDuration;
- (id)initWithAllowedPressTypes:(id)arg1 numberOfTapsRequired:(id)arg2;	// IMP=0x00100000000e2daa
- (id)initWithAllowedPressTypes:(id)arg1 numberOfTapsRequired:(id)arg2 minimumPressDuration:(id)arg3;	// IMP=0x00100000000e2c9a

@end
