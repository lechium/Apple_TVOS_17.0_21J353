//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

@interface RingtonePurchaseStore : NSObject
{
    NSManagedObjectContext *_context;	// 8 = 0x8
    _Bool _ownsContext;	// 16 = 0x10
}

- (void)updateRingtonesForPurchases:(id)arg1 withDownloads:(id)arg2;	// IMP=0x0020000000068123
- (id)ringtonesForAdamID:(unsigned long long)arg1 transactionID:(id)arg2;	// IMP=0x001000000006804f
- (void)removeRingtoneForAdamID:(unsigned long long)arg1 transactionID:(id)arg2;	// IMP=0x0010000000067fa5
- (void)removeRingtonesForPurchases:(id)arg1;	// IMP=0x0010000000067d6a
- (void)prunePurchasedRingtones;	// IMP=0x0010000000067b41
- (void)finalizeRingtoneForAdamID:(unsigned long long)arg1 transactionID:(id)arg2 toneIdentifier:(id)arg3;	// IMP=0x0010000000067a7f
- (void)addRingtonesForPurchases:(id)arg1;	// IMP=0x0010000000067891
- (void)dealloc;	// IMP=0x0010000000067834
- (id)initWithMangedObjectContext:(id)arg1;	// IMP=0x00100000000677e4
- (id)init;	// IMP=0x00100000000677a8

@end

