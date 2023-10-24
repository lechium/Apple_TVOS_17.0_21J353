//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSMutableDictionary;

@interface CKDAcceptSharesURLRequest : CKDURLRequest
{
    CDUnknownBlockType _shareAcceptedBlock;	// 8 = 0x8
    NSArray *_shareMetadatasToAccept;	// 16 = 0x10
    NSMutableDictionary *_shareMetadataByRequestID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002a351a
@property(retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID; // @synthesize shareMetadataByRequestID=_shareMetadataByRequestID;
@property(retain, nonatomic) NSArray *shareMetadatasToAccept; // @synthesize shareMetadatasToAccept=_shareMetadatasToAccept;
@property(copy, nonatomic) CDUnknownBlockType shareAcceptedBlock; // @synthesize shareAcceptedBlock=_shareAcceptedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000002a334c
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000002a2dad
- (id)returnVerificationKeyAndSignatureForRequestOperation:(id)arg1 dataToBeSigned:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a29a6
- (id)generateRequestOperations;	// IMP=0x00000000002a1f14
- (_Bool)requiresCKAnonymousUserIDs;	// IMP=0x00000000002a1e7f
- (_Bool)requiresCKAnonymousSignature;	// IMP=0x00000000002a1e6d
- (_Bool)handlesAnonymousCKUserIDPropagation;	// IMP=0x00000000002a1e65
- (id)requestOperationClasses;	// IMP=0x00000000002a1df9
- (void)fillOutRequestProperties:(id)arg1;	// IMP=0x00000000002a1d28
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x00000000002a1c01
- (id)zoneIDsToLock;	// IMP=0x00000000002a19e7
- (id)initWithOperation:(id)arg1 shareMetadatasToAccept:(id)arg2;	// IMP=0x00000000002a194e

@end

