//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface UIGestureGraphNode
{
    NSMutableSet *_inEdges;	// 8 = 0x8
    NSMutableSet *_outEdges;	// 16 = 0x10
    NSMutableSet *_inOutEdges;	// 24 = 0x18
    NSMapTable *_edgesByLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000822fee
- (id)_edgesForType:(unsigned long long)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000000822f78
- (void)_removeEdge:(id)arg1;	// IMP=0x0000000000822ea3
- (void)_addEdge:(id)arg1;	// IMP=0x0000000000822d3e
- (id)description;	// IMP=0x0000000000822c25
- (void)enumerateNeighborNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000822a4f
@property(readonly, nonatomic) NSSet *inOutEdges;
@property(readonly, nonatomic) NSSet *outEdges;
@property(readonly, nonatomic) NSSet *inEdges;
@property(readonly, nonatomic) NSSet *allEdges;
- (id)edgesForLabel:(id)arg1;	// IMP=0x00000000008228d2
- (void)enumerateEdgesBetweenNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000822704
- (void)enumerateEdgesFromNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000082253e
- (void)enumerateEdgesTowardNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000822378
- (_Bool)isInOutEdge:(id)arg1;	// IMP=0x00000000008222c2
- (_Bool)isOutEdge:(id)arg1;	// IMP=0x0000000000822263
- (_Bool)isInEdge:(id)arg1;	// IMP=0x0000000000822204
- (unsigned long long)typeOfEdge:(id)arg1;	// IMP=0x00000000008221c4
- (_Bool)hasEdgeBetweenNode:(id)arg1;	// IMP=0x000000000082204c
- (_Bool)hasEdgeFromNode:(id)arg1;	// IMP=0x0000000000821ee2
- (_Bool)hasEdgeTowardNode:(id)arg1;	// IMP=0x0000000000821d78
- (unsigned long long)edgeCountForLabel:(id)arg1;	// IMP=0x0000000000821d13
@property(readonly, nonatomic) unsigned long long edgeCount;

@end

