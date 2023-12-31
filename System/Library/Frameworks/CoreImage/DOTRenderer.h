//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DOTRenderer : NSObject
{
    struct __sFILE *file;	// 8 = 0x8
    NSURL *fileURL;	// 16 = 0x10
    NSString *fileTitle;	// 24 = 0x18
    _Bool drawEdgesFirst;	// 32 = 0x20
    int direction;	// 36 = 0x24
    struct CGSize separation;	// 40 = 0x28
}

@property _Bool drawEdgesFirst; // @synthesize drawEdgesFirst;
@property struct CGSize separation; // @synthesize separation;
@property int direction; // @synthesize direction;
- (void)flushRender;	// IMP=0x00000000000d50a3
- (void)drawEdge:(id)arg1 withPath:(id)arg2;	// IMP=0x00000000000d504e
- (void)drawNode:(id)arg1;	// IMP=0x00000000000d4ea1
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;	// IMP=0x00000000000d4dce
- (void)setFileTitle:(id)arg1;	// IMP=0x00000000000d4daa
- (void)setFileURL:(id)arg1;	// IMP=0x00000000000d4d7c
- (void)dealloc;	// IMP=0x00000000000d4d4d
- (id)init;	// IMP=0x00000000000d4d0e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

