//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;
@protocol HMMRTCReporting;

@protocol HMMRTCReportingFactory
- (id <HMMRTCReporting>)sessionWithServiceName:(NSString *)arg1 samplingUUID:(NSUUID *)arg2 containsRealtime:(_Bool)arg3;
@end

