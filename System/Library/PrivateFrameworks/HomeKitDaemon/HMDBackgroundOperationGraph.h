//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface HMDBackgroundOperationGraph : HMFObject
{
    NSMapTable *_opGraph;	// 8 = 0x8
    NSMapTable *_inDegrees;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000006225e2
- (void).cxx_destruct;	// IMP=0x000000000062216c
@property(retain, nonatomic) NSMapTable *inDegrees; // @synthesize inDegrees=_inDegrees;
@property(retain, nonatomic) NSMapTable *opGraph; // @synthesize opGraph=_opGraph;
- (_Bool)doesCycleExist;	// IMP=0x0000000000621c7a
- (_Bool)canAddEdgeFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000000621ba7
- (id)getIndepentVertices;	// IMP=0x00000000006218c4
- (void)addEdgeFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000006217fc
- (void)removeVertex:(id)arg1;	// IMP=0x00000000006216a0
- (_Bool)doesVertexAlreadyExistInGraph:(id)arg1;	// IMP=0x000000000062161d
- (void)addVertex:(id)arg1;	// IMP=0x0000000000621531
- (id)initWithOperations:(id)arg1;	// IMP=0x0000000000621028

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
