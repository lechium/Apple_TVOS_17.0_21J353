//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSVPersistentTimer, NSSet;
@protocol MRDPersonalDeviceControllerDelegate, OS_dispatch_queue;

@interface MRDPersonalDeviceController : NSObject
{
    _Bool _personalDeviceWasRecentlyAttached;	// 8 = 0x8
    id <MRDPersonalDeviceControllerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    NSSet *_currentPersonalDeviceUIDs;	// 40 = 0x28
    MSVPersistentTimer *_overrideTimer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000057187
@property(retain, nonatomic) MSVPersistentTimer *overrideTimer; // @synthesize overrideTimer=_overrideTimer;
@property(retain, nonatomic) NSSet *currentPersonalDeviceUIDs; // @synthesize currentPersonalDeviceUIDs=_currentPersonalDeviceUIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <MRDPersonalDeviceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool personalDeviceWasRecentlyAttached; // @synthesize personalDeviceWasRecentlyAttached=_personalDeviceWasRecentlyAttached;
- (void)_onQueue_beginTimerWithInterval:(double)arg1;	// IMP=0x0010000000056e9f
- (void)_onQueue_recalculateStateForReason:(id)arg1;	// IMP=0x0010000000056895
- (void)_onQueue_restoreState;	// IMP=0x001000000005650f
- (void)_handlePersonalDeviceChangeNotification:(id)arg1;	// IMP=0x00100000000564a7
- (id)init;	// IMP=0x00100000000562cf

@end
