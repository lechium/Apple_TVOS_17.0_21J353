//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, UnfairLock;

@interface UpdatesManager : NSObject
{
    NSNumber *_cachedShouldUseModernUpdates;	// 8 = 0x8
    UnfairLock *_unfairLock;	// 16 = 0x10
}

+ (_Bool)isTVProviderApp:(long long)arg1;	// IMP=0x0040000000140e5f
+ (_Bool)shouldUseModernUpdates;	// IMP=0x0010000000140e1b
+ (id)sharedManager;	// IMP=0x0010000000140d92
+ (id)_internalManager;	// IMP=0x0010000000140d3d
- (void).cxx_destruct;	// IMP=0x002000000014136e
- (_Bool)_shouldUseModernUpdates;	// IMP=0x0010000000141173
- (void)_invalidateCachedModernUpdatesValue:(id)arg1;	// IMP=0x001000000014110d
- (_Bool)shouldUseModernUpdates;	// IMP=0x0010000000140e67
- (id)init;	// IMP=0x0010000000140c14

@end

