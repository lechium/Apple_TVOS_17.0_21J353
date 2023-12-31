//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IAPHistoryService : NSObject
{
}

- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x00400000000acc66
- (void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000acaac
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(_Bool)arg2 requestingBundleId:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ac85c
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3;	// IMP=0x00100000000ac673
- (void)refreshIAPsForActiveAccountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ac4d6
- (void)getIAPsForActiveAccountWithAdamIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ac1e2
- (void)getAllIAPsForActiveAccountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ac045

@end

