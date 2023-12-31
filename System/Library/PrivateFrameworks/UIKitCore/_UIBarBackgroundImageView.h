//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageView.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundImageView : UIImageView
{
    UIView *_topStripView;	// 128 = 0x80
    UIImageView *_customImageContainer;	// 136 = 0x88
    _Bool _translucent;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000001ccdd5
@property(nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent=_translucent;
- (id)image;	// IMP=0x00000000001ccd47
- (void)setImage:(id)arg1;	// IMP=0x00000000001ccced
- (void)removeTopStripView;	// IMP=0x00000000001ccb4a
- (void)updateTopStripViewCreateIfNecessary;	// IMP=0x00000000001cc875
- (id)topStripView;	// IMP=0x00000000001cc860

@end

