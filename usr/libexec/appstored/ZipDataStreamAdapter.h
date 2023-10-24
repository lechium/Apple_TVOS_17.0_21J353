//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, ZipDataStreamStatus;
@protocol OS_dispatch_group, OS_dispatch_semaphore, SZExtractor;

@interface ZipDataStreamAdapter : NSObject
{
    _Bool _dataComplete;	// 8 = 0x8
    id <SZExtractor> _extractor;	// 16 = 0x10
    _Bool _hasConsumedData;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    unsigned long long _resumptionOffset;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_backpressureSemaphore;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_consistencyGroup;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
    ZipDataStreamStatus *_locked_streamStatus;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000056a24
@property(readonly, copy) NSString *description;
- (void)truncateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000569d3
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000569c3
- (void)suspendWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000568c2
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000056763
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005663c
- (void)consumeData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056454
- (void)consumeData:(id)arg1 andWaitWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056010

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

