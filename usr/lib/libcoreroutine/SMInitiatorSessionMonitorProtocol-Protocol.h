//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SMInitiatorSessionMonitorProtocol
- (void)fetchCurrentSessionStateWithHandler:(void (^)(SMSessionManagerState *, _Bool, NSError *))arg1;
- (void)stopMonitoringSessionStateWithHandler:(void (^)(NSError *))arg1;
- (void)startMonitoringSessionStateWithHandler:(void (^)(SMSessionManagerState *, _Bool, NSError *))arg1;
@end

