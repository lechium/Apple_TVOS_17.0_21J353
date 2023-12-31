//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UINavigationBar, UISwipeGestureRecognizer;
@protocol _UINavigationBarGestureHandlerDelegate;

__attribute__((visibility("hidden")))
@interface _UINavigationBarGestureHandler : NSObject
{
    UISwipeGestureRecognizer *_popSwipeGestureRecognizer;	// 8 = 0x8
    UINavigationBar *_navigationBar;	// 16 = 0x10
    id <_UINavigationBarGestureHandlerDelegate> _delegate;	// 24 = 0x18
    long long _idiom;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001ec6c3
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(nonatomic) __weak id <_UINavigationBarGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void)_handlePopSwipe:(id)arg1;	// IMP=0x00000000001ec552
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000001ec4a4
- (id)initWithNavigationBar:(id)arg1;	// IMP=0x00000000001ec3e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

