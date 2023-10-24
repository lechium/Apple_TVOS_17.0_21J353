//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMStreamCKCRDT, BMSyncCRDTLocationRow, BMSyncDatabase, BMSyncSessionContext, NSString;
@protocol OS_dispatch_queue;

@interface BMStreamCKRecordCRDT : NSObject
{
    BMSyncDatabase *_db;	// 8 = 0x8
    BMStreamCKCRDT *_streamCRDT;	// 16 = 0x10
    BMSyncCRDTLocationRow *_locationRow;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    long long _maxDeltaSize;	// 40 = 0x28
    BMSyncSessionContext *_sessionContext;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000002ec5
@property(readonly, nonatomic) BMSyncSessionContext *sessionContext; // @synthesize sessionContext=_sessionContext;
@property(nonatomic) long long maxDeltaSize; // @synthesize maxDeltaSize=_maxDeltaSize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) BMSyncCRDTLocationRow *locationRow; // @synthesize locationRow=_locationRow;
@property(readonly, nonatomic) BMStreamCKCRDT *streamCRDT; // @synthesize streamCRDT=_streamCRDT;
- (unsigned long long)deltaDeliveryRequirements;	// IMP=0x0010000000002e6d
- (id)mergeableDeltasForMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000002498
- (_Bool)mergeDeltas:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000203b
- (id)stateVector;	// IMP=0x0010000000001f7c
- (id)initWithStreamCRDT:(id)arg1 locationRow:(id)arg2 database:(id)arg3 queue:(id)arg4 maxDeltaSize:(long long)arg5 sessionContext:(id)arg6;	// IMP=0x0010000000001e70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
