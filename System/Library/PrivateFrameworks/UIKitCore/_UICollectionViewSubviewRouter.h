//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, UIView;

__attribute__((visibility("hidden")))
@interface _UICollectionViewSubviewRouter : NSObject
{
    NSMutableArray *_bookmarks;	// 8 = 0x8
    NSMapTable *_subviewToBookmarkMap;	// 16 = 0x10
    UIView *_managedUpdateView;	// 24 = 0x18
    _Bool _useLegacyRouting;	// 32 = 0x20
    UIView *_container;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000102cf9c
- (id)description;	// IMP=0x000000000102cb01
- (void)willRemoveSubview:(id)arg1;	// IMP=0x000000000102ca0b
- (_Bool)shouldExchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;	// IMP=0x000000000102c584
- (_Bool)shouldSendSubviewToBack:(id)arg1;	// IMP=0x000000000102c55b
- (_Bool)shouldBringSubviewToFront:(id)arg1;	// IMP=0x000000000102c4c3
- (_Bool)shouldAddSubview:(id)arg1 atPosition:(long long *)arg2 relativeTo:(id)arg3;	// IMP=0x000000000102bf3c

@end

