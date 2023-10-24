//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class NSString;
@protocol AMSBagProtocol;

@interface FamilyInfoLookupTask : AMSTask
{
    _Bool _suppressDialogs;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    id <AMSBagProtocol> _bag;	// 24 = 0x18
}

+ (id)_pathForCachedFamilyInfoLookupResult;	// IMP=0x0040000000057fd0
+ (id)_currentCachedFamilyInfoWithLogKey:(id)arg1;	// IMP=0x0010000000057ce3
+ (id)_cachedFamilyInfoLookupResultForAccount:(id)arg1 ignoreCacheTimeout:(_Bool)arg2 logKey:(id)arg3;	// IMP=0x00100000000577b9
+ (id)_processURLResult:(id)arg1;	// IMP=0x00100000000570b5
+ (id)cachedFamilyInfoWithLogKey:(id)arg1;	// IMP=0x001000000005656e
- (void).cxx_destruct;	// IMP=0x00200000000580e6
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(nonatomic) _Bool suppressDialogs; // @synthesize suppressDialogs=_suppressDialogs;
@property(copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
- (void)_cacheFamilyInfoLookupResult:(id)arg1 forAccount:(id)arg2;	// IMP=0x0010000000057158
- (id)_performFamilyInfoRequestForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000056d06
- (id)performFamilyInfoLookup;	// IMP=0x001000000005661f
- (id)initWithBag:(id)arg1;	// IMP=0x0010000000056500

@end
