//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol LPComponentViewHost;

__attribute__((visibility("hidden")))
@interface LPComponentView : UIView
{
    id <LPComponentViewHost> _host;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007479f
@property(readonly, nonatomic) __weak id <LPComponentViewHost> host; // @synthesize host=_host;
- (_Bool)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)arg1;	// IMP=0x000000000007477e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000074778
- (void)componentViewDidMoveToWindow;	// IMP=0x0000000000074772
- (void)layoutComponentView;	// IMP=0x000000000007476c
- (void)didMoveToWindow;	// IMP=0x000000000007475a
- (void)layoutSubviews;	// IMP=0x0000000000074719
- (_Bool)isFlipped;	// IMP=0x0000000000074711
- (id)initWithHost:(id)arg1;	// IMP=0x0000000000074668
- (id)init;	// IMP=0x000000000007465a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007464c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007463e

@end

