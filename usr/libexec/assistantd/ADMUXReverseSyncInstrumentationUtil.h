//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADMUXReverseSyncInstrumentationUtil : NSObject
{
}

+ (int)_ADMUXSyncTokenTransferReason:(long long)arg1;	// IMP=0x00400000000b649e
+ (int)_KVErrorToSyncDataDonationFailureReason:(id)arg1;	// IMP=0x00100000000b6477
+ (int)_ADMUXSyncDownloadTriggerToRSSDownloadTrigger:(long long)arg1;	// IMP=0x00100000000b645f
+ (int)_SASyncTypeToRSSSiriVocabSyncData:(id)arg1;	// IMP=0x00100000000b625d
+ (int)_ADServerSyncErrorCodeToRSSSiriVocabSyncDataDownloadFailureReason:(long long)arg1;	// IMP=0x00100000000b6245
+ (id)_generateSISchemaUuidPostMD5HashFrom:(id)arg1;	// IMP=0x00100000000b617c
+ (void)logSiriVocabDataDownloadEndedRequestId:(id)arg1;	// IMP=0x00100000000b5f2f
+ (void)logSiriVocabDataDownloadFailedRequestId:(id)arg1 errorCode:(long long)arg2;	// IMP=0x00100000000b5ccd
+ (void)logSiriVocabDataDownloadTriggeredRequestId:(id)arg1 triggerType:(long long)arg2 syncType:(id)arg3;	// IMP=0x00100000000b5a29
+ (void)logSyncTokenReceivedWithTransferReason:(long long)arg1 requestCreatedAt:(id)arg2;	// IMP=0x00100000000b572c
+ (void)logSyncDataDonationFailedWithReason:(id)arg1;	// IMP=0x00100000000b55b9
+ (void)logSyncDataUpdateNotificationReceivedWithLatency:(double)arg1;	// IMP=0x00100000000b5367

@end
