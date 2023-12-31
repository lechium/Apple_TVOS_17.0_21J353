//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _XRLazyKVOBlockToken : NSObject
{
    id _object;	// 8 = 0x8
    id _observer;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002303c
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)handleLazyKVOUpdate:(id)arg1;	// IMP=0x0000000000022fa0
- (id)initWithObject:(id)arg1 observer:(id)arg2;	// IMP=0x0000000000022ef0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

