//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIHostedWindow.h>

@class PGHostedWindowHostingHandle;

__attribute__((visibility("hidden")))
@interface PGHostedWindow : _UIHostedWindow
{
}

@property(readonly, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
- (_Bool)_canBecomeKeyWindow;	// IMP=0x000000000000a756
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000000a74e
- (void)dealloc;	// IMP=0x000000000000a6d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000a646

@end
