//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IPLocalStateUpdateStream, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface IPLocalStateUpdateStreamSink : NSObject
{
    IPLocalStateUpdateStream *_weakStream;	// 8 = 0x8
    NSMutableArray *_queuedUpdateMessages;	// 16 = 0x10
    struct os_unfair_lock_s _resumptionLock;	// 24 = 0x18
    _Bool _resumed;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000000dde3
- (void)sendUpdateMessage:(id)arg1;	// IMP=0x000000000000dcfc
- (void)resume;	// IMP=0x000000000000db21
- (id)initWithUpdateStream:(id)arg1;	// IMP=0x000000000000da96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
