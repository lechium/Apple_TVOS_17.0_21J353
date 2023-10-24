//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_ws_response : NSObject
{
    int status;	// 8 = 0x8
    char *selected_subprotocol;	// 16 = 0x10
    NSObject<OS_xpc_object> *header_names;	// 24 = 0x18
    NSObject<OS_xpc_object> *header_values;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001ab5f0
- (void)dealloc;	// IMP=0x00000000001ab5a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

