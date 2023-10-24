//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/NSObject-Protocol.h>

@class NSData, NSNumber, NSString;

@protocol BMComputeSourceServer <NSObject>
- (void)eventsPrunedWithStreamIdentifier:(NSString *)arg1 reason:(unsigned long long)arg2;
- (void)sendEventWithStreamIdentifier:(NSString *)arg1 timestamp:(NSNumber *)arg2 signpostID:(unsigned long long)arg3 eventData:(NSData *)arg4;
@end

