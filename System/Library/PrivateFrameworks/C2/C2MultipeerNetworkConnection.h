//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "C2MultipeerConnection.h"

@class NSMutableData, NSObject;
@protocol OS_nw_connection;

__attribute__((visibility("hidden")))
@interface C2MultipeerNetworkConnection : C2MultipeerConnection
{
    int _connectionState;	// 48 = 0x30
    NSObject<OS_nw_connection> *_connection;	// 56 = 0x38
    NSMutableData *_receiveLengthBuffer;	// 64 = 0x40
    NSMutableData *_receiveMessageBuffer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000015f93
@property(retain, nonatomic) NSMutableData *receiveMessageBuffer; // @synthesize receiveMessageBuffer=_receiveMessageBuffer;
@property(retain, nonatomic) NSMutableData *receiveLengthBuffer; // @synthesize receiveLengthBuffer=_receiveLengthBuffer;
@property(nonatomic) int connectionState; // @synthesize connectionState=_connectionState;
@property(retain, nonatomic) NSObject<OS_nw_connection> *connection; // @synthesize connection=_connection;
- (void)sendMessageWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000158c9
- (void)receiveNextMessage;	// IMP=0x0000000000014fcb
- (void)stopConnection;	// IMP=0x0000000000014f8a
- (void)startConnection;	// IMP=0x00000000000148db
- (id)initWithParent:(id)arg1 queue:(id)arg2 connection:(id)arg3 peerID:(id)arg4;	// IMP=0x0000000000014801

@end
