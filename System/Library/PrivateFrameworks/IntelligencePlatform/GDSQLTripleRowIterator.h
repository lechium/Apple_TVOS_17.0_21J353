//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GDLazyGraphTripleRow, NSString;

@interface GDSQLTripleRowIterator : NSObject
{
    GDLazyGraphTripleRow *_lazyTripleRow;	// 8 = 0x8
    _Bool _internalIteratorStarted;	// 16 = 0x10
    NSString *_iterateSubjectValue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000032e504
- (id)relationshipIdIterator;	// IMP=0x000000000032e214
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000032dfc5
- (id)initWithColumns:(unsigned long long)arg1 statement:(id)arg2 subjectOverride:(id)arg3;	// IMP=0x000000000032df19

@end

