//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface IXGlobalConfiguration : NSObject
{
    struct os_unfair_lock_s _dynamicPropertyLock;	// 8 = 0x8
    unsigned int _daemonUID;	// 12 = 0xc
    unsigned int _daemonGID;	// 16 = 0x10
    NSURL *_dataStorageHome;	// 24 = 0x18
    NSURL *_daemonUserHome;	// 32 = 0x20
    NSURL *_rootPath;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0040000000007b2c
- (void).cxx_destruct;	// IMP=0x0020000000008c3f
@property(readonly, nonatomic) NSURL *rootPath; // @synthesize rootPath=_rootPath;
@property(readonly, nonatomic) NSURL *daemonUserHome; // @synthesize daemonUserHome=_daemonUserHome;
@property(readonly, nonatomic) unsigned int daemonGID; // @synthesize daemonGID=_daemonGID;
@property(readonly, nonatomic) unsigned int daemonUID; // @synthesize daemonUID=_daemonUID;
@property(readonly, nonatomic) NSURL *dataStorageHome; // @synthesize dataStorageHome=_dataStorageHome;
@property(readonly, nonatomic) NSURL *userVolumeURL;
@property(readonly, nonatomic) NSURL *frameworkURL;
- (id)extractedInstallableStagingDirectory:(id *)arg1;	// IMP=0x00100000000089f6
- (id)remoteInstallationStagingDirectory:(id *)arg1;	// IMP=0x0010000000008991
- (id)removabilityDirectoryAbortingOnError;	// IMP=0x00100000000088eb
- (id)removabilityDirectoryWithError:(id *)arg1;	// IMP=0x0010000000008886
- (id)promiseStagingRootDirectoryAbortingOnError;	// IMP=0x00100000000087e0
- (id)promiseStagingRootDirectoryWithError:(id *)arg1;	// IMP=0x001000000000877b
- (id)dataDirectoryAbortingOnError;	// IMP=0x00100000000086d5
- (id);	// IMP=0x0010000000008670
- (id)_dataStorageHomeURLWithError:(id *)arg1;	// IMP=0x0010000000008507
- (void)createDirectories;	// IMP=0x0010000000007ca9
- (id)init;	// IMP=0x0010000000007bb9

@end

