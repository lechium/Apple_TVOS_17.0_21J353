//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetCustomURLBridgeForNSURLProtocol;

__attribute__((visibility("hidden")))
@interface AVNSURLProtocolRequest
{
    AVAssetCustomURLBridgeForNSURLProtocol *_bridge;	// 40 = 0x28
    struct _CFURLConnection *_connection;	// 48 = 0x30
    struct __CFError *_error;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000e5326
@property(nonatomic) __weak AVAssetCustomURLBridgeForNSURLProtocol *bridge; // @synthesize bridge=_bridge;
@property(nonatomic) struct _CFURLConnection *connection;
- (void)dealloc;	// IMP=0x00000000000e5259

@end

