//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface ASCPendingPromises : NSObject
{
    NSRecursiveLock *_stateLock;	// 8 = 0x8
    NSMutableArray *_binaryPromisesIfLoaded;	// 16 = 0x10
    NSMutableArray *_promisesIfLoaded;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003f4b1
@property(retain, nonatomic) NSMutableArray *promisesIfLoaded; // @synthesize promisesIfLoaded=_promisesIfLoaded;
@property(retain, nonatomic) NSMutableArray *binaryPromisesIfLoaded; // @synthesize binaryPromisesIfLoaded=_binaryPromisesIfLoaded;
@property(readonly, nonatomic) NSRecursiveLock *stateLock; // @synthesize stateLock=_stateLock;
- (void)finishAllWithError:(id)arg1;	// IMP=0x000000000003f36c
- (void)cancelAll;	// IMP=0x000000000003f322
- (void)enumerateBinaryPromises:(CDUnknownBlockType)arg1 andPromises:(CDUnknownBlockType)arg2;	// IMP=0x000000000003effd
- (void)addPromise:(id)arg1;	// IMP=0x000000000003ed20
- (_Bool)containsPromise:(id)arg1;	// IMP=0x000000000003eb95
@property(readonly, nonatomic) _Bool hasPromises;
- (void)addBinaryPromise:(id)arg1;	// IMP=0x000000000003e655
- (_Bool)containsBinaryPromise:(id)arg1;	// IMP=0x000000000003e453
@property(readonly, nonatomic) NSMutableArray *promises;
@property(readonly, nonatomic) NSMutableArray *binaryPromises;
- (void)withLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003e296
- (id)init;	// IMP=0x000000000003e240

@end
