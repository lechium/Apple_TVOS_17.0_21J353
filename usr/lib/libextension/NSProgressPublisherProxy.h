//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileAccessNode, NSProgressValues, NSString, NSXPCConnection;
@protocol NSProgressPublisher;

__attribute__((visibility("hidden")))
@interface NSProgressPublisherProxy : NSObject
{
    id <NSProgressPublisher> _forwarder;	// 8 = 0x8
    id _publisherID;	// 16 = 0x10
    NSString *_lowerCaseCategoryName;	// 24 = 0x18
    NSFileAccessNode *_itemLocation;	// 32 = 0x20
    NSXPCConnection *_connection;	// 40 = 0x28
    NSProgressValues *_values;	// 48 = 0x30
}

@property(readonly, copy) NSProgressValues *values; // @synthesize values=_values;
@property(copy) NSString *category; // @synthesize category=_lowerCaseCategoryName;
- (void)observeValues:(id)arg1 forKeys:(id)arg2;	// IMP=0x00000000005e60f8
- (void)observeUserInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005e609f
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndenting:(id)arg1;	// IMP=0x00000000005e5ffe
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(_Bool)arg2;	// IMP=0x00000000005e5fe8
- (oneway void)prioritize;	// IMP=0x00000000005e5fd2
- (oneway void)resume;	// IMP=0x00000000005e5fbc
- (oneway void)pause;	// IMP=0x00000000005e5fa6
- (oneway void)cancel;	// IMP=0x00000000005e5f90
@property NSFileAccessNode *itemLocation;
- (_Bool)isFromConnection:(id)arg1;	// IMP=0x00000000005e5f6c
- (id)publisherID;	// IMP=0x00000000005e5e52
- (void)dealloc;	// IMP=0x00000000005e5dd0
- (id)initWithForwarder:(id)arg1 onConnection:(id)arg2 publisherID:(id)arg3 values:(id)arg4;	// IMP=0x00000000005e5d1a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
