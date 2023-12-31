//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSystemServiceConnection;

@interface PBDisplayManagerService : NSObject
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000086010
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void)enableAtmos:(_Bool)arg1;	// IMP=0x0010000000085eb7
- (void)enableModeSwitchingForFrameRate:(_Bool)arg1;	// IMP=0x0010000000085d75
- (void)enableModeSwitchingForDynamicRange:(_Bool)arg1;	// IMP=0x0010000000085c33
- (void)fetchCurrentDisplayStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000085ad6
- (void)displayAssistantDidCompleteForKind:(id)arg1;	// IMP=0x001000000008595b
- (void)setAudioLatency:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000857ad
- (void)displayAssistantDidStartForKind:(id)arg1;	// IMP=0x0010000000085637
- (void)removeCableCheckHistory;	// IMP=0x0010000000085535
- (void)forgetDisplaysForDisplayAssistant;	// IMP=0x0010000000085433
- (void)presentDisplayAssistantWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000085284
- (void)handleRegionChangeWithNewCountryCode:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000850d5
- (void)wakeDisplayWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000084f5e
- (void)sleepDisplayWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000084de7
- (void)updateDisplayManagerWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000084c38
- (_Bool)ensuredValidEntitlementWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000084a7d
- (void)invalidate;	// IMP=0x00100000000849e9
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x0010000000084985
- (id)init;	// IMP=0x0010000000084977

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

