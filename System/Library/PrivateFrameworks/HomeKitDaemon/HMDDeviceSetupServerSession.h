//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDDeviceSetupServerSession
{
    NSObject<OS_os_log> *_logger;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000002b6936
+ (id)allowedClasses;	// IMP=0x00100000002b6856
+ (_Bool)isSupported;	// IMP=0x00100000002b680b
+ (long long)role;	// IMP=0x00100000002b6800
- (void).cxx_destruct;	// IMP=0x00000000002b67ed
- (_Bool)processSessionData:(id)arg1 fromBundle:(id)arg2 outAccessoryUUID:(id *)arg3 outAccessoryIDSIdentifier:(id *)arg4 error:(id *)arg5;	// IMP=0x00000000002b551a
- (id)initWithHomeManager:(id)arg1;	// IMP=0x00000000002b54b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

