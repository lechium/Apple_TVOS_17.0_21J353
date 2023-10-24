//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEFilterSettings, NSError;

@protocol NEFilterPluginManager
- (void)applySettings:(NEFilterSettings *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)acceptAgentClients;
- (void)setStatus:(long long)arg1 error:(NSError *)arg2;
- (void)createPacketChannelWithCompletionHandler:(void (^)(NSUUID *))arg1;
- (void)createContentFilterSocketWithCompletionHandler:(void (^)(NSFileHandle *))arg1;
@end

