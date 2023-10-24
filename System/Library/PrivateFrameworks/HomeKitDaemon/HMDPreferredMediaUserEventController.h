//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMDFetchedSettingsDriver, HMDPreferredMediaUserEventControllerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPreferredMediaUserEventController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <HMDFetchedSettingsDriver> _driver;	// 16 = 0x10
    id <HMDPreferredMediaUserEventControllerDataSource> _dataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000b1cd27
@property(readonly) __weak id <HMDPreferredMediaUserEventControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) id <HMDFetchedSettingsDriver> driver; // @synthesize driver=_driver;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)driverDidReload:(id)arg1;	// IMP=0x0000000000b1cc1b
- (void)driver:(id)arg1 didUpdatePrimaryUserInfo:(id)arg2;	// IMP=0x0000000000b1c9f8
- (void)driver:(id)arg1 didUpdateSettings:(id)arg2;	// IMP=0x0000000000b1c931
- (void)_postUpdateEventsIfDifferent:(id)arg1;	// IMP=0x0000000000b1c1b0
- (double)eventTimestamp;	// IMP=0x0000000000b1c197
- (id)eventSource;	// IMP=0x0000000000b1c11d
- (void)updatePreferredMediaUserWithPrimaryUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b1c03f
- (id)initWithDataSource:(id)arg1 queue:(id)arg2 driver:(id)arg3;	// IMP=0x0000000000b1bf75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

