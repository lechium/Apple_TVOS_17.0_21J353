//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperation;

@interface XRFollowUpBlock : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSOperation *_op;	// 16 = 0x10
    XRFollowUpBlock *_myselfOrNil;	// 24 = 0x18
    struct atomic<int> _shouldntExecuteBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000748d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000007406
- (void)go;	// IMP=0x00000000000072bd
- (id)initWithBlock:(CDUnknownBlockType)arg1 operation:(id)arg2;	// IMP=0x0000000000007201

@end

