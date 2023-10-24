//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSBlockOperation, NSMutableArray, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface CKKSGroupOperation
{
    _Bool executing;	// 8 = 0x8
    _Bool finished;	// 9 = 0x9
    _Bool _fillInError;	// 10 = 0xa
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSBlockOperation *_startOperation;	// 24 = 0x18
    NSBlockOperation *_finishOperation;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableArray *_internalSuccesses;	// 48 = 0x30
}

+ (id)named:(id)arg1 withBlockTakingSelf:(CDUnknownBlockType)arg2;	// IMP=0x004000000005516e
+ (id)named:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000550fa
+ (id)operationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000055073
- (MISSING_TYPE *).cxx_destruct;	// IMP=0x0020000000054d0c
@property(retain) NSMutableArray *internalSuccesses; // @synthesize internalSuccesses=_internalSuccesses;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSBlockOperation *finishOperation; // @synthesize finishOperation=_finishOperation;
@property(retain) NSBlockOperation *startOperation; // @synthesize startOperation=_startOperation;
@property _Bool fillInError; // @synthesize fillInError=_fillInError;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)dependOnBeforeGroupFinished:(id)arg1;	// IMP=0x00100000000549c6
- (void)runBeforeGroupFinished:(id)arg1;	// IMP=0x0010000000054916
- (void)groupStart;	// IMP=0x0010000000054910
- (void)addDependency:(id)arg1;	// IMP=0x0010000000054880
- (void)completeOperation;	// IMP=0x00100000000547b3
- (void)cancel;	// IMP=0x001000000005427a
- (void)start;	// IMP=0x001000000005410c
- (_Bool)isFinished;	// IMP=0x0010000000054041
- (_Bool)isExecuting;	// IMP=0x0010000000053f76
- (_Bool)isConcurrent;	// IMP=0x0010000000053f6e
- (id)debugDescription;	// IMP=0x0010000000053f5c
- (id)description;	// IMP=0x0010000000053897
- (void)setName:(id)arg1;	// IMP=0x0010000000053703
- (_Bool)isPending;	// IMP=0x0010000000053696
- (void)dealloc;	// IMP=0x00100000000535bf
- (id)init;	// IMP=0x001000000005320b

@end

