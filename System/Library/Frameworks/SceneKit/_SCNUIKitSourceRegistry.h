//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _SCNUIKitSourceRegistry : NSObject
{
    NSMutableArray *_sources;	// 8 = 0x8
}

+ (void)unregisterUIKitSource:(id)arg1;	// IMP=0x006000000028a5ca
+ (void)registerUIKitSource:(id)arg1;	// IMP=0x006000000028a599
+ (id)sharedInstance;	// IMP=0x006000000028a314
- (void)apply:(CDUnknownBlockType)arg1;	// IMP=0x000000000028a46a
- (void)remove:(id)arg1;	// IMP=0x000000000028a425
- (void)add:(id)arg1;	// IMP=0x000000000028a3e0
- (void)dealloc;	// IMP=0x000000000028a3a5
- (id)init;	// IMP=0x000000000028a359

@end

