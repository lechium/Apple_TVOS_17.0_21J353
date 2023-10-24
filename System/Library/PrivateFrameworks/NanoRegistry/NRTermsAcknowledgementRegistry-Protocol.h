//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoRegistry/NSObject-Protocol.h>

@class NRTermsEvent, NSUUID;

@protocol NRTermsAcknowledgementRegistry <NSObject>
- (void)checkForAcknowledgement:(NRTermsEvent *)arg1 forDeviceID:(NSUUID *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)add:(NRTermsEvent *)arg1 forDeviceID:(NSUUID *)arg2 withCompletion:(void (^)(NSError *))arg3;
@end

