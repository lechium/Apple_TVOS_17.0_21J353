//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UINavigationControllerPalette;

__attribute__((visibility("hidden")))
@interface UINavigationDeferredTransitionContext : NSObject
{
    _UINavigationControllerPalette *_incomingTopPalette;	// 8 = 0x8
    _UINavigationControllerPalette *_outgoingTopPalette;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004a3c1c
@property(retain, nonatomic) _UINavigationControllerPalette *outgoingTopPalette; // @synthesize outgoingTopPalette=_outgoingTopPalette;
@property(retain, nonatomic) _UINavigationControllerPalette *incomingTopPalette; // @synthesize incomingTopPalette=_incomingTopPalette;

@end

