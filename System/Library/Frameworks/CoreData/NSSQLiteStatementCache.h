//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSQLEntity, NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface NSSQLiteStatementCache : NSObject
{
    NSSQLEntity *_entity;	// 8 = 0x8
    NSSQLiteStatement *_insertStatementCache;	// 16 = 0x10
    NSSQLiteStatement *_batchInsertStatementCache;	// 24 = 0x18
    NSSQLiteStatement *_deletionStatementCache;	// 32 = 0x20
    NSSQLiteStatement *_faultingStatementCache;	// 40 = 0x28
    NSMutableDictionary *_toManyRelationshipStatementCache;	// 48 = 0x30
    struct __CFDictionary *_correlationInsertCache;	// 56 = 0x38
    struct __CFDictionary *_correlationDeleteCache;	// 64 = 0x40
    struct __CFDictionary *_correlationMasterReorderCache;	// 72 = 0x48
    struct __CFDictionary *_correlationMasterReorderCachePart2;	// 80 = 0x50
    struct __CFDictionary *_correlationReorderCache;	// 88 = 0x58
}

- (void)dealloc;	// IMP=0x00000000001212aa
- (id)initWithEntity:(id)arg1;	// IMP=0x000000000012125a

@end

