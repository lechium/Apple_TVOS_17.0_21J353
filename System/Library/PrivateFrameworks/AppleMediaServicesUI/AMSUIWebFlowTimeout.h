//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSUIWebFlowTimeout : NSObject
{
    CDUnknownBlockType _enqueuedBlock;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSDate *_startTime;	// 32 = 0x20
    double _timeout;	// 40 = 0x28
    double _timeRemaining;	// 48 = 0x30
}

+ (id)timeoutWithTimeout:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0060000000087bc2
- (void).cxx_destruct;	// IMP=0x0000000000088406
@property(nonatomic) double timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) CDUnknownBlockType enqueuedBlock; // @synthesize enqueuedBlock=_enqueuedBlock;
- (void)reset;	// IMP=0x0000000000088244
- (void)pause;	// IMP=0x0000000000088015
- (void)start;	// IMP=0x0000000000087c4a
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000087b05

@end

