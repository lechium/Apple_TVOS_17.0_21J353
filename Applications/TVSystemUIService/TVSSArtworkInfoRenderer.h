//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPRenderer.h>

@class UILayoutGuide;

@interface TVSSArtworkInfoRenderer : TVSPRenderer
{
    UILayoutGuide *_verticalTextAlignmentGuide;	// 8 = 0x8
    unsigned long long _artworkContentMode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004d100
@property(nonatomic) unsigned long long artworkContentMode; // @synthesize artworkContentMode=_artworkContentMode;
- (_Bool)hasSquareArtwork;	// IMP=0x001000000004cfb0
- (id)layoutConstraintsWithSubviews:(id)arg1 contentView:(id)arg2;	// IMP=0x001000000004b6d0
- (id)subviewIdentifiersWantingAutolayout;	// IMP=0x001000000004b5d0

@end

