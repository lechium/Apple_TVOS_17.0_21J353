//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OspreyClientStreamingContext;

__attribute__((visibility("hidden")))
@interface FTStreamingTranslationStreamingContext : NSObject
{
    id <OspreyClientStreamingContext> _grpcContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000019efcc
- (void)closeStream;	// IMP=0x000000000019efb6
- (void)sendStreamingTranslationStreamingRequest:(id)arg1;	// IMP=0x000000000019ef52
- (id)initWithGRPCStreamingCallContext:(id)arg1;	// IMP=0x000000000019eec0

@end

