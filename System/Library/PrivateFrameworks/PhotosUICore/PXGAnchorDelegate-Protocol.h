//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXGAnchor, PXGLayout;

@protocol PXGAnchorDelegate <NSObject>

@optional
- (struct CGPoint)anchor:(PXGAnchor *)arg1 visibleRectOriginForProposedVisibleRect:(struct CGRect)arg2 forLayout:(PXGLayout *)arg3;
@end
