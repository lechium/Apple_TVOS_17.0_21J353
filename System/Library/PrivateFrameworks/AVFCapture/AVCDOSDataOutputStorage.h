//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureOutput, NSMutableArray;
@protocol AVCaptureDataOutputDelegateOverride, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCDOSDataOutputStorage : NSObject
{
    AVCaptureOutput<AVCaptureDataOutputDelegateOverride> *_dataOutput;	// 8 = 0x8
    NSMutableArray *_synchronizedDataQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateOverrideCallbackQueue;	// 24 = 0x18
    NSMutableArray *_timestampAdjustmentsDataQueue;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableArray *timestampAdjustmentsDataQueue; // @synthesize timestampAdjustmentsDataQueue=_timestampAdjustmentsDataQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue; // @synthesize delegateOverrideCallbackQueue=_delegateOverrideCallbackQueue;
@property(readonly, nonatomic) NSMutableArray *synchronizedDataQueue; // @synthesize synchronizedDataQueue=_synchronizedDataQueue;
@property(readonly, nonatomic) AVCaptureOutput<AVCaptureDataOutputDelegateOverride> *dataOutput; // @synthesize dataOutput=_dataOutput;
- (_Bool)hasAllExpectedSynchronizedDataForLeaderTimestamp:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000095c47
@property(readonly, nonatomic, getter=isLive) _Bool live;
- (void)dealloc;	// IMP=0x0000000000095bb4
- (id)initWithDataOutput:(id)arg1;	// IMP=0x0000000000095ad8

@end

