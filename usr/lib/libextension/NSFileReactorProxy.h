//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileAccessNode, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSFileReactorProxy : NSObject
{
    NSXPCConnection *_client;	// 8 = 0x8
    id _reactorID;	// 16 = 0x10
    NSFileAccessNode *_itemLocation;	// 24 = 0x18
    unsigned int _effectiveUserIdentifier;	// 32 = 0x20
}

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00600000007e3f5c
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000007e4022
- (id)_clientProxy;	// IMP=0x00000000007e401a
- (_Bool)allowedForURL:(id)arg1;	// IMP=0x00000000007e3f54
- (id)description;	// IMP=0x00000000007e3f3b
- (id)descriptionWithIndenting:(id)arg1;	// IMP=0x00000000007e3dcb
- (void)invalidate;	// IMP=0x00000000007e3dc5
- (void)forwardUsingProxy:(id)arg1;	// IMP=0x00000000007e3dbf
- (id)itemLocation;	// IMP=0x00000000007e3da8
- (void)setItemLocation:(id)arg1;	// IMP=0x00000000007e3da2
@property unsigned int effectiveUserIdentifier;
- (id)reactorID;	// IMP=0x00000000007e3d79
- (id)client;	// IMP=0x00000000007e3d62
- (void)dealloc;	// IMP=0x00000000007e3cf5
- (id)initWithClient:(id)arg1 reactorID:(id)arg2;	// IMP=0x00000000007e3c69

@end
