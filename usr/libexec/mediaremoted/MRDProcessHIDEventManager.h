//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRDProcessHIDEventManager
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    int _processID;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001c67f
@property(readonly, nonatomic) int processID; // @synthesize processID=_processID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)dispatchHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000001c5c3
- (id)initWithBundleID:(id)arg1 processID:(int)arg2;	// IMP=0x001000000001c4da

@end

