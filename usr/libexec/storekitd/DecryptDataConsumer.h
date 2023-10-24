//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ChunkedDigest, DigestVerifier, NSString;
@protocol AssetDataConsumer, OS_dispatch_queue;

@interface DecryptDataConsumer : NSObject
{
    char *_partialSampleBuffer;	// 8 = 0x8
    unsigned long long _partialSampleBufferLength;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_consumerQueue;	// 24 = 0x18
    DigestVerifier *_digestVerifier;	// 32 = 0x20
    unsigned int *_sampleSizes;	// 40 = 0x28
    unsigned long long _sampleSizesCount;	// 48 = 0x30
    ChunkedDigest *_digest;	// 56 = 0x38
    id <AssetDataConsumer> _streamAdapter;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000022c4c
@property(retain) id <AssetDataConsumer> streamAdapter; // @synthesize streamAdapter=_streamAdapter;
@property(retain) ChunkedDigest *digest; // @synthesize digest=_digest;
- (void)_resetDecryptionBufferAndDigestVerifier;	// IMP=0x0010000000022bea
- (void)truncateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022a32
- (void)suspendWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022923
- (void);	// IMP=0x0010000000022814
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022644
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002257d
- (void)consumeData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000224b4
- (void)consumeData:(id)arg1 andWaitWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000224a2
- (void)_resizeSampleSizeArray:(unsigned long long)arg1;	// IMP=0x0010000000022442
- (_Bool)_beginSessionWithDPInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000022400
- (void)dealloc;	// IMP=0x00100000000223d1
- (id)initWithDPInfo:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000222e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

