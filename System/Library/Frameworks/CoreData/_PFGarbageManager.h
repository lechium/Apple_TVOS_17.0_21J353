//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _PFGarbageManager : NSObject
{
    NSMutableDictionary *_storeLinksDirs;	// 8 = 0x8
    NSMutableSet *_filesToCleanUp;	// 16 = 0x10
}

+ (id)defaultInstance;	// IMP=0x006000000007a416
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000007a409
+ (void)initialize;	// IMP=0x006000000007a382
- (id)autorelease;	// IMP=0x000000000007a44d
- (_Bool)_tryRetain;	// IMP=0x000000000007a445
- (_Bool)_isDeallocating;	// IMP=0x000000000007a43d
- (oneway void)release;	// IMP=0x000000000007a437
- (unsigned long long)retainCount;	// IMP=0x000000000007a42c
- (id)retain;	// IMP=0x000000000007a423

@end

