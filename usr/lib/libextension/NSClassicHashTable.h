//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSHashTable.h"

__attribute__((visibility("hidden")))
@interface NSClassicHashTable : NSHashTable
{
    struct {
        CDUnknownFunctionPointerType hash;
        CDUnknownFunctionPointerType isEqual;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
    } _callBacks;	// 8 = 0x8
    struct __CFBasicHash *_ht;	// 48 = 0x30
}

- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;	// IMP=0x000000000065c74e
- (id)allObjects;	// IMP=0x000000000065c555
- (id)description;	// IMP=0x000000000065c36b
- (unsigned long long)count;	// IMP=0x000000000065c356
- (void)removeItem:(const void *)arg1;	// IMP=0x000000000065c309
- (void)insertKnownAbsentItem:(const void *)arg1;	// IMP=0x000000000065c218
- (void)addObject:(id)arg1;	// IMP=0x000000000065c1cb
- (void)insertItem:(const void *)arg1;	// IMP=0x000000000065c17e
- (void *)getItem:(const void *)arg1;	// IMP=0x000000000065c127
- (id)copy;	// IMP=0x000000000065c057
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000065bffc
- (unsigned long long)hash;	// IMP=0x000000000065bfea
- (void)removeAllItems;	// IMP=0x000000000065bfcb
- (void)dealloc;	// IMP=0x000000000065bf67
- (id)init;	// IMP=0x000000000065bf5e

@end

