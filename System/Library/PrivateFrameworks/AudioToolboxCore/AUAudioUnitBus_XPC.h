//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AUAudioUnitBus.h"

@class AUAudioUnit_XPC, AVAudioFormat, NSArray, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface AUAudioUnitBus_XPC : AUAudioUnitBus
{
    AUAudioUnit_XPC *_audioUnit;	// 8 = 0x8
    NSXPCConnection *_remoteAUXPCConnection;	// 16 = 0x10
    unsigned int _scope;	// 24 = 0x18
    unsigned int _element;	// 28 = 0x1c
    AVAudioFormat *_format;	// 32 = 0x20
    NSArray *_supportedChannelLayoutTags;	// 40 = 0x28
    _Bool _removingObserverWithContext;	// 48 = 0x30
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x001000000011d313
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000011d30b
- (void).cxx_destruct;	// IMP=0x000000000011c5d7
- (id)format;	// IMP=0x000000000011c5c2
- (void)propertyChanged:(id)arg1;	// IMP=0x000000000011c563
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000011c44c
- (_Bool)isEnabled;	// IMP=0x000000000011c349
- (_Bool)setFormat:(id)arg1 error:(id *)arg2;	// IMP=0x000000000011c07f
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000011bdc6
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x000000000011badb
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x000000000011b83e
- (void)dealloc;	// IMP=0x000000000011b80f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011b564
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011b49e

@end

