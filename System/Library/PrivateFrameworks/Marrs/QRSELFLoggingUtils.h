//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QRSELFLoggingUtils : NSObject
{
}

+ (id)convertUUID:(id)arg1;	// IMP=0x0080000000088f7a
+ (int)convertRewriteType:(int)arg1;	// IMP=0x0080000000088f5f
+ (int)convertRepetitionType:(int)arg1;	// IMP=0x0080000000088f4e
+ (int)convertMarrsErrorCode:(long long)arg1;	// IMP=0x0080000000088f2b
+ (_Bool)emitRDFailedEventWithMetadata:(id)arg1 andErrorCode:(long long)arg2;	// IMP=0x0080000000088e0f
+ (_Bool)emitCCQRFailedEventWithMetadata:(id)arg1 andErrorCode:(long long)arg2;	// IMP=0x0080000000088cf3
+ (_Bool)emitQueryRewriteFailedEventWithMetadata:(id)arg1 andErrorCode:(long long)arg2 byPredictorType:(int)arg3;	// IMP=0x0080000000088be3
+ (_Bool)emitRDEvaluatedEventWithResponse:(struct QRResponse)arg1 andNLXMetadata:(id)arg2;	// IMP=0x0080000000088b11
+ (_Bool)emitCCQREvaluatedEventWithResponse:(struct QRResponse)arg1 andNLXMetadata:(id)arg2;	// IMP=0x008000000008893c
+ (_Bool)emitQueryRewriteEvaluatedEventWithResponse:(struct QRResponse)arg1 andNLXMetadata:(id)arg2 byPredictorType:(int)arg3;	// IMP=0x0080000000088797
+ (_Bool)emitRDStartedEventWithMetadata:(id)arg1;	// IMP=0x008000000008868e
+ (_Bool)emitCCQRStartedEventWithMetadata:(id)arg1;	// IMP=0x0080000000088585
+ (_Bool)emitQueryRewriteStartedEventWithMetadata:(id)arg1 byPredictorType:(int)arg2;	// IMP=0x008000000008847f
+ (id)createCCQRContextEvaluatedTier1Event:(struct QRResponse)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x0080000000088276
+ (id)createRDContextEvaluatedEvent:(struct QRResponse)arg1 withNLXMetadata:(id)arg2;	// IMP=0x008000000008812f
+ (id)createCCQRContextEvaluatedEvent:(struct QRResponse)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x0080000000087f0a
+ (id)createRDContextEventWrapper:(id)arg1 withMetaData:(id)arg2;	// IMP=0x0080000000087e5f
+ (id)createCCQRContextEventWrapper:(id)arg1 withMetaData:(id)arg2;	// IMP=0x0080000000087db4
+ (id)createEventMetadataWithNlId:(id)arg1 andWithTrpId:(id)arg2 andWithResultCandidateId:(id)arg3 andWithRequester:(int)arg4;	// IMP=0x0080000000087c5d
+ (void)emitEvent:(id)arg1;	// IMP=0x0080000000087991

@end

