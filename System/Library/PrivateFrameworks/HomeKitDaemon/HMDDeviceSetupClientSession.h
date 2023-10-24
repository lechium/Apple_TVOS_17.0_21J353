//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDDeviceSetupClientSession
{
    NSObject<OS_os_log> *_logger;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000002b6eea
+ (id)allowedClasses;	// IMP=0x00100000002b6e0a
+ (_Bool)isSupported;	// IMP=0x00100000002b6dbf
+ (long long)role;	// IMP=0x00100000002b6db7
- (void).cxx_destruct;	// IMP=0x00000000002b54a6
- (_Bool)processSessionData:(id)arg1 fromBundle:(id)arg2 outAccessoryUUID:(id *)arg3 outAccessoryIDSIdentifier:(id *)arg4 error:(id *)arg5;	// IMP=0x00000000002b413f
- (id)initWithHomeManager:(id)arg1;	// IMP=0x00000000002b40de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

