//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface AUMessageChannel_XPC : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    CDUnknownBlockType _callHostBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011dd43
@property(copy, nonatomic) CDUnknownBlockType callHostBlock; // @synthesize callHostBlock=_callHostBlock;
- (void)dealloc;	// IMP=0x000000000011d976
- (id)callAudioUnit:(id)arg1;	// IMP=0x000000000011d824
- (id)initWithListenerEndpoint:(id)arg1;	// IMP=0x000000000011d629

@end

