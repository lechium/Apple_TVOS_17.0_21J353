//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;
@protocol HMDDataStreamProtocolDelegate;

__attribute__((visibility("hidden")))
@interface HMDDataStreamStreamProtocol : NSObject
{
    NSMapTable *_sockets;	// 8 = 0x8
    id <HMDDataStreamProtocolDelegate> _dataStream;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000006f64e9
+ (id)protocolName;	// IMP=0x00100000006f64ca
- (void).cxx_destruct;	// IMP=0x00000000006f648e
@property(readonly) __weak id <HMDDataStreamProtocolDelegate> dataStream; // @synthesize dataStream=_dataStream;
@property(readonly) NSMapTable *sockets; // @synthesize sockets=_sockets;
- (void)_closeAllSocketsWithError:(id)arg1;	// IMP=0x00000000006f62b2
- (void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x00000000006f618a
- (void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x00000000006f6062
- (void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x00000000006f5dd8
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000006f5dc3
- (void)dataStreamDidClose:(id)arg1;	// IMP=0x00000000006f5daf
- (void)dataStreamInitiatedClose:(id)arg1;	// IMP=0x00000000006f5c58
- (void)dataStreamDidOpen:(id)arg1;	// IMP=0x00000000006f5c52
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)sendData:(id)arg1 socket:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000006f5a8a
- (void)_notifyActiveStatusChangedFromPreviousValue:(_Bool)arg1;	// IMP=0x00000000006f592c
- (void)_reevaluateTrafficClassForDataStream;	// IMP=0x00000000006f559c
- (void)evaluateOptionsForSocket:(id)arg1;	// IMP=0x00000000006f558a
- (void)unregisterSocket:(id)arg1;	// IMP=0x00000000006f5437
- (void)registerSocket:(id)arg1;	// IMP=0x00000000006f52d0
- (id)initWithDataStream:(id)arg1;	// IMP=0x00000000006f5242

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

