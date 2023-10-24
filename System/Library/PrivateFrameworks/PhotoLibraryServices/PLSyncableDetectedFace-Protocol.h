//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>
#import <PhotoLibraryServices/PFPhotosFaceRepresentation-Protocol.h>
#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class NSDate, NSSet, NSString;
@protocol PLSyncablePerson;

@protocol PLSyncableDetectedFace <NSObject, PFPhotosFaceRepresentation, PLSyncableObject>
@property(nonatomic) short cloudLocalState;
@property(nonatomic) short detectionType;
@property(nonatomic) int trainingType;
@property(nonatomic) int cloudNameSource;
@property(nonatomic) int nameSource;
@property(nonatomic) _Bool hidden;
@property(nonatomic) _Bool manual;
@property(readonly, nonatomic) _Bool isTrainingFace;
@property(nonatomic) long long sourceHeight;
@property(nonatomic) long long sourceWidth;
@property(retain, nonatomic) id <PLSyncablePerson> personBeingKeyFace;
@property(retain, nonatomic) NSSet *rejectedPersons;
@property(retain, nonatomic) id <PLSyncablePerson> personForFace;
@property(copy, nonatomic) NSDate *adjustmentVersion;
@property(nonatomic) int faceAlgorithmVersion;
@property(nonatomic) double bodyHeight;
@property(nonatomic) double bodyWidth;
@property(nonatomic) double size;
@property(nonatomic) double bodyCenterY;
@property(nonatomic) double bodyCenterX;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
- (NSString *)syncDescription;
- (NSString *)pointerDescription;
- (void)setAssociatedPerson:(id <PLSyncablePerson>)arg1;
@end

