//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CSDBlockedCallFilter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000ddb8c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00100000000ddb7a
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x00100000000ddb72
- (_Bool)shouldFilterIncomingCall:(id)arg1 from:(id)arg2;	// IMP=0x00100000000ddb6a
- (_Bool)isUnknownCaller:(id)arg1;	// IMP=0x00100000000ddb62
- (_Bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x00100000000ddb5a
- (long long)filterStatusForAddresses:(id)arg1 withBundleIdentifier:(id)arg2;	// IMP=0x00100000000ddb52
- (_Bool)containsRestrictedHandle:(id)arg1;	// IMP=0x00100000000ddb4a
- (_Bool)containsRecentsRestrictedHandle:(id)arg1;	// IMP=0x00100000000ddb42
- (_Bool)containsOutgoingRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x00100000000ddb3a
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000000ddacf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

