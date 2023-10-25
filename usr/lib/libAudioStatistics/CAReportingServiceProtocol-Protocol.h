//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AudioStatistics/NSObject-Protocol.h>

@class NSArray, NSDictionary;

@protocol CAReportingServiceProtocol <NSObject>
- (void)killService;
- (void)getAllReporters:(void (^)(NSError *, NSArray *))arg1;
- (void)reporterID:(long long)arg1 valid:(void (^)(NSError *, NSDictionary *))arg2;
- (void)requestMessageForID:(long long)arg1 withCategory:(unsigned int)arg2 andType:(unsigned short)arg3 reply:(void (^)(NSError *, NSDictionary *))arg4;
- (void)destroyReportingSession:(long long)arg1;
- (void)stopReportingSessionForID:(long long)arg1;
- (void)sendMessage:(NSDictionary *)arg1 withCategory:(unsigned int)arg2 andType:(unsigned short)arg3 forReportingIDs:(NSArray *)arg4;
- (void)startReportingSessionForID:(long long)arg1 reply:(void (^)(NSError *, _Bool))arg2;
- (void)startReportingSessionForID:(long long)arg1;
- (void)setConfiguration:(NSDictionary *)arg1 forReporterID:(long long)arg2;
- (void)getServiceNameForReporterID:(long long)arg1 reply:(void (^)(NSError *, unsigned short))arg2;
- (void)setServiceType:(unsigned short)arg1 reportingSession:(long long)arg2;
- (void)createReportingSession:(long long)arg1;
@end

