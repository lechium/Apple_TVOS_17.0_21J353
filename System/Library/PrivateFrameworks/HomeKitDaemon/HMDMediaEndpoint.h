//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaBrowser, NSArray, NSMutableArray, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMediaEndpoint : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    unsigned int _connectionState;	// 12 = 0xc
    void *_retainedEndpoint;	// 16 = 0x10
    NSSet *_outputDeviceIdentifiers;	// 24 = 0x18
    NSString *_sessionIdentifier;	// 32 = 0x20
    NSString *_localizedName;	// 40 = 0x28
    NSString *_logID;	// 48 = 0x30
    HMDMediaBrowser *_browser;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
    NSMutableArray *_pendingBlocks;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x0010000000666e50
- (void).cxx_destruct;	// IMP=0x0000000000665a4b
@property(retain, nonatomic) NSMutableArray *pendingBlocks; // @synthesize pendingBlocks=_pendingBlocks;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak HMDMediaBrowser *browser; // @synthesize browser=_browser;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (id)logIdentifier;	// IMP=0x00000000006659a3
@property(readonly, copy) NSString *description;
- (void)_setPlaybackState:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006657d8
- (void)setPlaybackState:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000665721
- (void)_getPlaybackStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000665644
- (void)getPlaybackStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000066558c
- (void)_notifyPendingBlocksOfError:(id)arg1;	// IMP=0x0000000000665419
- (void)evaluateIfMediaPlaybackStateChanged:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000066533b
- (_Bool)doesContainAnyAccessory:(id)arg1;	// IMP=0x000000000066528e
@property(readonly, nonatomic) NSArray *advertisements;
- (void)registerForNowPlayingUpdates:(_Bool)arg1;	// IMP=0x0000000000665057
- (void)_connectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000664ccc
- (void)updateOutputDevicesAndConnectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000664c14
- (void)_updateOutputDevicesAndConnectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000664bc2
- (void)disconnectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000664b0a
- (void)disconnectFromEndpoint:(void *)arg1;	// IMP=0x0000000000664a8b
- (void *)copyOrigin;	// IMP=0x0000000000664995
@property(readonly, nonatomic) void *externalDevice;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(retain, nonatomic) NSSet *outputDeviceIdentifiers; // @synthesize outputDeviceIdentifiers=_outputDeviceIdentifiers;
@property(nonatomic) unsigned int connectionState; // @synthesize connectionState=_connectionState;
- (void)updateWithEndpoint:(id)arg1;	// IMP=0x000000000066460f
- (void)_updateOutputDeviceIdentifiers;	// IMP=0x00000000006644d7
- (void)setRetainedEndpoint:(void *)arg1;	// IMP=0x0000000000664452
@property(readonly) void *retainedEndpoint; // @synthesize retainedEndpoint=_retainedEndpoint;
- (_Bool)isEqualToEndpoint:(void *)arg1;	// IMP=0x00000000006643b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000066428e
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x000000000066421f
- (id)initWithEndpoint:(void *)arg1;	// IMP=0x0000000000664017

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

