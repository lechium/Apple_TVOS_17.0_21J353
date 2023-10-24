//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@class CKShareMetadata, NSData, NSString;
@protocol CKInitiateParticipantVettingOperationCallbacks;

@interface CKDInitiateParticipantVettingOperation : CKDOperation
{
    CDUnknownBlockType _participantVettingProgressBlock;	// 8 = 0x8
    CKShareMetadata *_shareMetadata;	// 16 = 0x10
    NSData *_encryptedKey;	// 24 = 0x18
    NSString *_participantID;	// 32 = 0x20
    NSString *_address;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000185ee4
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(retain, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(retain, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property(copy, nonatomic) CDUnknownBlockType participantVettingProgressBlock; // @synthesize participantVettingProgressBlock=_participantVettingProgressBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x0000000000185dc8
- (void)_sendRequest:(_Bool)arg1;	// IMP=0x00000000001852d8
- (int)operationType;	// IMP=0x00000000001852cd
- (void)main;	// IMP=0x0000000000184f6c
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001844b8
- (id)_encryptedKeyDataWithShareMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000184243
- (void)_handleVettingInitiationProgress:(id)arg1;	// IMP=0x0000000000184102
- (id)activityCreate;	// IMP=0x00000000001840d9
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000183fec

// Remaining properties
@property(retain, nonatomic) id <CKInitiateParticipantVettingOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end
