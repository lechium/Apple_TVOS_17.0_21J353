//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@protocol CPPresenceSessionXPCHost
- (void)updateMembers:(NSSet *)arg1 completion:(void (^)(NSError *))arg2;
- (void)leaveWithCompletion:(void (^)(NSError *))arg1;
- (void)joinWithCompletion:(void (^)(NSError *))arg1;
@end

