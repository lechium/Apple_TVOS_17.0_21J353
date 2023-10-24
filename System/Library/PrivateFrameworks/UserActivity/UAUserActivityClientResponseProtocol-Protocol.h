//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSFileHandle, NSUUID;

@protocol UAUserActivityClientResponseProtocol <NSObject>
- (void)tellClientDebuggingEnabled:(_Bool)arg1 logFileHandle:(NSFileHandle *)arg2;
- (void)tellClientUserActivityItWasResumed:(NSUUID *)arg1;
- (void)askClientUserActivityToSave:(NSUUID *)arg1 completionHandler:(void (^)(UAUserActivityInfo *, _Bool, NSError *))arg2;
- (void)askClientUserActivityToSave:(NSUUID *)arg1;
@end

