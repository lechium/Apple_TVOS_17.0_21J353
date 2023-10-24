//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface CMBatchedSensorManagerInternal : NSObject
{
    void *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dataQueue;	// 24 = 0x18
    _Bool _available;	// 32 = 0x20
    CDUnknownBlockType _accelHandler;	// 40 = 0x28
    _Bool _accelActive;	// 48 = 0x30
    CDUnknownBlockType _deviceMotionHandler;	// 56 = 0x38
    _Bool _deviceMotionActive;	// 64 = 0x40
    NSArray *_accelBatch;	// 72 = 0x48
    NSArray *_deviceMotionBatch;	// 80 = 0x50
}

+ (id)_newArrayByUnpackingDeviceMotionBatch:(shared_ptr_bdcc6d0f)arg1;	// IMP=0x0060000000245001
+ (id)_newArrayByUnpackingAccelerometerBatch:(shared_ptr_bdcc6d0f)arg1;	// IMP=0x006000000024386b
+ (_Bool)areBatchedSensorsSupported;	// IMP=0x0060000000242112
@property(retain) NSArray *deviceMotionBatch; // @synthesize deviceMotionBatch=_deviceMotionBatch;
@property(retain) NSArray *accelBatch; // @synthesize accelBatch=_accelBatch;
- (void)_stopDeviceMotionUpdates;	// IMP=0x0000000000244cb1
- (void)_startDeviceMotionUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002442f3
- (void)_startDeviceMotionUpdates;	// IMP=0x00000000002442df
- (void)_stopAccelerometerUpdates;	// IMP=0x000000000024351b
- (void)_startAccelerometerUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000242b5d
- (void)_startAccelerometerUpdates;	// IMP=0x0000000000242b49
- (void)_teardown;	// IMP=0x0000000000242a01
- (void)_connect;	// IMP=0x00000000002421fd
- (void)dealloc;	// IMP=0x00000000002421a6
- (id)init;	// IMP=0x000000000024211a

@end

