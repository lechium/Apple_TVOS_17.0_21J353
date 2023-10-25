//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAbsoluteAssetId, MAAssetDiff, MADownloadConfig, MADownloadOptions, NSArray, NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MADActivityCommandRequest : NSObject
{
    _Bool _doNotBlockBeforeFirstUnlock;	// 8 = 0x8
    _Bool _doNotBlockOnNetworkStatus;	// 9 = 0x9
    _Bool _pallasEnabled;	// 10 = 0xa
    _Bool _cleanupInFlightDownloads;	// 11 = 0xb
    NSString *_clientName;	// 16 = 0x10
    NSString *_action;	// 24 = 0x18
    NSString *_assetType;	// 32 = 0x20
    NSString *_assetId;	// 40 = 0x28
    long long _returnTypes;	// 48 = 0x30
    NSDictionary *_queryParams;	// 56 = 0x38
    NSString *_relativeUrl;	// 64 = 0x40
    MADownloadOptions *_downloadOptions;	// 72 = 0x48
    unsigned long long _downloadSize;	// 80 = 0x50
    unsigned long long _notificationInterval;	// 88 = 0x58
    MADownloadConfig *_downloadConfig;	// 96 = 0x60
    NSArray *_assetTypesList;	// 104 = 0x68
    long long _assetState;	// 112 = 0x70
    NSDictionary *_assetIdsToPreserve;	// 120 = 0x78
    NSString *_serverUrl;	// 128 = 0x80
    NSString *_pallasUrl;	// 136 = 0x88
    NSString *_pallasAudience;	// 144 = 0x90
    MAAbsoluteAssetId *_absoluteId;	// 152 = 0x98
    long long _unarchiveSize;	// 160 = 0xa0
    unsigned long long _gcOverrideDays;	// 168 = 0xa8
    NSString *_connectionIdentifier;	// 176 = 0xb0
    NSString *_purpose;	// 184 = 0xb8
    NSString *_baseUrl;	// 192 = 0xc0
    NSData *_clientExtractorData;	// 200 = 0xc8
    unsigned long long _clientExtractorLen;	// 208 = 0xd0
    MAAssetDiff *_allowDifferences;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000002fd7a
@property(retain, nonatomic) MAAssetDiff *allowDifferences; // @synthesize allowDifferences=_allowDifferences;
@property(nonatomic) unsigned long long clientExtractorLen; // @synthesize clientExtractorLen=_clientExtractorLen;
@property(retain, nonatomic) NSData *clientExtractorData; // @synthesize clientExtractorData=_clientExtractorData;
@property(retain, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(retain, nonatomic) NSString *purpose; // @synthesize purpose=_purpose;
@property(retain, nonatomic) NSString *connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
@property(nonatomic) _Bool cleanupInFlightDownloads; // @synthesize cleanupInFlightDownloads=_cleanupInFlightDownloads;
@property(nonatomic) unsigned long long gcOverrideDays; // @synthesize gcOverrideDays=_gcOverrideDays;
@property(nonatomic) long long unarchiveSize; // @synthesize unarchiveSize=_unarchiveSize;
@property(retain, nonatomic) MAAbsoluteAssetId *absoluteId; // @synthesize absoluteId=_absoluteId;
@property(retain, nonatomic) NSString *pallasAudience; // @synthesize pallasAudience=_pallasAudience;
@property(retain, nonatomic) NSString *pallasUrl; // @synthesize pallasUrl=_pallasUrl;
@property(retain, nonatomic) NSString *serverUrl; // @synthesize serverUrl=_serverUrl;
@property(nonatomic) _Bool pallasEnabled; // @synthesize pallasEnabled=_pallasEnabled;
@property(retain, nonatomic) NSDictionary *assetIdsToPreserve; // @synthesize assetIdsToPreserve=_assetIdsToPreserve;
@property(nonatomic) long long assetState; // @synthesize assetState=_assetState;
@property(retain, nonatomic) NSArray *assetTypesList; // @synthesize assetTypesList=_assetTypesList;
@property(retain, nonatomic) MADownloadConfig *downloadConfig; // @synthesize downloadConfig=_downloadConfig;
@property(nonatomic) unsigned long long notificationInterval; // @synthesize notificationInterval=_notificationInterval;
@property(nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(retain, nonatomic) MADownloadOptions *downloadOptions; // @synthesize downloadOptions=_downloadOptions;
@property(retain, nonatomic) NSString *relativeUrl; // @synthesize relativeUrl=_relativeUrl;
@property(retain, nonatomic) NSDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(nonatomic) _Bool doNotBlockOnNetworkStatus; // @synthesize doNotBlockOnNetworkStatus=_doNotBlockOnNetworkStatus;
@property(nonatomic) _Bool doNotBlockBeforeFirstUnlock; // @synthesize doNotBlockBeforeFirstUnlock=_doNotBlockBeforeFirstUnlock;
@property(nonatomic) long long returnTypes; // @synthesize returnTypes=_returnTypes;
@property(retain, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
@property(retain, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
- (void)associateAllowDifferences:(id)arg1;	// IMP=0x000000000002fa1a
- (void)associateAbsoluteId:(id)arg1;	// IMP=0x000000000002f9b2
- (void)associateClientExtractorData:(id)arg1 ofLength:(unsigned long long)arg2;	// IMP=0x000000000002f934
- (void)associateBaseUrl:(id)arg1;	// IMP=0x000000000002f8cc
- (void)associatePurpose:(id)arg1;	// IMP=0x000000000002f864
- (void)associateConnectionIdentifier:(id)arg1;	// IMP=0x000000000002f7fc
- (void)associateCleanupInFlightDownloads:(_Bool)arg1;	// IMP=0x000000000002f7c1
- (void)associateGCOverrideDays:(unsigned long long)arg1;	// IMP=0x000000000002f786
- (void)associateUnarchiveSize:(long long)arg1;	// IMP=0x000000000002f74b
- (void)associatePallasAudience:(id)arg1;	// IMP=0x000000000002f6e3
- (void)associatePallasUrl:(id)arg1;	// IMP=0x000000000002f67b
- (void)associateServerUrl:(id)arg1;	// IMP=0x000000000002f613
- (void)associatePallasEnabled:(_Bool)arg1;	// IMP=0x000000000002f5d8
- (void)associateAssetIdsToPreserve:(id)arg1;	// IMP=0x000000000002f570
- (void)associateAssetState:(long long)arg1;	// IMP=0x000000000002f535
- (void)associateAssetTypesList:(id)arg1;	// IMP=0x000000000002f4cd
- (void)associateDownloadConfig:(id)arg1;	// IMP=0x000000000002f465
- (void)associateNotificationInterval:(unsigned long long)arg1;	// IMP=0x000000000002f42a
- (void)associateDownloadSize:(unsigned long long)arg1;	// IMP=0x000000000002f3ef
- (void)associateDownloadOptions:(id)arg1;	// IMP=0x000000000002f387
- (void)associateRelativeUrl:(id)arg1;	// IMP=0x000000000002f31f
- (void)associateQueryParams:(id)arg1;	// IMP=0x000000000002f2b7
- (void)associateDoNotBlockOnNetworkStatus:(_Bool)arg1;	// IMP=0x000000000002f27c
- (void)associateDoNotBlockBeforeFirstUnlock:(_Bool)arg1;	// IMP=0x000000000002f241
- (void)associateReturnTypes:(long long)arg1;	// IMP=0x000000000002f22f
- (void)associateAssetId:(id)arg1;	// IMP=0x000000000002f1c7
- (void)associateAssetType:(id)arg1;	// IMP=0x000000000002f15f
- (id)initForClient:(id)arg1 requestingAction:(id)arg2;	// IMP=0x000000000002efa4

@end

