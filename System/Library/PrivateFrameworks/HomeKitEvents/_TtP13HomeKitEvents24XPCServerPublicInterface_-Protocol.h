//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@protocol _TtP13HomeKitEvents24XPCServerPublicInterface_
- (void)resetConfigurationWithReply:(void (^)(NSError *))arg1;
- (void)createFakeEventsWithEventsData:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;
- (void)createEventsWithEventsData:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;
- (void)clearEventsWithHomes:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;
@end
