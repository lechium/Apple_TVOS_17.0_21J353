//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SSVPlaybackLease;

__attribute__((visibility("hidden")))
@interface _TVCKFusePlaybackLease : NSObject
{
    int _assetCount;	// 8 = 0x8
    SSVPlaybackLease *_lease;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0010000000015dfb
- (void).cxx_destruct;	// IMP=0x000000000001632d
@property(retain, nonatomic) SSVPlaybackLease *lease; // @synthesize lease=_lease;
- (void)playbackLeaseDidEnd:(id)arg1;	// IMP=0x000000000001629e
- (void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3;	// IMP=0x00000000000160f7
- (void)_endLease;	// IMP=0x00000000000160ba
- (id)_init;	// IMP=0x0000000000015fd6
- (void)cleanupAsset;	// IMP=0x0000000000015fac
- (void)getAssetWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015f01
- (id)init;	// IMP=0x0000000000015ef3
- (void)dealloc;	// IMP=0x0000000000015e60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

