//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKEvent, NSData, NSString;

@protocol EKSerializer
- (NSString *)version;
- (NSString *)versionFromData:(NSData *)arg1 error:(id *)arg2;
- (EKEvent *)deserializeData:(NSData *)arg1 isNew:(id *)arg2 error:(id *)arg3;
- (NSData *)serializeEvent:(EKEvent *)arg1 error:(id *)arg2;
@end

