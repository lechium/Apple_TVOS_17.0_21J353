//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HBCloudSyncAppDownloadUninstallService : NSObject
{
}

+ (_Bool)canInstallAppFromCloudRecord:(id)arg1;	// IMP=0x00800000000affb2
+ (void)uninstallApplicationsWithProxies:(id)arg1;	// IMP=0x00800000000afa4c
+ (void)triggerAppInstallationForAppRecords:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00800000000aee46
+ (void)initialize;	// IMP=0x00800000000aedf5

@end

