//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIScopedBackgroundTask : NSObject
{
    unsigned long long _taskIdentifier;	// 8 = 0x8
}

@property(nonatomic) unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (void)_endTask;	// IMP=0x000000000001397a
- (void)dealloc;	// IMP=0x000000000001393c
- (id)initWithIdentifier:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000136a9
- (id)init;	// IMP=0x0000000000013693

@end

