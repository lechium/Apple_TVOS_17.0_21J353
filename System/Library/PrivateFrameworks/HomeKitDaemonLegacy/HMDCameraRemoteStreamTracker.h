//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraRemoteStreamTracker : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSMutableSet *_currentStreamIdentifiers;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000686c5d
+ (id)sharedTracker;	// IMP=0x0010000000686c2d
- (void).cxx_destruct;	// IMP=0x0000000000686597
@property(readonly) NSMutableSet *currentStreamIdentifiers; // @synthesize currentStreamIdentifiers=_currentStreamIdentifiers;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)stopTrackingStreamWithSessionID:(id)arg1;	// IMP=0x00000000006864b3
- (_Bool)startTrackingStreamSession:(id)arg1;	// IMP=0x00000000006863ae
- (id)init;	// IMP=0x00000000006862b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

