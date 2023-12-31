//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIPanGestureRecognizer, UIView, _UIClientToHostRelationshipGestureInteraction, _UIRelationshipGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneDragInteractionImpl_iOS : NSObject
{
    UIView *_view;	// 8 = 0x8
    _UIClientToHostRelationshipGestureInteraction *_clientRelationshipInteraction;	// 16 = 0x10
    UIPanGestureRecognizer *_directTouchPanGestureRecognizer;	// 24 = 0x18
    UIPanGestureRecognizer *_pointerTouchPanGestureRecognizer;	// 32 = 0x20
    _UIRelationshipGestureRecognizer *_failureRelationshipGestureRecognizer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000066c7ca
@property(retain, nonatomic) _UIRelationshipGestureRecognizer *failureRelationshipGestureRecognizer; // @synthesize failureRelationshipGestureRecognizer=_failureRelationshipGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *pointerTouchPanGestureRecognizer; // @synthesize pointerTouchPanGestureRecognizer=_pointerTouchPanGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *directTouchPanGestureRecognizer; // @synthesize directTouchPanGestureRecognizer=_directTouchPanGestureRecognizer;
@property(retain, nonatomic) _UIClientToHostRelationshipGestureInteraction *clientRelationshipInteraction; // @synthesize clientRelationshipInteraction=_clientRelationshipInteraction;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (id)gestureForFailureRelationships;	// IMP=0x000000000066c73a
- (void)willMoveToView:(id)arg1;	// IMP=0x000000000066c6bb
- (void)didMoveToView:(id)arg1;	// IMP=0x000000000066c62a
- (void)_didRecognizePanGesture:(id)arg1;	// IMP=0x000000000066c433
- (id)_makeDraggingPanGestureRecognizer;	// IMP=0x000000000066c3ca
- (id)init;	// IMP=0x000000000066c285

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

