//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFMutex : NSObject
{
    struct _opaque_pthread_mutex_t _lock;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x001000000007a215
- (void)unlock;	// IMP=0x000000000007a374
- (_Bool)tryLock;	// IMP=0x000000000007a360
- (void)lock;	// IMP=0x000000000007a352
- (void)dealloc;	// IMP=0x000000000007a2a0
- (id)init;	// IMP=0x000000000007a232

@end
