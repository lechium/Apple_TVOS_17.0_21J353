//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSActivityMonitor, NSString;

__attribute__((visibility("hidden")))
@interface HMDIDSActivityMonitor : NSObject
{
    IDSActivityMonitor *_activityMonitor;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000009487af
- (void).cxx_destruct;	// IMP=0x0000000000948275
@property(readonly) IDSActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
- (id)logIdentifier;	// IMP=0x0000000000948211
@property(readonly, copy) NSString *description;
- (void)stopBroadcastingSubActivity:(id)arg1;	// IMP=0x0000000000947f8b
- (void)broadcastSubActivity:(id)arg1 toPushTokens:(id)arg2;	// IMP=0x00000000009478f2
- (void)listenWithDelegate:(id)arg1;	// IMP=0x00000000009477ae
- (id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2;	// IMP=0x0000000000947707

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

