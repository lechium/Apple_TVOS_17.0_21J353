//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol _TtP7parsecd12PGSDaemonXPC_
- (void)reportPegasusFeedbackWithPayloadData:(NSData *)arg1 forUseragent:(NSString *)arg2;
- (void)getIsDeviceSetupCompleteWithReply:(void (^)(long long, NSError *))arg1;
- (void)getBagDataWithReply:(void (^)(NSData *, NSError *))arg1;
- (void)getQueryContextDataWithRequestor:(unsigned long long)arg1 reply:(void (^)(NSData *, NSError *))arg2;
@end

