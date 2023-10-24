//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TimeSync/TSXKernelClockClientProtocol-Protocol.h>

@class NSArray;

@protocol TSXgPTPClockClientProtocol <TSXKernelClockClientProtocol>
- (void)updateGrandmasterIdentity:(unsigned long long)arg1 andgPTPPath:(NSArray *)arg2;
- (void)updateWithSyncInfoValid:(_Bool)arg1 syncFlags:(unsigned char)arg2 timeSyncTime:(unsigned long long)arg3 domainTimeHi:(unsigned long long)arg4 domainTimeLo:(unsigned long long)arg5 cumulativeScaledRate:(unsigned long long)arg6 inverseCumulativeScaledRate:(unsigned long long)arg7 grandmasterID:(unsigned long long)arg8 localPortNumber:(unsigned short)arg9;
- (void)changeLocalPortGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2;
- (void)endGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2;
- (void)beginGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2;
@end
