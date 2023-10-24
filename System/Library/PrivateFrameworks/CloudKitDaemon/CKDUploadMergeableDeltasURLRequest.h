//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSMutableDictionary;

@interface CKDUploadMergeableDeltasURLRequest : CKDURLRequest
{
    NSArray *_deltas;	// 8 = 0x8
    NSArray *_replacementRequests;	// 16 = 0x10
    CDUnknownBlockType _perDeltaCompletionBlock;	// 24 = 0x18
    CDUnknownBlockType _perReplaceDeltasRequestCompletionBlock;	// 32 = 0x20
    NSMutableDictionary *_deltasByRequestID;	// 40 = 0x28
    NSMutableDictionary *_replacementRequestsByRequestID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003d009
@property(retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID; // @synthesize replacementRequestsByRequestID=_replacementRequestsByRequestID;
@property(retain, nonatomic) NSMutableDictionary *deltasByRequestID; // @synthesize deltasByRequestID=_deltasByRequestID;
@property(copy, nonatomic) CDUnknownBlockType perReplaceDeltasRequestCompletionBlock; // @synthesize perReplaceDeltasRequestCompletionBlock=_perReplaceDeltasRequestCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perDeltaCompletionBlock; // @synthesize perDeltaCompletionBlock=_perDeltaCompletionBlock;
@property(readonly, copy, nonatomic) NSArray *replacementRequests; // @synthesize replacementRequests=_replacementRequests;
@property(readonly, copy, nonatomic) NSArray *deltas; // @synthesize deltas=_deltas;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x000000000003cbee
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000003c8d6
- (id)generateRequestOperations;	// IMP=0x000000000003be0b
- (id)anonymousUserIDForHTTPHeader;	// IMP=0x000000000003bd91
- (_Bool)handlesAnonymousCKUserIDPropagation;	// IMP=0x000000000003bd89
- (id)requestOperationClasses;	// IMP=0x000000000003bc9d
- (id)zoneIDsToLock;	// IMP=0x000000000003bb95
- (_Bool)allowsAnonymousAccount;	// IMP=0x000000000003bb7b
- (void)fillOutRequestProperties:(id)arg1;	// IMP=0x000000000003baaa
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x000000000003b9c2
- (id)initWithOperation:(id)arg1 deltas:(id)arg2 replacementRequests:(id)arg3;	// IMP=0x000000000003b8a3

@end
