//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADCoreAnalyticsSideChannel : NSObject
{
}

+ (long long)_currentHour;	// IMP=0x00400000002fe066
+ (void)logAnalyticsLocalStorageSnapshotWithSize:(id)arg1;	// IMP=0x00100000002fdfcc
+ (void)logAnalyticsLocalStoragePurgedWithSize:(id)arg1;	// IMP=0x00100000002fdf32
+ (void)logAnalyticsBatchUploadedWithBatch:(id)arg1;	// IMP=0x00100000002fde17

@end

