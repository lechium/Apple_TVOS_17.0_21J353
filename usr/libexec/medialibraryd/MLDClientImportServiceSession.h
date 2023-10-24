//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3ActiveTransaction, ML3ClientImportResult, ML3ClientImportServiceSession, ML3ClientImportSessionConfiguration, NSRunLoop, NSThread, NSXPCConnection;

@interface MLDClientImportServiceSession : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    ML3ClientImportSessionConfiguration *_configuration;	// 16 = 0x10
    NSThread *_importSessionThread;	// 24 = 0x18
    ML3ActiveTransaction *_transaction;	// 32 = 0x20
    ML3ClientImportServiceSession *_importSession;	// 40 = 0x28
    _Bool _success;	// 48 = 0x30
    _Bool _active;	// 49 = 0x31
    unsigned long long _totalOperationCount;	// 56 = 0x38
    unsigned long long _completedOperationCount;	// 64 = 0x40
    ML3ClientImportResult *_currentResult;	// 72 = 0x48
    NSRunLoop *_importSessionRunLoop;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000012131
- (void)_reportProgress;	// IMP=0x0010000000012023
- (void)_adjustProgressForIncomingOperationCount:(unsigned long long)arg1;	// IMP=0x001000000001200f
- (void)_removeItems:(id)arg1;	// IMP=0x0010000000011b37
- (void)_updateItems:(id)arg1;	// IMP=0x0010000000011651
- (void)_addItems:(id)arg1;	// IMP=0x001000000001116b
- (void)_endSessionCommittingChanges:(id)arg1;	// IMP=0x0010000000010ea9
- (void)_beginSessionWithConfiguration:(id)arg1;	// IMP=0x0010000000010ad3
- (void)_startImportThread;	// IMP=0x0010000000010a14
- (void)removeItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010915
- (void)updateItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010816
- (void)addItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010717
- (void)cancelSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000106b0
- (void)endSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000105e7
- (void)beginSessionWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000104f2
- (void)stop;	// IMP=0x001000000001049e
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000103b5

@end

