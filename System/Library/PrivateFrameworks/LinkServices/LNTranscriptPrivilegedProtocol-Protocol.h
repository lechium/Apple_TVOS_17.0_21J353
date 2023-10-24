//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkServices/LNTranscriptProtocol-Protocol.h>

@class NSData, NSString;

@protocol LNTranscriptPrivilegedProtocol <LNTranscriptProtocol>
- (void)requestReadAccessForStream:(NSString *)arg1 reply:(void (^)(NSSecurityScopedURLWrapper *, NSError *))arg2;
- (void)donateActionRecordData:(NSData *)arg1 bundleIdentifier:(NSString *)arg2 timestamp:(double)arg3 writeImmediately:(_Bool)arg4 reply:(void (^)(NSError *))arg5;
@end

