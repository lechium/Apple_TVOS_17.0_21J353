//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFNotifyStatePublisher, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ADOpportuneSpeakingStateManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_listeningEdgeDetectorIDs;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    AFNotifyStatePublisher *_statePublisher;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001d08f3
- (void)_listeningEdgeDetectorIDsChanged;	// IMP=0x00100000001d0885
- (void)endListeningForEdgeDetectorWithID:(id)arg1;	// IMP=0x00100000001d076a
- (void)beginListeningForEdgeDetectorWithID:(id)arg1;	// IMP=0x00100000001d064f
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001d0559

@end

