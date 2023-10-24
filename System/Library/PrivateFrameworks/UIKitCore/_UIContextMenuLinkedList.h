//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _UIContextMenuNode;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLinkedList : NSObject
{
    NSMutableArray *_nodes;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000023980c
@property(readonly, nonatomic) NSMutableArray *nodes; // @synthesize nodes=_nodes;
- (id)description;	// IMP=0x000000000023958f
- (void)_enumerateNodes:(CDUnknownBlockType)arg1 inReverse:(_Bool)arg2;	// IMP=0x00000000002394c1
- (void)reverseEnumerateNodes:(CDUnknownBlockType)arg1;	// IMP=0x00000000002394aa
- (void)enumerateNodes:(CDUnknownBlockType)arg1;	// IMP=0x0000000000239496
- (id)nodeForMenu:(id)arg1;	// IMP=0x00000000002392ee
- (id)removeNode:(id)arg1;	// IMP=0x000000000023906d
- (id)popNode;	// IMP=0x0000000000238f93
- (void)addNode:(id)arg1;	// IMP=0x0000000000238e91
@property(readonly, nonatomic) _UIContextMenuNode *current;
@property(readonly, nonatomic) _UIContextMenuNode *first;

@end

