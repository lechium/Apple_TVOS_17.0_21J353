//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetAppsUtilities/NSObject-Protocol.h>

@class NSError;

@protocol NAPromise <NSObject>
- (void (^)(NSError *))errorOnlyCompletionHandlerAdapter;
- (void (^)(id, NSError *))completionHandlerAdapter;
- (_Bool)finishWithNoResult;
- (_Bool)finishWithResult:(id)arg1 error:(NSError *)arg2;
- (_Bool)finishWithResult:(id)arg1;
- (_Bool)finishWithError:(NSError *)arg1;
@end

