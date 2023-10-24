//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCAMDEmbeddedDeviceService, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCAMDBlockManager : NSObject
{
    NSMutableDictionary *_blockHandlerMap;	// 8 = 0x8
    HMDCAMDEmbeddedDeviceService *_service;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_blockQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000626d78
- (id)forwardingBlockWithArgumentCount:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000626a49
- (void)invokeForwardedBlockWithArguments:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000062689b
- (unsigned long long)count;	// IMP=0x0000000000626885
- (id)keyForBlock:(id)arg1;	// IMP=0x000000000062676a
- (id)blockForKey:(id)arg1;	// IMP=0x0000000000626754
- (void)removeBlockForKey:(id)arg1;	// IMP=0x000000000062673e
- (void)removeBlock:(id)arg1;	// IMP=0x0000000000626688
- (void)addBlock:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000626617
- (void)addBlockNoCopy:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000006265fa
- (id)initWithService:(id)arg1;	// IMP=0x0000000000626536

@end

