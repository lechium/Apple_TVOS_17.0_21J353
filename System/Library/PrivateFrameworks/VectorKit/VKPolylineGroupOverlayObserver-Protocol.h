//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/NSObject-Protocol.h>

@class VKPolylineGroupOverlay, VKPolylineOverlay;

@protocol VKPolylineGroupOverlayObserver <NSObject>
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didFocusPolyline:(VKPolylineOverlay *)arg2;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didSelectPolyline:(VKPolylineOverlay *)arg2;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didRemovePolyline:(VKPolylineOverlay *)arg2;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didAddPolyline:(VKPolylineOverlay *)arg2;
@end
