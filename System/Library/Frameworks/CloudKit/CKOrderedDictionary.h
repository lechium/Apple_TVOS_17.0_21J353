//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CKOrderedDictionary : NSObject
{
    NSMutableArray *tuples;	// 8 = 0x8
}

+ (id)orderedDictionaryWithCapacity:(unsigned long long)arg1;	// IMP=0x00600000002604a7
+ (id)orderedDictionary;	// IMP=0x006000000026048e
- (void).cxx_destruct;	// IMP=0x00000000002611ee
@property(readonly, nonatomic) unsigned long long count;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000260ff7
- (id)dictionaryRepresentationRecursive:(_Bool)arg1;	// IMP=0x000000000026085f
- (void)addObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002607c9
- (id)description;	// IMP=0x00000000002605b3
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000260543
- (id)init;	// IMP=0x00000000002604dd

@end

