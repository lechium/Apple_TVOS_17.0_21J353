//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSDictionary;

@interface IDSProfileGetHandlesMessage : FTIDSMessage
{
    NSArray *_responseHandles;	// 232 = 0xe8
    NSDictionary *_selfHandle;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x0020000000422680
@property(copy) NSDictionary *selfHandle; // @synthesize selfHandle=_selfHandle;
@property(copy) NSArray *responseHandles; // @synthesize responseHandles=_responseHandles;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0010000000422537
- (double)anisetteHeadersTimeout;	// IMP=0x0010000000422529
- (id)messageBody;	// IMP=0x0010000000422510
- (id)requiredKeys;	// IMP=0x00100000004224f7
- (id)bagKey;	// IMP=0x00100000004224ea
- (int)maxTimeoutRetries;	// IMP=0x00100000004224df
- (_Bool)wantsExtraTimeoutRetry;	// IMP=0x00100000004224d7
- (id)additionalMessageHeaders;	// IMP=0x0010000000422403
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000042238c
- (id)init;	// IMP=0x0010000000422338

@end
