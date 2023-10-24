//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_connection;

__attribute__((visibility("hidden")))
@interface HMDNetworkConnection : NSObject
{
    NSObject<OS_nw_connection> *_nwConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005db354
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSObject<OS_nw_connection> *nwConnection; // @synthesize nwConnection=_nwConnection;
- (void)resetTrafficClass:(unsigned long long)arg1;	// IMP=0x00000000005db29a
- (void)setReadCloseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005db239
- (void)setStateChangedHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005db177
- (void)receiveMessageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005db0ce
- (void)receiveWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005db01a
- (void)sendData:(id)arg1 context:(id)arg2 isComplete:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000005daf36
- (void)cancel;	// IMP=0x00000000005daf01
- (void)start;	// IMP=0x00000000005daecc
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;	// IMP=0x00000000005dae3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
