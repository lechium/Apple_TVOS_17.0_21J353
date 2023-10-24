//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHFace.h>

@class NSData, NSString;

@interface PHFace (PNFaceProtocol)
@property(nonatomic) long long qualityMeasure; // @dynamic qualityMeasure;
@property(readonly, nonatomic) NSData *faceprintData;
- (double)photosFaceRepresentationQuality;	// IMP=0x002000000013561a
- (double)photosFaceRepresentationRoll;	// IMP=0x0020000000135608
- (id)photosFaceRepresentationLocalIdentifier;	// IMP=0x00200000001355f6
- (long long)photosFaceRepresentationClusterSequenceNumber;	// IMP=0x00200000001355e4
- (long long)photosFaceRepresentationQualityMeasure;	// IMP=0x00200000001355d2
- (_Bool)photosFaceRepresentationIsRightEyeClosed;	// IMP=0x00200000001355c0
- (_Bool)photosFaceRepresentationIsLeftEyeClosed;	// IMP=0x00200000001355ae
- (_Bool)photosFaceRepresentationHasSmile;	// IMP=0x002000000013559c
- (double)photosFaceRepresentationBlurScore;	// IMP=0x002000000013558a
- (double)photosFaceRepresentationSize;	// IMP=0x0020000000135578
- (double)photosFaceRepresentationCenterY;	// IMP=0x0020000000135566
- (double)photosFaceRepresentationCenterX;	// IMP=0x0020000000135554
- (long long)photosFaceRepresentationSourceHeight;	// IMP=0x0020000000135542
- (long long)photosFaceRepresentationSourceWidth;	// IMP=0x0020000000135530
- (struct CGRect)vcp_normalizedBodyBounds;	// IMP=0x00200000002561c6
- (_Bool)vcp_hasBody;	// IMP=0x0020000000256141
- (struct CGRect)vcp_normalizedFaceBounds;	// IMP=0x0020000000255ffe
- (_Bool)vcp_hasFace;	// IMP=0x0020000000255f92

// Remaining properties
@property(readonly, nonatomic) unsigned short ageType;
@property(readonly, nonatomic) double centerX;
@property(readonly, nonatomic) double centerY;
@property(readonly, nonatomic) long long clusterSequenceNumber;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSString *personLocalIdentifier;
@property(readonly, nonatomic) unsigned short poseType;
@property(readonly, nonatomic) double poseYaw;
@property(readonly, nonatomic) double size;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long vuObservationID;
@end
