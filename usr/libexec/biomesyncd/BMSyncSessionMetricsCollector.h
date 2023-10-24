//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDatabase;

@interface BMSyncSessionMetricsCollector : NSObject
{
    BMSyncDatabase *_database;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000620c
- (void)recordAtomMergeResult:(unsigned long long)arg1 inStream:(id)arg2 ownerSite:(id)arg3 originatingSite:(id)arg4 eventCreatedAt:(double)arg5 sessionContext:(id)arg6;	// IMP=0x00100000000060bf
- (void)recordMessageToDeviceIdentifier:(id)arg1 reachable:(_Bool)arg2 bytes:(unsigned long long)arg3 isReciprocal:(_Bool)arg4 sessionContext:(id)arg5;	// IMP=0x0010000000005fa1
- (void)recordSessionEnd:(id)arg1 lastSyncDate:(id)arg2;	// IMP=0x0010000000005ef9
- (void)recordSessionStart:(id)arg1 transport:(unsigned long long)arg2 reason:(unsigned long long)arg3 isReciprocal:(_Bool)arg4;	// IMP=0x0010000000005ee3
- (id)sessionContext;	// IMP=0x0010000000005e43
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000005dd8

@end

