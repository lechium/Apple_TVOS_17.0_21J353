//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSSet;
@protocol MGRemoteQueryClientBrowserDelegate, OS_dispatch_queue, OS_nw_browser;

__attribute__((visibility("hidden")))
@interface MGRemoteQueryClientBrowser : NSObject
{
    _Bool _invalidated;	// 8 = 0x8
    id <MGRemoteQueryClientBrowserDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSObject<OS_nw_browser> *_browser;	// 32 = 0x20
    NSSet *_knownTargets;	// 40 = 0x28
    NSSet *_updatedTargets;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000037e0
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSSet *updatedTargets; // @synthesize updatedTargets=_updatedTargets;
@property(retain, nonatomic) NSSet *knownTargets; // @synthesize knownTargets=_knownTargets;
@property(retain, nonatomic) NSObject<OS_nw_browser> *browser; // @synthesize browser=_browser;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) __weak id <MGRemoteQueryClientBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_targetForBrowseResult:(id)arg1;	// IMP=0x00000000000034e5
- (void)_applyUpdates;	// IMP=0x00000000000030a3
- (void)_handleBrowseChangeFromTarget:(id)arg1 toTarget:(id)arg2 applyBatch:(_Bool)arg3;	// IMP=0x0000000000002e69
- (void)_prepareBrowserHandlers;	// IMP=0x000000000000289c
- (id)_prepareBrowseParameters;	// IMP=0x0000000000002833
- (id)_prepareBrowseDescriptor;	// IMP=0x00000000000027ab
- (void)_invalidated;	// IMP=0x0000000000002637
- (void)_invalidate;	// IMP=0x00000000000024ae
- (void)_startBrowsing;	// IMP=0x0000000000002236
- (id)description;	// IMP=0x000000000000214b
- (void)dealloc;	// IMP=0x000000000000210d
- (id)initWithDelegate:(id)arg1 dispatchQueue:(id)arg2;	// IMP=0x0000000000001f50

@end

