//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable, NSString, SHClientCredentials;

@interface SHServiceStateHandler : NSObject
{
    SHClientCredentials *_clientCredentials;	// 8 = 0x8
    NSMapTable *_workers;	// 16 = 0x10
    NSLock *_lock;	// 24 = 0x18
}

+ (id)globalQueue;	// IMP=0x0020000000001c57
+ (id)globallyScopedWorkers;	// IMP=0x0010000000001bf2
- (void).cxx_destruct;	// IMP=0x00200000000029f6
@property(readonly, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSMapTable *workers; // @synthesize workers=_workers;
@property(readonly, nonatomic) SHClientCredentials *clientCredentials; // @synthesize clientCredentials=_clientCredentials;
@property(readonly, nonatomic) _Bool hasRegisteredWorkers;
- (id)registeredWorkerForWorkerID:(id)arg1;	// IMP=0x00100000000024a8
- (id)allWorkersForService:(id)arg1;	// IMP=0x00100000000023f3
- (void)unregisterAllWorkersForService:(id)arg1;	// IMP=0x001000000000234b
- (void)service:(id)arg1 unregisterWorker:(id)arg2;	// IMP=0x001000000000212a
- (_Bool)service:(id)arg1 registerWorker:(id)arg2 watchdogTimeout:(double)arg3 error:(id *)arg4;	// IMP=0x0010000000001cae
- (id)initWithClientCredentials:(id)arg1;	// IMP=0x0010000000001a34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
