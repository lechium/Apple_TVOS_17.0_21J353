//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKAnimationDelegate : NSObject
{
    ProcessQualified_5c39c5eb _layerID;	// 8 = 0x8
    void *_layerTreeHost;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000440a71
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000440a4e
- (void)animationDidStart:(id)arg1;	// IMP=0x00000000004409a2
- (void)invalidate;	// IMP=0x0000000000440994
- (id)initWithLayerID:(ProcessQualified_5c39c5eb)arg1 layerTreeHost:(void *)arg2;	// IMP=0x0000000000440941

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

