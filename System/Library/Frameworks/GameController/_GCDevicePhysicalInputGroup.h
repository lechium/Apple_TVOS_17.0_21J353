//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, _GCDevicePhysicalInputBase;
@protocol OS_dispatch_queue, _GCDevicePhysicalInputGroupDataSource;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputGroup : NSObject
{
    NSDictionary *_physicalInputs;	// 8 = 0x8
    _GCDevicePhysicalInputBase *_defaultPhysicalInput;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    _Bool _isSnapshot;	// 40 = 0x28
    _Bool _hasQueueOverride;	// 41 = 0x29
    id <_GCDevicePhysicalInputGroupDataSource> _dataSource;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000429d7
- (void)physicalInputPoll:(id)arg1 forLatest:(_Bool)arg2;	// IMP=0x0000000000042963
- (void)physicalInputTransactionQueueDepthDidChange:(id)arg1;	// IMP=0x0000000000042923
- (void)physicalInput:(id)arg1 setQueue:(id)arg2;	// IMP=0x000000000004289a
- (id)physicalInputQueue:(id)arg1;	// IMP=0x0000000000042857
- (id)physicalInputWithAttributes:(id)arg1;	// IMP=0x00000000000425a8
- (void)setDevice:(id)arg1;	// IMP=0x0000000000042588
- (void)dealloc;	// IMP=0x0000000000042528
- (id)init;	// IMP=0x00000000000424fd
- (id)initWithPhysicalInputs:(id)arg1;	// IMP=0x0000000000041ef7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

