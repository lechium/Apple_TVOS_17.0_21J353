//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface UIWebOverflowContentView : UIView
{
    CALayer *_webLayer;	// 128 = 0x80
}

@property(retain, nonatomic) CALayer *webLayer; // @synthesize webLayer=_webLayer;
- (void)_setCachedSubviews:(id)arg1;	// IMP=0x000000000149fc89
- (void)fixUpViewAfterInsertion;	// IMP=0x000000000149fc50
- (id)superview;	// IMP=0x000000000149fba1
- (void)willBeRemoved;	// IMP=0x000000000149fb8d
- (void)replaceLayer:(id)arg1;	// IMP=0x000000000149fb50
- (void)dealloc;	// IMP=0x000000000149fb02
- (id)initWithLayer:(id)arg1;	// IMP=0x000000000149fa76

@end
