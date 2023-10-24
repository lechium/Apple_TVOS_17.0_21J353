//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString, VNRequestSpecifier;
@protocol VNEntityIdentificationModelTrainingDataDelegate;

__attribute__((visibility("hidden")))
@interface VNEntityIdentificationModelTrainingData : NSObject
{
    unsigned long long _maximumEntities;	// 8 = 0x8
    id <VNEntityIdentificationModelTrainingDataDelegate> _delegate;	// 16 = 0x10
    VNRequestSpecifier *_entityPrintOriginatingRequestSpecifier;	// 24 = 0x18
    NSMutableArray *_entityUniqueIdentifiers;	// 32 = 0x20
    NSMutableDictionary *_serialNumberForEntityUniqueIdentifier;	// 40 = 0x28
    NSMutableDictionary *_observationsForSerialNumber;	// 48 = 0x30
    NSMutableIndexSet *_availableSerialNumbers;	// 56 = 0x38
    NSDate *_lastModificationDate;	// 64 = 0x40
    unsigned long long _lastDataChangeSequenceNumber;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000074128
@property(readonly, copy) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property __weak id <VNEntityIdentificationModelTrainingDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) VNRequestSpecifier *entityPrintOriginatingRequestSpecifier; // @synthesize entityPrintOriginatingRequestSpecifier=_entityPrintOriginatingRequestSpecifier;
- (id)trainedModelObservationAtIndex:(unsigned long long)arg1 forEntityAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000740c7
- (unsigned long long)trainedModelNumberOfObservationsForEntityAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000740b5
- (unsigned long long)trainedModelIndexOfEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000000740a3
- (id)trainedModelUniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000074091
- (unsigned long long)trainedModelEntityCount;	// IMP=0x000000000007407f
- (id)lastModificationDateForEntityIdentificationModel:(id)arg1;	// IMP=0x0000000000074071
- (unsigned long long)lastDataChangeSequenceNumberForEntityIdentificationModel:(id)arg1;	// IMP=0x0000000000074067
- (id)entityIdentificationModel:(id)arg1 observationAtIndex:(unsigned long long)arg2 forEntityAtIndex:(unsigned long long)arg3;	// IMP=0x000000000007404f
- (unsigned long long)entityIdentificationModel:(id)arg1 numberOfObservationsForEntityAtIndex:(unsigned long long)arg2;	// IMP=0x000000000007403a
- (unsigned long long)entityIdentificationModel:(id)arg1 indexOfEntityWithUniqueIdentifier:(id)arg2;	// IMP=0x0000000000074025
- (id)entityIdentificationModel:(id)arg1 uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000074010
- (unsigned long long)numberOfEntitiesInEntityIdentificationModel:(id)arg1;	// IMP=0x0000000000073ffe
- (_Bool)validateWithCanceller:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000073f66
- (_Bool)removeEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000073ea8
- (_Bool)removeAllObservationsFromEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000073e0e
- (_Bool)removeObservations:(id)arg1 fromEntityWithUniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000073c64
- (_Bool)addObservations:(id)arg1 toEntityWithUniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000073918
- (id)observationAtIndex:(unsigned long long)arg1 forEntityAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000073851
- (unsigned long long)observationCountForEntityAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000737a1
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x000000000007378b
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000073775
- (unsigned long long)entityCount;	// IMP=0x000000000007375f
- (id)initWithModelConfiguration:(id)arg1;	// IMP=0x000000000007361c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
