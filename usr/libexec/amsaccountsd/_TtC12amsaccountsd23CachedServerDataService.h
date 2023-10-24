//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSAccountIdentity, MISSING_TYPE, NSArray;

@interface _TtC12amsaccountsd23CachedServerDataService : NSObject
{
    MISSING_TYPE *accountDataActors;	// 8 = 0x8
    MISSING_TYPE *bag;	// 16 = 0x10
    MISSING_TYPE *metrics;	// 24 = 0x18
}

+ (id)sharedService;	// IMP=0x002000000008aaae
- (void).cxx_destruct;	// IMP=0x004000000008f65e
- (void)performOnStartup;	// IMP=0x001000000008f60c
- (void)removeDataFor:(AMSAccountIdentity *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x001000000008ebf1
- (void)scheduleSyncFromPushWithDsid:(unsigned long long)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x001000000008e2e7
- (void)changePersonalizationFor:(AMSAccountIdentity *)arg1 to:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x001000000008d84c
- (void)changeAutoPlayFor:(AMSAccountIdentity *)arg1 to:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x001000000008d575
- (void)dataWithAccounts:(NSArray *)arg1 completionHandler:(void (^)(AMSAccountCachedServerDataResponse *, NSError *))arg2;	// IMP=0x001000000008d040
- (id)init;	// IMP=0x001000000008ad71

@end

