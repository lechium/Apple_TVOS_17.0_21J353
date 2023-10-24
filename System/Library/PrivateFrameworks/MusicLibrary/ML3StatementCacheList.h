//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3StatementCacheNode;

__attribute__((visibility("hidden")))
@interface ML3StatementCacheList : NSObject
{
    ML3StatementCacheNode *_firstNode;	// 8 = 0x8
    ML3StatementCacheNode *_lastNode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f9268
@property(readonly, nonatomic) ML3StatementCacheNode *lastNode; // @synthesize lastNode=_lastNode;
@property(readonly, nonatomic) ML3StatementCacheNode *firstNode; // @synthesize firstNode=_firstNode;
- (void)deleteAllNodes;	// IMP=0x00000000000f921b
- (void)deleteOldestNode;	// IMP=0x00000000000f91c3
- (id)oldestNode;	// IMP=0x00000000000f91b5
- (void)promoteNodeWithDictionaryKey:(id)arg1;	// IMP=0x00000000000f9021
- (void)appendNode:(id)arg1;	// IMP=0x00000000000f8fbe
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000000000f8e4b

@end

