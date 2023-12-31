//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString;
@protocol VNPersonsModelDataDelegate;

__attribute__((visibility("hidden")))
@interface VNPersonsModelData : NSObject
{
    unsigned long long _maximumIdentities;	// 8 = 0x8
    unsigned long long _faceprintRequestRevision;	// 16 = 0x10
    NSMutableArray *_personUniqueIdentifiers;	// 24 = 0x18
    NSMutableDictionary *_personUniqueIdentifierToSerialNumberMapping;	// 32 = 0x20
    NSMutableDictionary *_serialNumberToFaceObservationsMapping;	// 40 = 0x28
    NSMutableIndexSet *_availablePersonSerialNumbers;	// 48 = 0x30
    NSDate *_lastModificationDate;	// 56 = 0x38
    id <VNPersonsModelDataDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002b268c
@property(readonly, nonatomic) unsigned long long faceprintRequestRevision; // @synthesize faceprintRequestRevision=_faceprintRequestRevision;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(nonatomic) __weak id <VNPersonsModelDataDelegate> delegate; // @synthesize delegate=_delegate;
- (id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;	// IMP=0x00000000002b25db
- (unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002b2583
- (unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000002b256d
- (id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002b2557
- (unsigned long long)faceModelPersonsCount;	// IMP=0x00000000002b2541
- (id)personsModel:(id)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;	// IMP=0x00000000002b24cb
- (unsigned long long)personsModel:(id)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;	// IMP=0x00000000002b2470
- (unsigned long long)personsModel:(id)arg1 indexOfPersonWithUniqueIdentifier:(id)arg2;	// IMP=0x00000000002b2457
- (id)personsModel:(id)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;	// IMP=0x00000000002b242e
- (unsigned long long)numberOfPersonsInPersonsModel:(id)arg1;	// IMP=0x00000000002b2418
- (_Bool)removePersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002b2403
- (_Bool)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002b23a1
- (_Bool)removeFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002b22e9
- (_Bool)addFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002b2146
- (id)_accessToMutableFaceObservationsForPersonAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002b2099
- (void)_removeExistingFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2;	// IMP=0x00000000002b2002
- (void)_removeExistingFaceObservations:(id)arg1 fromIdentityWithSerialNumber:(id)arg2;	// IMP=0x00000000002b1f2f
- (void)_removePersonWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000002b1de7
- (void)_removeAllFaceObservationsFromIdentityWithSerialNumber:(id)arg1;	// IMP=0x00000000002b1d66
- (_Bool)_addUniqueFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002b1b79
- (id)_uniqueFaceObservationsWithRegistrationState:(_Bool)arg1 forFaceObservations:(id)arg2 withExpectedFaceprintRequestRevision:(unsigned long long)arg3 ofPersonWithUniqueIdentifier:(id)arg4 error:(id *)arg5;	// IMP=0x00000000002b1696
- (id)_requestNewIdentitySerialNumberAndReturnError:(id *)arg1;	// IMP=0x00000000002b155a
- (void)_modelWasModified;	// IMP=0x00000000002b14e2
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000002b1385

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

