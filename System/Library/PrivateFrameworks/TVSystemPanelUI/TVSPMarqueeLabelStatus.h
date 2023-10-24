//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer, UILabel;
@protocol TVSPMarqueeLabelStatusDelegate;

__attribute__((visibility("hidden")))
@interface TVSPMarqueeLabelStatus : NSObject
{
    _Bool _isNeeded;	// 8 = 0x8
    _Bool _didEnd;	// 9 = 0x9
    UILabel *_label;	// 16 = 0x10
    id <TVSPMarqueeLabelStatusDelegate> _delegate;	// 24 = 0x18
    NSTimer *_durationTimer;	// 32 = 0x20
    NSTimer *_willBeginTimer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000012ba0
@property(retain, nonatomic) NSTimer *willBeginTimer; // @synthesize willBeginTimer=_willBeginTimer;
@property(retain, nonatomic) NSTimer *durationTimer; // @synthesize durationTimer=_durationTimer;
@property(nonatomic) __weak id <TVSPMarqueeLabelStatusDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool didEnd; // @synthesize didEnd=_didEnd;
@property(nonatomic) _Bool isNeeded; // @synthesize isNeeded=_isNeeded;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)_markDidEnd:(id)arg1;	// IMP=0x0000000000012990
- (void)invalidate;	// IMP=0x0000000000012920
- (void)marqueeAnimationDidBeginWithDuration:(double)arg1;	// IMP=0x0000000000012870
- (void)marqueeAnimationReadyToBegin;	// IMP=0x00000000000127f0
- (void)dealloc;	// IMP=0x0000000000012780
- (id)initWithLabel:(id)arg1;	// IMP=0x00000000000126c0

@end

