//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class LSApplicationWorkspace, NSArray, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDApplicationRegistry : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_applications;	// 16 = 0x10
    LSApplicationWorkspace *_workspace;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000803e78
+ (id)sharedRegistry;	// IMP=0x0010000000803e48
- (void).cxx_destruct;	// IMP=0x00000000008039b5
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000000080385d
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000000080355a
- (id)applicationInfoForBundleIdentifier:(id)arg1;	// IMP=0x000000000080343f
- (id)applicationInfoForBundleURL:(id)arg1;	// IMP=0x000000000080334e
@property(readonly, copy) NSArray *applications;
- (void)dealloc;	// IMP=0x000000000080329a
- (id)init;	// IMP=0x00000000008031dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

