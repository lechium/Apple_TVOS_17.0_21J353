//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNEntityIdentificationModelTrainedModel : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001798e9
+ (id)trainedModelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000179780
+ (_Bool)getStoredRepresentationTag:(unsigned int *)arg1 forModelVersion:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000017973c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000179a7e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001799d9
- (id)printCountsForAllEntities;	// IMP=0x00000000001799cc
- (id)printCountsForEntitiesWithUniqueIdentifiers:(id)arg1;	// IMP=0x00000000001799bf
- (unsigned long long)printCountForEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000001799b7
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000001799af
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000179996
- (id)entityUniqueIdentifiers;	// IMP=0x0000000000179989
- (unsigned long long)entityCount;	// IMP=0x0000000000179981
- (id)predictionsForObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x000000000017993d
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001798f9
- (id)entityPrintOriginatingRequestSpecifier;	// IMP=0x00000000001798f1

@end

