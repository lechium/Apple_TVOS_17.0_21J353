//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, NSMutableArray, NSString, _UIBannerContent, _UIBannerManager, _UIBannerView;

__attribute__((visibility("hidden")))
@interface _UIBanner : NSObject
{
    _UIBannerView *_view;	// 8 = 0x8
    _UIBannerContent *_content;	// 16 = 0x10
    _UIBannerManager *_manager;	// 24 = 0x18
    NSLayoutConstraint *_visibleConstraint;	// 32 = 0x20
    NSLayoutConstraint *_hiddenConstraint;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    NSMutableArray *_dismissalAnimations;	// 56 = 0x38
    NSMutableArray *_dismissalCompletionHandlers;	// 64 = 0x40
    NSMutableArray *_tapHandlers;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000eceaa6
@property(retain, nonatomic) NSMutableArray *tapHandlers; // @synthesize tapHandlers=_tapHandlers;
@property(retain, nonatomic) NSMutableArray *dismissalCompletionHandlers; // @synthesize dismissalCompletionHandlers=_dismissalCompletionHandlers;
@property(retain, nonatomic) NSMutableArray *dismissalAnimations; // @synthesize dismissalAnimations=_dismissalAnimations;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSLayoutConstraint *hiddenConstraint; // @synthesize hiddenConstraint=_hiddenConstraint;
@property(retain, nonatomic) NSLayoutConstraint *visibleConstraint; // @synthesize visibleConstraint=_visibleConstraint;
@property(nonatomic) __weak _UIBannerManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) _UIBannerContent *content; // @synthesize content=_content;
@property(retain, nonatomic) _UIBannerView *view; // @synthesize view=_view;
- (void)addTapHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ece931
- (void)addDismissalCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ece8b4
- (void)addDismissalAnimations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ece837
- (void)dismiss;	// IMP=0x0000000000ece648
- (void)handleLongPressGesture:(id)arg1;	// IMP=0x0000000000ece3c3
- (void)present;	// IMP=0x0000000000ece228

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

