//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MNCarPlayConnectionMonitor : NSObject
{
    _Bool _isConnected;	// 8 = 0x8
    _Bool _shouldWait;	// 9 = 0x9
}

+ (id)sharedInstance;	// IMP=0x00400000000ab362
@property(readonly, nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic) _Bool isConnectedSynchronous;
- (void)dealloc;	// IMP=0x00000000000ab45c
- (id)init;	// IMP=0x00000000000ab3b7

@end

