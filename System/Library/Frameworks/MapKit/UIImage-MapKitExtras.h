//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@class NSString;

@interface UIImage (MapKitExtras)
+ (id)_mapkit_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000002bad0
+ (id)_mapkit_imageNamed:(id)arg1;	// IMP=0x001000000002ba3f
+ (id)_mapkit_systemImageNamed:(id)arg1;	// IMP=0x0010000000105d3d
+ (id)_mapkit_liveTransitIndicatorImageUsingDarkMode:(_Bool)arg1;	// IMP=0x00100000001dcfe6
+ (id)_mapkit_liveTransitIndicatorImageApplyingColorForStatus:(long long)arg1 darkMode:(_Bool)arg2;	// IMP=0x00100000001dcf69
+ (id)_mapkit_imageFromVKImage:(id)arg1;	// IMP=0x00100000001fcb6d
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 withWidthPaddingMultiple:(double)arg4;	// IMP=0x00100000001fcac0
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 nightMode:(_Bool)arg4;	// IMP=0x00100000001fca20
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3;	// IMP=0x00100000001fca0b
- (id)_mapkit_imageWithAlpha:(double)arg1;	// IMP=0x001000000002bfa1
- (id)_mapkit_templateImageWithTintColor:(id)arg1;	// IMP=0x001000000002bdec
- (id)_mapkit_horizontallyFlippedImage;	// IMP=0x001000000002bcf2
- (id)_mapkit_dimmedImage;	// IMP=0x001000000002bb77
- (id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;	// IMP=0x0010000000069c65
- (id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;	// IMP=0x0010000000069c5c
- (id)_mapkit_imageWithSymbolConfiguration:(id)arg1;	// IMP=0x0010000000105d56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

