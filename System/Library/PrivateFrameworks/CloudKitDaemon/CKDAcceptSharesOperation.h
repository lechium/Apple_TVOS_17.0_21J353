//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;
@protocol CKAcceptSharesOperationCallbacks;

@interface CKDAcceptSharesOperation
{
    CDUnknownBlockType _acceptCompletionBlock;	// 8 = 0x8
    NSMutableDictionary *_clientProvidedMetadatasByURL;	// 16 = 0x10
    NSMutableArray *_shareURLsToAccept;	// 24 = 0x18
    NSMutableArray *_acceptedShareURLsToFetch;	// 32 = 0x20
    NSMutableDictionary *_shareMetadatasToAcceptByURL;	// 40 = 0x28
    unsigned long long _numShareAcceptAttempts;	// 48 = 0x30
    NSMutableDictionary *_anonymousShareTuplesAcceptAttempted;	// 56 = 0x38
    NSMutableArray *_anonymousShareTuplesAccepted;	// 64 = 0x40
}

+ (id)nameForState:(unsigned long long)arg1;	// IMP=0x006000000032ab60
- (void).cxx_destruct;	// IMP=0x0000000000332c5c
@property(retain, nonatomic) NSMutableArray *anonymousShareTuplesAccepted; // @synthesize anonymousShareTuplesAccepted=_anonymousShareTuplesAccepted;
@property(retain, nonatomic) NSMutableDictionary *anonymousShareTuplesAcceptAttempted; // @synthesize anonymousShareTuplesAcceptAttempted=_anonymousShareTuplesAcceptAttempted;
@property(nonatomic) unsigned long long numShareAcceptAttempts; // @synthesize numShareAcceptAttempts=_numShareAcceptAttempts;
@property(retain, nonatomic) NSMutableDictionary *shareMetadatasToAcceptByURL; // @synthesize shareMetadatasToAcceptByURL=_shareMetadatasToAcceptByURL;
@property(retain, nonatomic) NSMutableArray *acceptedShareURLsToFetch; // @synthesize acceptedShareURLsToFetch=_acceptedShareURLsToFetch;
@property(retain, nonatomic) NSMutableArray *shareURLsToAccept; // @synthesize shareURLsToAccept=_shareURLsToAccept;
@property(retain, nonatomic) NSMutableDictionary *clientProvidedMetadatasByURL; // @synthesize clientProvidedMetadatasByURL=_clientProvidedMetadatasByURL;
@property(copy, nonatomic) CDUnknownBlockType acceptCompletionBlock; // @synthesize acceptCompletionBlock=_acceptCompletionBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x0000000000332ad4
- (void)main;	// IMP=0x0000000000332a70
- (void)_processAnonymousShares;	// IMP=0x00000000003327d1
- (void)_fetchMetadataForShares;	// IMP=0x0000000000331395
- (void)_prepareShareMetadata;	// IMP=0x0000000000330733
- (_Bool)_callingParticipantOONForShareMetadata:(id)arg1;	// IMP=0x0000000000330661
- (id)_keySwapForOONParticipant:(id)arg1;	// IMP=0x000000000032fdae
- (_Bool)_validateInvitedPCSCanBeDecryptedForShare:(id)arg1;	// IMP=0x000000000032fa74
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000032ec39
- (void)_fetchAcceptedShares;	// IMP=0x000000000032e015
- (void)_decryptShareMetadata;	// IMP=0x000000000032d56f
- (unsigned long long)sharingServiceTypeForShareMetadata:(id)arg1;	// IMP=0x000000000032d4df
- (_Bool)_acceptShares;	// IMP=0x000000000032baa6
- (int)operationType;	// IMP=0x000000000032ba9b
- (void)_handleShareURLAccepted:(id)arg1 forShare:(id)arg2 responseCode:(id)arg3;	// IMP=0x000000000032adaf
- (void)_performCallbackForURL:(id)arg1 withShare:(id)arg2 error:(id)arg3;	// IMP=0x000000000032abb6
- (_Bool)makeStateTransition;	// IMP=0x000000000032a980
- (id)activityCreate;	// IMP=0x000000000032a957
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000032a5d0

// Remaining properties
@property(retain, nonatomic) id <CKAcceptSharesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

