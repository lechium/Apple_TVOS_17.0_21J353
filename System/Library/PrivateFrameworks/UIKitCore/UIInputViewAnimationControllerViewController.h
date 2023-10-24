//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIInputViewSetPlacement;
@protocol UIViewControllerAnimatedTransitioning_Keyboard, UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationControllerViewController : NSObject
{
    id <UIViewControllerContextTransitioning> _context;	// 8 = 0x8
    id <UIViewControllerAnimatedTransitioning_Keyboard> _animator;	// 16 = 0x10
    UIInputViewSetPlacement *_endPlacement;	// 24 = 0x18
}

+ (id)controllerWithContext:(id)arg1;	// IMP=0x00100000005e9a11
- (void).cxx_destruct;	// IMP=0x00000000005e9b82
- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;	// IMP=0x00000000005e9b69
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;	// IMP=0x00000000005e9b01
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;	// IMP=0x00000000005e9a5a
- (id)initWithContext:(id)arg1;	// IMP=0x00000000005e9980

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

