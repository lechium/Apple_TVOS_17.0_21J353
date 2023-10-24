//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface GKExpiringCacheObject
{
}

+ (void)invalidateObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x004000000011e99c
+ (void)expireObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x001000000011e5da
+ (id)fetchSortDescriptors;	// IMP=0x001000000011da1f
- (void)awakeFromInsert;	// IMP=0x002000000011e565
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x001000000011e1f2
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x001000000011e16f
@property(readonly, nonatomic) _Bool expired;
- (void)expire;	// IMP=0x001000000011dc95
- (void)invalidate;	// IMP=0x001000000011daeb
- (_Bool)isValid;	// IMP=0x001000000011dab8

// Remaining properties
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSDate *timeStamp; // @dynamic timeStamp;

@end

