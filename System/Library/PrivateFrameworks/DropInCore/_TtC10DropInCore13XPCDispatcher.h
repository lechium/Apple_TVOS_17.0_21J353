//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC10DropInCore13XPCDispatcher : _TtCs12_SwiftObject
{
    MISSING_TYPE *dropInManager;	// 16 = 0x10
    MISSING_TYPE *audioSystemManager;	// 24 = 0x18
    MISSING_TYPE *logger;	// 0 = 0x0
    MISSING_TYPE *xpcClientDataSource;	// 0 = 0x0
}

- (void)getDownlinkMutedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012642
- (void)getUplinkMutedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012601
- (void)setDownlinkMuted:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000125f0
- (void)setUplinkMuted:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012318
- (void)requestStateForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001229c
- (void)updateState:(long long)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011b52
- (void)registerAudioPowerWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011140
- (void)loadDevicesWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000109b5
- (void)getUplinkMutedForCurrentSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ff71
- (void)setUplinkMutedForCurrentSession:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f8e3
- (void)getCurrentSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f0df
- (void)endSessionWithContext:(id)arg1 session:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ee7b
- (void)startSessionWithContext:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e839
- (void)cancelSessionWithContext:(id)arg1 session:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e258
- (void)checkInWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dfb8

@end
