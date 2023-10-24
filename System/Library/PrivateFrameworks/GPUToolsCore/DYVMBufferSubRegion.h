//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DYVMBuffer, NSString;

__attribute__((visibility("hidden")))
@interface DYVMBufferSubRegion : NSObject
{
    DYVMBuffer *_parent;	// 8 = 0x8
    struct _NSRange _range;	// 16 = 0x10
}

- (id)DYGPUToolsData;	// IMP=0x000000000002cdc6
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x000000000002cd57
- (const void *)bytes;	// IMP=0x000000000002cd29
- (unsigned long long)length;	// IMP=0x000000000002cd1f
- (void)dealloc;	// IMP=0x000000000002cce4
- (id)initWithDYVMBuffer:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000002cc7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

