//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUndoManager.h>

@class WKContentView;

__attribute__((visibility("hidden")))
@interface WKQuirkyNSUndoManager : NSUndoManager
{
    WKContentView *_contentView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000800b97
@property(readonly) __weak WKContentView *contentView; // @synthesize contentView=_contentView;
- (void)redo;	// IMP=0x0000000000800b56
- (void)undo;	// IMP=0x0000000000800b29
- (_Bool)canRedo;	// IMP=0x0000000000800b21
- (_Bool)canUndo;	// IMP=0x0000000000800b19
- (id)initWithContentView:(id)arg1;	// IMP=0x0000000000800ac4

@end
