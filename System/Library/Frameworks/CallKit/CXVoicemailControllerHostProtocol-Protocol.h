//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/NSObject-Protocol.h>

@class CXTransaction;

@protocol CXVoicemailControllerHostProtocol <NSObject>
- (oneway void)requestTransaction:(CXTransaction *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)requestVoicemails:(void (^)(NSArray *))arg1;
@end

