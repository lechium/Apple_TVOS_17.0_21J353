//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, NSString;
@protocol OS_dispatch_queue;

@interface ADHomeAnnouncementService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
}

+ (id)sharedService;	// IMP=0x00200000002a8737
- (void).cxx_destruct;	// IMP=0x00200000002a86f6
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000002a86f0
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000002a86ea
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000002a86d5
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00100000002a85bf
- (void)stopPlayback;	// IMP=0x00100000002a85b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

