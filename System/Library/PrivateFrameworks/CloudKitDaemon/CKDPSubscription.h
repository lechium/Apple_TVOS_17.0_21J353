//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier, CKDPSubscriptionNotification, NSMutableArray;

@interface CKDPSubscription : PBCodable
{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _mutationTriggers;	// 8 = 0x8
    int _evaluationType;	// 32 = 0x20
    NSMutableArray *_filters;	// 40 = 0x28
    CKDPIdentifier *_identifier;	// 48 = 0x30
    CKDPSubscriptionNotification *_notification;	// 56 = 0x38
    int _owner;	// 64 = 0x40
    NSMutableArray *_recordTypes;	// 72 = 0x48
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 80 = 0x50
    _Bool _fireOnce;	// 88 = 0x58
    struct {
        unsigned int evaluationType:1;
        unsigned int owner:1;
        unsigned int fireOnce:1;
    } _has;	// 92 = 0x5c
}

+ (Class)recordTypesType;	// IMP=0x001000000025e45a
+ (Class)filtersType;	// IMP=0x001000000025e388
- (void).cxx_destruct;	// IMP=0x00000000002603f4
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(nonatomic) _Bool fireOnce; // @synthesize fireOnce=_fireOnce;
@property(retain, nonatomic) NSMutableArray *recordTypes; // @synthesize recordTypes=_recordTypes;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) CKDPSubscriptionNotification *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) CKDPIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000025ff81
- (unsigned long long)hash;	// IMP=0x000000000025fe4b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025fc62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025f871
- (void)copyTo:(id)arg1;	// IMP=0x000000000025f5eb
- (void)writeTo:(id)arg1;	// IMP=0x000000000025f2d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000025f2cc
- (id)dictionaryRepresentation;	// IMP=0x000000000025e57a
- (id)description;	// IMP=0x000000000025e4cb
@property(readonly, nonatomic) _Bool hasZoneIdentifier;
@property(nonatomic) _Bool hasFireOnce;
- (id)recordTypesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000025e43d
- (unsigned long long)recordTypesCount;	// IMP=0x000000000025e420
- (void)addRecordTypes:(id)arg1;	// IMP=0x000000000025e3b6
- (void)clearRecordTypes;	// IMP=0x000000000025e399
- (id)filtersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000025e36b
- (unsigned long long)filtersCount;	// IMP=0x000000000025e34e
- (void)addFilters:(id)arg1;	// IMP=0x000000000025e2e4
- (void)clearFilters;	// IMP=0x000000000025e2c7
@property(readonly, nonatomic) _Bool hasNotification;
- (int)StringAsMutationTriggers:(id)arg1;	// IMP=0x000000000025e215
- (id)mutationTriggersAsString:(int)arg1;	// IMP=0x000000000025e1ca
- (void)setMutationTriggers:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000025e1b3
- (int)mutationTriggersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000025e0e3
- (void)addMutationTriggers:(int)arg1;	// IMP=0x000000000025e0d0
- (void)clearMutationTriggers;	// IMP=0x000000000025e0bf
@property(readonly, nonatomic) int *mutationTriggers;
@property(readonly, nonatomic) unsigned long long mutationTriggersCount;
- (int)StringAsOwner:(id)arg1;	// IMP=0x000000000025e031
- (id)ownerAsString:(int)arg1;	// IMP=0x000000000025dfdb
@property(nonatomic) _Bool hasOwner;
@property(nonatomic) int owner; // @synthesize owner=_owner;
- (int)StringAsEvaluationType:(id)arg1;	// IMP=0x000000000025ded3
- (id)evaluationTypeAsString:(int)arg1;	// IMP=0x000000000025de88
@property(nonatomic) _Bool hasEvaluationType;
@property(nonatomic) int evaluationType; // @synthesize evaluationType=_evaluationType;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)dealloc;	// IMP=0x000000000025ddcc

@end

