//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol GCConfigurationBundleSource, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_workloop, OS_os_log;

__attribute__((visibility("hidden")))
@interface _GCConfigurationBundleLocator : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    NSObject<OS_dispatch_workloop> *_workloop;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSArray *_mergedBundles;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_filesystemChangedEventSource;	// 40 = 0x28
    id <GCConfigurationBundleSource> _filesystemSource;	// 48 = 0x30
    NSArray *_filesystemBundles;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_assetsChangedEventSource;	// 64 = 0x40
    id <GCConfigurationBundleSource> _assetSource;	// 72 = 0x48
    NSArray *_assetBundles;	// 80 = 0x50
    NSString *_configurationType;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000026017
@property(readonly) NSString *configurationType; // @synthesize configurationType=_configurationType;
- (void)_assetDidChange:(id)arg1;	// IMP=0x0000000000025ff0
- (void)_filesystemDidChange:(id)arg1;	// IMP=0x0000000000025d39
- (id)fetchBundles;	// IMP=0x00000000000257d3
- (void)dealloc;	// IMP=0x0000000000025718
- (id)init;	// IMP=0x00000000000256ed
- (id)initWithConfigurationType:(id)arg1 provider:(id)arg2;	// IMP=0x0000000000024a25

@end

