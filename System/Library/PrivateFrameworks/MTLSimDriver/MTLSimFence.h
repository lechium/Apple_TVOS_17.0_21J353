//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/_MTLObjectWithLabel.h>

@class MTLSimDevice, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimFence : _MTLObjectWithLabel
{
    MTLSimDevice *_device;	// 24 = 0x18
    unsigned int _fenceRef;	// 32 = 0x20
}

- (unsigned int)fenceRef;	// IMP=0x00000000000095f8
@property(readonly) id <MTLDevice> device;
- (void)dealloc;	// IMP=0x000000000000950c
- (id)initWithDevice:(id)arg1 fenceRef:(unsigned int)arg2;	// IMP=0x00000000000094a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

