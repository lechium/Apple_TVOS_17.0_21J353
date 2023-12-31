//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MLE5ExecutionStreamPool : NSObject
{
    NSMutableSet *_pool;	// 8 = 0x8
    NSMutableSet *_allStreams;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    unsigned long long _modelSignpostId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000078c46
@property(readonly) unsigned long long modelSignpostId; // @synthesize modelSignpostId=_modelSignpostId;
@property(readonly) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) NSMutableSet *allStreams; // @synthesize allStreams=_allStreams;
@property(readonly) NSMutableSet *pool; // @synthesize pool=_pool;
- (void)enableInstrumentsTracing;	// IMP=0x0000000000078b99
- (void)_emitMappingTracepointForStream:(id)arg1;	// IMP=0x0000000000078b2a
- (void)putBack:(id)arg1;	// IMP=0x0000000000078a62
- (id)takeOut;	// IMP=0x000000000007895a
- (id)initWithModelSignpostId:(unsigned long long)arg1;	// IMP=0x000000000007887e

@end

