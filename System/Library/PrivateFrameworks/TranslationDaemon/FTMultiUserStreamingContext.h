//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OspreyClientStreamingContext;

__attribute__((visibility("hidden")))
@interface FTMultiUserStreamingContext : NSObject
{
    id <OspreyClientStreamingContext> _grpcContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000019ea40
- (void)closeStream;	// IMP=0x000000000019ea2a
- (void)sendMultiUserStreamingRequest:(id)arg1;	// IMP=0x000000000019e9c6
- (id)initWithGRPCStreamingCallContext:(id)arg1;	// IMP=0x000000000019e934

@end

