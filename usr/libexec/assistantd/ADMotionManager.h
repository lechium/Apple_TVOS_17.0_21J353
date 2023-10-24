//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMMotionActivity, CMMotionActivityManager, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ADMotionManager : NSObject
{
    CMMotionActivityManager *_motionActivityManager;	// 8 = 0x8
    CMMotionActivity *_motionActivity;	// 16 = 0x10
    NSOperationQueue *_opQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_externalQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000002ad354
@property(copy, nonatomic, setter=_setMotionActivity:) CMMotionActivity *_motionActivity; // @synthesize _motionActivity;
- (long long)deviceMotion;	// IMP=0x00100000002ad228
- (_Bool)isDriving;	// IMP=0x00100000002ad100
- (id)motionConfidence;	// IMP=0x00100000002acfad
- (id)motionActivity;	// IMP=0x00100000002ace5a
- (void)stopUpdatingMotionActivityForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002acd27
- (void)startUpdatingMotionActivityForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002acbf4
- (id)init;	// IMP=0x00100000002aca49

@end
