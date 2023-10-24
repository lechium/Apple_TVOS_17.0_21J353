//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSNumber, NSString, SDXPCHelperConnection;
@protocol OS_os_transaction, OS_xpc_object, SDNetworkBrowserDelegate;

@interface SDNetworkBrowser : NSObject
{
    struct __SFNode *_rootNode;	// 8 = 0x8
    MISSING_TYPE *_mode;	// 16 = 0x10
    struct __CFDictionary *_nodeBrowsers;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    NSObject<OS_os_transaction> *_transaction;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    SDXPCHelperConnection *_helperConnection;	// 56 = 0x38
    NSString *_kind;	// 64 = 0x40
    NSString *_objectKey;	// 72 = 0x48
    NSObject<OS_xpc_object> *_boostMessage;	// 80 = 0x50
    id <SDNetworkBrowserDelegate> _delegate;	// 88 = 0x58
    NSObject<OS_xpc_object> *_connection;	// 96 = 0x60
    NSNumber *_isEntitled;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000002c364
@property(retain) NSNumber *isEntitled; // @synthesize isEntitled=_isEntitled;
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property __weak id <SDNetworkBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_xpc_object> *boostMessage; // @synthesize boostMessage=_boostMessage;
@property(copy) NSString *objectKey; // @synthesize objectKey=_objectKey;
@property(readonly, copy) NSString *kind; // @synthesize kind=_kind;
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)invalidate;	// IMP=0x001000000002c0dc
- (int)closeNode:(struct __SFNode *)arg1;	// IMP=0x001000000002c063
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x001000000002c00d
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x001000000002bfb7
@property(copy) NSDictionary *options;
@property long long mode;
- (id)sidebarChildren;	// IMP=0x001000000002be8a
- (id)childrenForNode:(struct __SFNode *)arg1;	// IMP=0x001000000002be25
- (struct __SFNode *)copyRootNode;	// IMP=0x001000000002be0e
- (int)openNode:(struct __SFNode *)arg1 forProtocol:(id)arg2 flags:(unsigned long long)arg3;	// IMP=0x001000000002bca7
- (void)nodeBrowser:(id)arg1 nodesChangedForParent:(struct __SFNode *)arg2 protocol:(id)arg3 error:(int)arg4;	// IMP=0x001000000002bc37
- (void)dealloc;	// IMP=0x001000000002bbdd
- (id)initWithKind:(id)arg1 rootNode:(struct __SFNode *)arg2;	// IMP=0x001000000002bb00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

