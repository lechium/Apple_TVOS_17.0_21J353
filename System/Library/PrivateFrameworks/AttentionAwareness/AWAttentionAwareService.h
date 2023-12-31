//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionAwareService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_schedulers;	// 16 = 0x10
    int _supportedEventsNotify;	// 24 = 0x18
    unsigned long long _supportedEvents;	// 32 = 0x20
    unsigned long long _clientCount;	// 40 = 0x28
}

+ (id)sharedAttentionService;	// IMP=0x001000000000a0ea
- (void).cxx_destruct;	// IMP=0x0000000000009669
@property unsigned long long clientCount; // @synthesize clientCount=_clientCount;
- (id)getFaceDetectScheduler;	// IMP=0x0000000000009638
- (id)getMotionDetectScheduler;	// IMP=0x000000000000961b
- (void)crashWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000093db
- (void)getUnitTestSamplerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000920f
- (void)_createUnitTestScheduler;	// IMP=0x0000000000009125
- (void)outputPowerLogWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000906e
- (void)setDebugPreference:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008e06
- (void)getDebugPreferences:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008d98
- (void)getSupportedEventsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008d85
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x0000000000008d37
- (void)processHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 senderID:(unsigned long long)arg4 displayUUID:(id)arg5;	// IMP=0x0000000000008c5f
- (void)addClient:(id)arg1 clientConfig:(id)arg2 clientIndex:(int)arg3 unitTestMode:(_Bool)arg4 reply:(CDUnknownBlockType)arg5 subscribeForStreamingEvents:(_Bool)arg6;	// IMP=0x000000000000895a
- (void)clientCountChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forScheduler:(id)arg3;	// IMP=0x00000000000086f7
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000085a7
- (void)dealloc;	// IMP=0x0000000000008569
- (id)init;	// IMP=0x00000000000082eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

