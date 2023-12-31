//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTVMBuffer_replayer, NSString;

@interface GTVMBufferSubRegion_replayer : NSObject
{
    GTVMBuffer_replayer *_parent;	// 8 = 0x8
    struct _NSRange _range;	// 16 = 0x10
}

- (id)GTGPUToolsData;	// IMP=0x002000000004201b
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x0010000000041fac
- (const void *)bytes;	// IMP=0x0010000000041f7e
- (unsigned long long)length;	// IMP=0x0010000000041f74
- (void)dealloc;	// IMP=0x0010000000041f39
- (id)initWithGTVMBuffer:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0010000000041ed0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

