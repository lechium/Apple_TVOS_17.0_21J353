//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOrderedSet.h>

@class NSKeyValueNonmutatingOrderedSetMethodSet, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueOrderedSet : NSOrderedSet
{
    NSObject *_container;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSKeyValueNonmutatingOrderedSetMethodSet *_methods;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x00100000007e386a
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000007e3bd7
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007e3b23
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x00000000007e3af5
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000007e3a63
- (unsigned long long)count;	// IMP=0x00000000007e3a35
- (void)dealloc;	// IMP=0x00000000007e39d8
- (void)_proxyNonGCFinalize;	// IMP=0x00000000007e3979
- (CDStruct_a70f6672)_proxyLocator;	// IMP=0x00000000007e395d
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000007e3891

@end

