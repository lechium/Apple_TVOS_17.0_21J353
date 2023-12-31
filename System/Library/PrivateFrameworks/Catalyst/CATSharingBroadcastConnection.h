//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperationQueue, CATSharingDevice, NSError, NSString;
@protocol CATSharingBroadcastPrimitives, CATSharingConnectionDelegate, CATTimer, CATTimerSource;

__attribute__((visibility("hidden")))
@interface CATSharingBroadcastConnection : NSObject
{
    id <CATSharingBroadcastPrimitives> mBroadcastPrimitives;	// 8 = 0x8
    _Bool mIsClosing;	// 16 = 0x10
    id <CATTimerSource> mTimerSource;	// 24 = 0x18
    id <CATTimer> mTombstoneTimer;	// 32 = 0x20
    CATOperationQueue *mOutgoingQueue;	// 40 = 0x28
    CATOperationQueue *mCatalystQueue;	// 48 = 0x30
    _Bool _closed;	// 56 = 0x38
    id <CATSharingConnectionDelegate> _delegate;	// 64 = 0x40
    NSError *_closedError;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001002c
@property(retain, nonatomic) NSError *closedError; // @synthesize closedError=_closedError;
@property(nonatomic, getter=isClosed) _Bool closed; // @synthesize closed=_closed;
@property(nonatomic) __weak id <CATSharingConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendTearDownMessageWithError:(id)arg1;	// IMP=0x000000000000fd4d
- (void)handleSentMessage:(id)arg1;	// IMP=0x000000000000fc50
- (void)handleCloseMessage:(id)arg1;	// IMP=0x000000000000fb72
- (void)handleUnparsableMessageDictionary:(id)arg1;	// IMP=0x000000000000fa9c
- (void)messageReceived:(id)arg1;	// IMP=0x000000000000f92d
- (void)removeBroadcastPrimitiveHandlers;	// IMP=0x000000000000f8d5
- (void)addBroadcastPrimitiveHandlers;	// IMP=0x000000000000f5f0
- (void)tombstoneWithError:(id)arg1;	// IMP=0x000000000000f504
- (void)closeWithError:(id)arg1 reportToRemote:(_Bool)arg2;	// IMP=0x000000000000f471
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f1db
- (void)_close;	// IMP=0x000000000000f176
- (void)_sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f05a
- (void)close;	// IMP=0x000000000000ef25
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ed55
@property(readonly, nonatomic) CATSharingDevice *remoteDevice;
- (id)initWithBroadcastPrimitives:(id)arg1 timerSource:(id)arg2;	// IMP=0x000000000000ec33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

