//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

@interface ConnectionReceiver : NSObject
{
    NSXPCListener *_connectionListener;	// 8 = 0x8
}

+ (id)sharedReceiver;	// IMP=0x002000000000a41d
- (void).cxx_destruct;	// IMP=0x002000000000b932
@property(retain, nonatomic) NSXPCListener *connectionListener; // @synthesize connectionListener=_connectionListener;
- (void)didReceiveStorePushNotificationWithPayload:(id)arg1;	// IMP=0x001000000000b7af
- (void)restartAPNSConnection;	// IMP=0x001000000000b76b
- (void)checkDownloadQueueWithContentType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b42f
- (void)resetAccountWithType:(long long)arg1;	// IMP=0x001000000000afd0
- (void)addRequestWithURL:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ab66
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000a64a
- (void)start;	// IMP=0x001000000000a472

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
