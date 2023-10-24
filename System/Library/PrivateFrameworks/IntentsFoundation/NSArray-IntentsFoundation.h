//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (IntentsFoundation)
+ (id)if_arrayWithObjectIfNonNil:(id)arg1;	// IMP=0x005000000000b569
+ (id)_inf_arrayWithObjectIfNonNil:(id)arg1;	// IMP=0x005000000000b557
- (void)if_enumerateAsynchronouslyInSequenceOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a89b
- (void)if_enumerateAsynchronouslyInSequence:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a7ed
- (void)if_enumerateAsynchronouslyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a364
- (void)if_enumerateAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a34a
- (id)if_objectsNotOfClass:(Class)arg1;	// IMP=0x001000000000a2ec
- (id)if_objectsOfClass:(Class)arg1;	// IMP=0x001000000000a28e
- (id)if_firstObjectWithIntValue:(int)arg1 forKey:(id)arg2;	// IMP=0x001000000000a1e6
- (id)if_firstObjectWithBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x001000000000a13e
- (id)if_firstObjectWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000a072
- (id)if_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009f1c
- (id)if_objectsWithIntValue:(int)arg1 forKey:(id)arg2;	// IMP=0x0010000000009e74
- (id)if_objectsWithBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0010000000009dcc
- (id)if_objectsWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000009d00
- (id)if_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009b3c
- (id)_inf_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009b2a
- (id)if_arrayByRemovingObjectsInArray:(id)arg1;	// IMP=0x0010000000009acd
- (id)if_arrayByRemovingObject:(id)arg1;	// IMP=0x0010000000009a70
- (id)if_escapedComponentsJoinedByString:(id)arg1 forLocale:(id)arg2;	// IMP=0x001000000000997d
- (void)if_flatMapAsynchronouslyOnQueue:(id)arg1 transform:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000996e
- (void)if_flatMapAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009957
- (id)if_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009742
- (id)_inf_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009730
- (id)if_compactMapConcurrently:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009723
- (id)if_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009716
- (void)if_mapAsynchronouslyOnQueue:(id)arg1 transform:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000970a
- (void)if_mapAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000096f6
- (id)if_mapConcurrently:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009663
- (id)if_map:(CDUnknownBlockType)arg1;	// IMP=0x00100000000095d0
@end

