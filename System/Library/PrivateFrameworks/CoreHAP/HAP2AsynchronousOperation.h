//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class HAP2PropertyLock, HMFActivity, NSError;

__attribute__((visibility("hidden")))
@interface HAP2AsynchronousOperation : NSOperation
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
    _Bool _cancelled;	// 10 = 0xa
    NSError *_error;	// 16 = 0x10
    HMFActivity *_activity;	// 24 = 0x18
    HAP2PropertyLock *_propertyLock;	// 32 = 0x20
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00600000000ed04d
- (void).cxx_destruct;	// IMP=0x00000000000eda19
@property(readonly, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
- (void)finishWithError:(id)arg1;	// IMP=0x00000000000ed9f9
- (void)finish;	// IMP=0x00000000000ed9eb
- (void)cancelWithError:(id)arg1;	// IMP=0x00000000000ed9d9
- (void)cancel;	// IMP=0x00000000000ed981
- (void)main;	// IMP=0x00000000000ed8d9
- (void)start;	// IMP=0x00000000000ed641
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (_Bool)isAsynchronous;	// IMP=0x00000000000ed535
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (id)initWithName:(id)arg1 activity:(id)arg2;	// IMP=0x00000000000ed29e
- (id)initWithName:(id)arg1;	// IMP=0x00000000000ed28a
- (id)init;	// IMP=0x00000000000ed241
- (id)initWithName:(id)arg1 optionalActivity:(id)arg2;	// IMP=0x00000000000ed13a

@end

