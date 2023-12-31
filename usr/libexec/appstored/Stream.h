//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, UnfairLock;
@protocol OS_dispatch_queue, OS_dispatch_source, StreamDelegate;

@interface Stream : NSObject
{
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_delegateSource;	// 16 = 0x10
    UnfairLock *_lock;	// 24 = 0x18
    id <StreamDelegate> _delegate;	// 32 = 0x20
    NSError *_streamError;	// 40 = 0x28
    unsigned long long _streamStatus;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000f2da7
- (void)open;	// IMP=0x00100000000f2d74
- (void)close;	// IMP=0x00100000000f2d65
@property(readonly) unsigned long long streamStatus;
@property(readonly) NSError *streamError;
@property __weak id <StreamDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;	// IMP=0x00100000000f270d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

