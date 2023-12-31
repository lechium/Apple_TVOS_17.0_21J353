//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, ProgressCache;

@interface LaunchServicesProgress : NSObject
{
    ProgressCache *_progressCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004c532
- (_Bool)observeLaunchProhibitedApps;	// IMP=0x001000000004c1ba
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x001000000004bf8f
- (void)resumeApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004bdab
- (void)pauseApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004bbc5
- (void)cancelApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004b855
- (void)cancelApp:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b74a
- (void)dealloc;	// IMP=0x001000000004b6d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

