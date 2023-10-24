//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNManagedConfiguration, NSArray;
@protocol CNiOSContactPredicate;

__attribute__((visibility("hidden")))
@interface CNiOSPersonFetchRequest : NSObject
{
    _Bool _shouldSort;	// 8 = 0x8
    _Bool _unifiedFetch;	// 9 = 0x9
    unsigned int _sortOrder;	// 12 = 0xc
    id <CNiOSContactPredicate> _predicate;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
    NSArray *_keysToFetch;	// 32 = 0x20
    unsigned long long _batchSize;	// 40 = 0x28
    CNManagedConfiguration *_managedConfiguration;	// 48 = 0x30
}

+ (id)effectivePredicate:(id)arg1;	// IMP=0x00000000000e438c
+ (id)validatePredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e42e8
+ (id)fetchRequestFromCNFetchRequest:(id)arg1 managedConfiguration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e40d1
+ (long long)resolvedSortOrderFromContactSortOrder:(long long)arg1;	// IMP=0x00000000000e406d
- (void).cxx_destruct;	// IMP=0x00000000000e403a
@property(readonly) CNManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property(readonly) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(readonly) _Bool unifiedFetch; // @synthesize unifiedFetch=_unifiedFetch;
@property(readonly) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) unsigned int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly) _Bool shouldSort; // @synthesize shouldSort=_shouldSort;
@property(readonly) id <CNiOSContactPredicate> predicate; // @synthesize predicate=_predicate;
@property(readonly) unsigned int sortOrderIncludingNone;
- (id)initWithPredicate:(id)arg1 keysToFetch:(id)arg2 shouldSort:(_Bool)arg3 sortOrder:(unsigned int)arg4 unifiedFetch:(_Bool)arg5 batchSize:(unsigned long long)arg6 managedConfiguration:(id)arg7 options:(unsigned long long)arg8;	// IMP=0x00000000000e3e9a

@end

