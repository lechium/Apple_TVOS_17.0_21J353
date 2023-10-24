//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ApplePushService/APSConnection.h>

@class NSArray, NSString;
@protocol HMBAPSConnectionDelegate;

@interface APSConnection (HMBCloudPushHandler)

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <HMBAPSConnectionDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(copy) NSArray *enabledTopics;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

