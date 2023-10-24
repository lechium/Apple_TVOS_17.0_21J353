//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXBasicTileAnimationOptions, PXTilingController, PXWidgetCompositionElement;

@protocol PXWidgetCompositionElementObserver <NSObject>
- (void)elementHasLoadedContentDataDidChange:(PXWidgetCompositionElement *)arg1;
- (void)elementNeedsLayout:(PXWidgetCompositionElement *)arg1 preferredAnimationOptions:(PXBasicTileAnimationOptions *)arg2 originatingTilingController:(PXTilingController *)arg3;
@end

