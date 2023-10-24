//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IPStateUpdateStreamSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IPXPCEventStateUpdateStreamSource : NSObject
{
    NSString *_streamName;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _resumed;	// 24 = 0x18
    id <IPStateUpdateStreamSourceDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000754a
@property __weak id <IPStateUpdateStreamSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_queue_handleEvent:(id)arg1;	// IMP=0x000000000000728f
- (void)resume;	// IMP=0x00000000000070bf
- (id)initWithQueue:(id)arg1 streamName:(id)arg2;	// IMP=0x0000000000007012

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

