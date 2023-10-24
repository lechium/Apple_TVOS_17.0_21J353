//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemMapper, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface KMPortraitEntitiesBridge : NSObject
{
    KVItemMapper *_itemMapper;	// 8 = 0x8
    NSNumber *_alternativeItemIdKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000006083
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005df4
- (id)originAppId;	// IMP=0x0000000000005de0
- (long long)itemType;	// IMP=0x0000000000005dca
- (id)init;	// IMP=0x0000000000005c52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

