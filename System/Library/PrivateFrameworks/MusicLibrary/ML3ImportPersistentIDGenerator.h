//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ML3PersistentIDGenerator.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator
{
    NSMutableDictionary *_pregeneratedIdMappings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000137897
- (void)removePersistentIDFromIdMapping:(long long)arg1;	// IMP=0x0000000000137537
- (long long)nextPersistentIDForImportItem:(shared_ptr_de333b55)arg1;	// IMP=0x000000000013700d
- (void)addIdMapping:(id)arg1 forProperty:(unsigned int)arg2;	// IMP=0x0000000000136f69
- (id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2;	// IMP=0x0000000000136e8d

@end

