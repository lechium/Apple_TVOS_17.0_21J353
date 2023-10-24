//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSString;
@protocol OS_dispatch_queue;

@interface RemoteNotificationHandler : NSObject
{
    APSConnection *_apsConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_apsQueue;	// 16 = 0x10
}

+ (id)sharedHandler;	// IMP=0x0020000000013733
- (void).cxx_destruct;	// IMP=0x0020000000015c83
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *apsQueue; // @synthesize apsQueue=_apsQueue;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
- (id)_storeDSIDs;	// IMP=0x00100000000159e7
- (id)_cloudDSID;	// IMP=0x0010000000015966
- (void)_handleRequesterNotification:(id)arg1;	// IMP=0x00100000000156bf
- (void)_handleStoreNotificationPayload:(id)arg1;	// IMP=0x0010000000014b21
- (void)_handleApproverNotification:(id)arg1;	// IMP=0x0010000000014a0d
- (void)_handleCloudNotificationPayload:(id)arg1;	// IMP=0x0010000000014184
- (void)_startConnection;	// IMP=0x0010000000013e12
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00100000000139dc
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00100000000138ce
- (void)handleLegacyStoreNotificationPayload:(id)arg1;	// IMP=0x00100000000137f9
- (void)start;	// IMP=0x0010000000013788

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
