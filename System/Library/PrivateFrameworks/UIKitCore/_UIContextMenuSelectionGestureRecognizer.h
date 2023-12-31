//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface _UIContextMenuSelectionGestureRecognizer : UIGestureRecognizer
{
    struct CGVector _allowableMovement;	// 16 = 0x10
    struct CGPoint _originalLocation;	// 32 = 0x20
}

+ (_Bool)_supportsTouchContinuation;	// IMP=0x00600000006f88bf
@property(nonatomic) struct CGPoint originalLocation; // @synthesize originalLocation=_originalLocation;
@property(nonatomic) struct CGVector allowableMovement; // @synthesize allowableMovement=_allowableMovement;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006f8b48
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006f8af9
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006f89a3
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006f8949
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006f8901
- (void)_cancelOrFail;	// IMP=0x00000000006f88c7
- (id)init;	// IMP=0x00000000006f886d

@end

