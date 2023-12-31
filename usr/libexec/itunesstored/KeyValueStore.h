//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSKeyValueStore;
@protocol OS_dispatch_queue;

@interface KeyValueStore : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    SSKeyValueStore *_keyValueStore;	// 16 = 0x10
}

+ (void)setValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00400000001972d3
+ (void)removeValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000019728c
+ (void)removeAllValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000197245
+ (void)removeAccountWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001971fe
+ (void)observeXPCServer:(id)arg1;	// IMP=0x0010000000197158
+ (void)getValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001970a5
+ (id)defaultKeyValueStore;	// IMP=0x0010000000196eb1
- (void)_setValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0020000000197b39
- (void)_removeValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000019798e
- (void)_removeAllValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000197824
- (void)_removeAccountWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000019776a
- (void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000197643
- (void)_handleMessage:(id)arg1 connection:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000197543
- (void)_getValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000019731a
- (id)valueForDomain:(id)arg1 key:(id)arg2;	// IMP=0x0010000000196f44
- (void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3;	// IMP=0x0010000000196f2e
- (void)dealloc;	// IMP=0x0010000000196e68
- (id)init;	// IMP=0x0010000000196e0a

@end

