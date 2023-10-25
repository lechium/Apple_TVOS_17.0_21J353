//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADAnalyticsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;	// 8 = 0x8
    _Bool _overrideClientNameAsTestTool;	// 16 = 0x10
    _Bool _prependClientNameWithTestTool;	// 17 = 0x11
    long long _reportingLevel;	// 24 = 0x18
    NSString *_savePath;	// 32 = 0x20
    NSMutableDictionary *_assetTypeEventTracker;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002d051
@property(retain) NSMutableDictionary *assetTypeEventTracker; // @synthesize assetTypeEventTracker=_assetTypeEventTracker;
@property _Bool prependClientNameWithTestTool; // @synthesize prependClientNameWithTestTool=_prependClientNameWithTestTool;
@property _Bool overrideClientNameAsTestTool; // @synthesize overrideClientNameAsTestTool=_overrideClientNameAsTestTool;
@property(readonly, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(readonly) long long reportingLevel; // @synthesize reportingLevel=_reportingLevel;
- (_Bool)shouldRecordEventForAssetType:(id)arg1;	// IMP=0x000000000002ce59
- (void)recordQueryAttemptForAssetType:(id)arg1 clientName:(id)arg2 purpose:(id)arg3 result:(id)arg4 assetCount:(id)arg5 returnTypes:(id)arg6 filtered:(_Bool)arg7 requireSpecificAsset:(_Bool)arg8;	// IMP=0x000000000002cafc
- (void)recordDownloadAttemptForAssetType:(id)arg1 clientName:(id)arg2 baseUrl:(id)arg3 relativePath:(id)arg4 purpose:(id)arg5 result:(id)arg6 analyticsFileType:(id)arg7 isAutoDownload:(_Bool)arg8 isPallas:(_Bool)arg9 pallasAssetAudience:(id)arg10 isUserPriority:(_Bool)arg11 bytesWritten:(id)arg12 bytesTransferredEst:(id)arg13 brainVersion:(id)arg14 additionalData:(id)arg15;	// IMP=0x000000000002c0f7
- (void)recordDownloadAttemptForAssetType:(id)arg1 clientName:(id)arg2 baseUrl:(id)arg3 relativePath:(id)arg4 purpose:(id)arg5 result:(id)arg6 analyticsFileType:(id)arg7 isAutoDownload:(_Bool)arg8 isPallas:(_Bool)arg9 pallasAssetAudience:(id)arg10 isUserPriority:(_Bool)arg11 bytesWritten:(id)arg12 bytesTransferredEst:(id)arg13 additionalData:(id)arg14;	// IMP=0x000000000002c073
- (_Bool)eventRecordingEnabled;	// IMP=0x000000000002bd51
- (void)recordDownloadSuccessForAssetType:(id)arg1 notificationSuffix:(id)arg2 fileType:(id)arg3;	// IMP=0x000000000002bb8d
- (void)recordEventWithName:(id)arg1 payload:(id)arg2;	// IMP=0x000000000002ba0c
- (id)removePrefix:(id)arg1 fromString:(id)arg2;	// IMP=0x000000000002b942
- (id)yesNoString:(_Bool)arg1;	// IMP=0x000000000002b928
- (id)nilToNoneString:(id)arg1;	// IMP=0x000000000002b8cd
- (void)_queue_submitEvent:(id)arg1;	// IMP=0x000000000002b8bf
- (void)_queue_submitAllEvents;	// IMP=0x000000000002b8b1
- (void)_queue_setEvent:(id)arg1;	// IMP=0x000000000002b8a3
@property(readonly, nonatomic) NSDictionary *events;
- (void)submitAllEvents;	// IMP=0x000000000002b403
- (void)changeReportingLevel:(long long)arg1;	// IMP=0x000000000002b3df
- (void)submitEventsWithName:(id)arg1;	// IMP=0x000000000002ae7f
- (void)submitEvent:(id)arg1;	// IMP=0x000000000002aabd
- (void)removeAllEvents;	// IMP=0x000000000002a62c
- (void)removeEventsWithName:(id)arg1;	// IMP=0x0000000000029e9e
- (void)removeEvent:(id)arg1;	// IMP=0x00000000000299ba
- (void)setEvent:(id)arg1;	// IMP=0x000000000002996f
- (_Bool)saveEventToDisk:(id)arg1;	// IMP=0x00000000000295a0
- (id)copyEventFromPath:(id)arg1;	// IMP=0x00000000000292c5
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000291b6
- (id)init;	// IMP=0x00000000000290ae

@end

