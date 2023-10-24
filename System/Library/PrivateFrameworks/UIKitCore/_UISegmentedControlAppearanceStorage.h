//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UISegmentedControlAppearanceStorage : NSObject
{
    NSMutableDictionary *_backgroundImages;	// 8 = 0x8
    NSMutableDictionary *_miniBackgroundImages;	// 16 = 0x10
    NSMutableDictionary *_dividerImages;	// 24 = 0x18
    NSMutableDictionary *_miniDividerImages;	// 32 = 0x20
    NSMutableDictionary *_textAttributesForState;	// 40 = 0x28
    NSMutableDictionary *_backgroundPositionAdjustmentsForBarMetrics;	// 48 = 0x30
    NSMutableDictionary *_contentPositionOffsets;	// 56 = 0x38
    NSMutableDictionary *_miniContentPositionOffsets;	// 64 = 0x40
    _Bool _legacyDontHighlight;	// 72 = 0x48
    _Bool _legacySuppressOptionsBackground;	// 73 = 0x49
    _Bool _isTiled;	// 74 = 0x4a
    unsigned long long _leftCapWidth;	// 80 = 0x50
    unsigned long long _rightCapWidth;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000006118f0
- (void)setIsTiled:(_Bool)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3;	// IMP=0x00000000006118df
- (void)setDetail:(CDStruct_41b0f204 *)arg1;	// IMP=0x000000000061141e
- (_Bool)legacySuppressOptionsBackground;	// IMP=0x0000000000611415
- (void)takeTextAttributesFrom:(CDStruct_0ba2c6ed)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000006112e0
- (id)init;	// IMP=0x000000000061129a
- (id)textAttributesForState:(unsigned long long)arg1;	// IMP=0x0000000000611233
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000611134
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(_Bool)arg3;	// IMP=0x000000000061111f
- (id)anyDividerImage;	// IMP=0x00000000006110ae
- (id)anyDividerImageForMini:(_Bool)arg1;	// IMP=0x0000000000610fc0
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(_Bool)arg3 withFallback:(_Bool)arg4;	// IMP=0x0000000000610ec3
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 isMini:(_Bool)arg4;	// IMP=0x0000000000610dc1
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(_Bool)arg2;	// IMP=0x0000000000610dac
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(_Bool)arg2 withFallback:(_Bool)arg3;	// IMP=0x0000000000610cc1
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(_Bool)arg3;	// IMP=0x0000000000610bce
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(_Bool)arg2;	// IMP=0x0000000000610bb9
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(_Bool)arg2 noFallback:(_Bool)arg3;	// IMP=0x0000000000610ada
- (void)setContentPositionOffset:(id)arg1 forSegment:(long long)arg2 inMiniBar:(_Bool)arg3;	// IMP=0x00000000006109e7
- (double)backgroundPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000610962
- (void)setBackgroundPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000061085e
- (_Bool)wantsTrackingSuppressed;	// IMP=0x000000000061076e

@end

