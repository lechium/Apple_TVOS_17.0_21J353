//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNPersonsModelFaceModel : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000182e21
+ (id)modelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000182cb8
+ (_Bool)getStoredRepresentationTag:(unsigned int *)arg1 forModelVersion:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000182c74
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000182c6e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000182c3f
- (id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000182c10
- (id)faceCountsForAllPersons;	// IMP=0x0000000000182c03
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;	// IMP=0x0000000000182bf6
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000182bee
- (id)personUniqueIdentifiers;	// IMP=0x0000000000182be1
- (unsigned long long)personCount;	// IMP=0x0000000000182bd9
- (unsigned long long)faceprintRequestRevision;	// IMP=0x0000000000182bd1
- (_Bool)isCompatibleWithConfiguration:(id)arg1;	// IMP=0x0000000000182b48
- (id)personPredictionsForFace:(id)arg1 withDescriptor:(const void *)arg2 limit:(unsigned long long)arg3 canceller:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000182b18

@end

