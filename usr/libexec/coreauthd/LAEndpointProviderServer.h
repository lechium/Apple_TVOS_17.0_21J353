//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface LAEndpointProviderServer : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (_Bool)handleConnection:(id)arg1;	// IMP=0x0020000000002ce4
- (void).cxx_destruct;	// IMP=0x0020000000003119
- (void)provideEndpoint:(long long)arg1 uid:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002e15

@end

