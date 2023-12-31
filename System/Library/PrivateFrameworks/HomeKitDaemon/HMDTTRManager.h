//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDUIDialogPresenter, NSString, NSUUID;
@protocol HMDTTRDataStoring, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDTTRManager : NSObject
{
    HMDUIDialogPresenter *_dialog;	// 8 = 0x8
    id <HMDTTRDataStoring> _dataStore;	// 16 = 0x10
    CDUnknownBlockType _dateFactory;	// 24 = 0x18
}

+ (id)queue;	// IMP=0x0010000000bf10de
+ (id)namespaceUUID;	// IMP=0x0010000000bf10ae
+ (id)defaultManager;	// IMP=0x0010000000bf107e
- (void).cxx_destruct;	// IMP=0x0000000000bf1032
@property(readonly, nonatomic) CDUnknownBlockType dateFactory; // @synthesize dateFactory=_dateFactory;
@property(readonly, nonatomic) id <HMDTTRDataStoring> dataStore; // @synthesize dataStore=_dataStore;
@property(readonly, nonatomic) HMDUIDialogPresenter *dialog; // @synthesize dialog=_dialog;
- (void)handleResetLastTTRTime:(id)arg1;	// IMP=0x0000000000bf0fc5
- (void)handlePresentTTRDialog:(id)arg1;	// IMP=0x0000000000bf0f0e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x0000000000bf0e8b
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)resetLastTTRTime;	// IMP=0x0000000000bf0e32
- (void)requestRadarWithMessage:(id)arg1 radarTitle:(id)arg2 componentName:(id)arg3 componentVersion:(id)arg4 componentID:(id)arg5;	// IMP=0x0000000000bf0e2c
- (void)requestRadarWithMessage:(id)arg1 radarTitle:(id)arg2;	// IMP=0x0000000000bf0df8
- (id)initWithDialog:(id)arg1 dataStore:(id)arg2 dateFactory:(CDUnknownBlockType)arg3;	// IMP=0x0000000000bf0d36
- (id)init;	// IMP=0x0000000000bf0cba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

