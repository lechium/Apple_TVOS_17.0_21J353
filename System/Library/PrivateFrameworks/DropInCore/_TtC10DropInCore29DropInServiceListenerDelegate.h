//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10DropInCore29DropInServiceListenerDelegate : NSObject
{
    MISSING_TYPE *xpcDispatcher;	// 8 = 0x8
    MISSING_TYPE *xpcServerInterface;	// 16 = 0x10
    MISSING_TYPE *logger;	// 0 = 0x0
    MISSING_TYPE *queue;	// 0 = 0x0
    MISSING_TYPE *_xpcClients;	// 0 = 0x0
    MISSING_TYPE *xpcClientDelegate;	// 2147484672 = 0x80000400
}

- (void).cxx_destruct;	// IMP=0x000000000005344a
- (id)init;	// IMP=0x0000000000053415
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000053386

@end

