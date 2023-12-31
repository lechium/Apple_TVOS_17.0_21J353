//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableEngagementEvent : NSObject
{
}

+ (void)_waitForPromises:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000035edd0
+ (id)_eventForStaticAssetPayload:(id)arg1 bag:(id)arg2;	// IMP=0x001000000035ea5a
+ (id)_eventForMapiPayload:(id)arg1 account:(id)arg2 bag:(id)arg3;	// IMP=0x001000000035e4c8
+ (_Bool)shouldSkipAccountCheck;	// IMP=0x001000000035e4c0
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;	// IMP=0x001000000035da79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

