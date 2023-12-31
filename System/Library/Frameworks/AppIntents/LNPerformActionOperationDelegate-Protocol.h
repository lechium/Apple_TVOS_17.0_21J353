//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppIntents/NSObject-Protocol.h>

@class LNAppContext, LNPerformActionOperation, NSError, NSXPCConnection;

@protocol LNPerformActionOperationDelegate <NSObject>
@property(readonly, nonatomic) NSXPCConnection *xpcConnection;
@property(readonly, nonatomic) LNAppContext *appContext;
- (void)performActionOperation:(LNPerformActionOperation *)arg1 didFinishWithResult:(id)arg2 error:(NSError *)arg3;
@end

