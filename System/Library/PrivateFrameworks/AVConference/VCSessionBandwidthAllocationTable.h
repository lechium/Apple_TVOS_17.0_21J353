//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCSessionBandwidthAllocationTable
{
    unsigned char _type;	// 88 = 0x58
    NSMutableDictionary *_streamTokenEntries;	// 96 = 0x60
    NSMutableDictionary *_sortedEntriesForStreamToken;	// 104 = 0x68
    NSMutableDictionary *_streamIDToEntryTable;	// 112 = 0x70
    unsigned int _currentScreenEncoderGroupCount;	// 120 = 0x78
    unsigned int _maxActiveScreenEncoders;	// 124 = 0x7c
    unsigned int _maxActiveCameraEncoders;	// 128 = 0x80
    NSDictionary *_audioOnlyBitrateToStreamIDsTable;	// 136 = 0x88
    NSDictionary *_audioVideoBitrateToStreamIDsTable;	// 144 = 0x90
    NSDictionary *_videoOnlyBitrateToStreamIDsTable;	// 152 = 0x98
    NSDictionary *_videoStreamIdToRepairStreamIdMap;	// 160 = 0xa0
}

@property(readonly, nonatomic) NSDictionary *videoStreamIdToRepairStreamIdMap; // @synthesize videoStreamIdToRepairStreamIdMap=_videoStreamIdToRepairStreamIdMap;
@property(readonly, nonatomic) NSDictionary *videoOnlyBitrateToStreamIDsTable; // @synthesize videoOnlyBitrateToStreamIDsTable=_videoOnlyBitrateToStreamIDsTable;
@property(readonly, nonatomic) NSDictionary *audioVideoBitrateToStreamIDsTable; // @synthesize audioVideoBitrateToStreamIDsTable=_audioVideoBitrateToStreamIDsTable;
@property(readonly, nonatomic) NSDictionary *audioOnlyBitrateToStreamIDsTable; // @synthesize audioOnlyBitrateToStreamIDsTable=_audioOnlyBitrateToStreamIDsTable;
- (void)printTable:(id)arg1;	// IMP=0x000000000045b53a
- (_Bool)shouldAddBackupEntry:(id)arg1 referenceTable:(id)arg2 referenceQualityIndices:(id)arg3;	// IMP=0x000000000045b328
- (void)appendEntry:(id)arg1 streamTokenEntries:(id)arg2 currentNetworkBitrate:(unsigned int *)arg3 shouldUseRepairBitrate:(_Bool)arg4 appendedVideoEncoderGroups:(id)arg5;	// IMP=0x000000000045b03e
- (void)cleanupStreamTokenEntries:(id)arg1 currentNetworkBitrate:(unsigned int *)arg2 isRedundancyEnabled:(_Bool)arg3 appendedVideoEncoderGroups:(id)arg4;	// IMP=0x000000000045aeba
- (_Bool)shouldAppendEntry:(id)arg1 appendedVideoEncoderGroups:(id)arg2 is1080pCameraAvailable:(_Bool)arg3;	// IMP=0x000000000045ad54
- (_Bool)shouldAppendEntry:(id)arg1 appendedVideoEncoderGroups:(id)arg2;	// IMP=0x000000000045a8a3
- (id)newAggregatedBandwidthTableWithRedundancy:(_Bool)arg1 redundancyEnabledFor720Stream:(_Bool)arg2 enableMap:(id)arg3 is1080pCameraAvailable:(_Bool)arg4;	// IMP=0x000000000045a026
- (_Bool)shouldUseRepairBitrateForEntry:(id)arg1 isRedundancyEnabled:(_Bool)arg2 isRedundancyEnabledFor720Stream:(_Bool)arg3;	// IMP=0x0000000000459fde
- (id)tableEntriesForStreamToken:(long long)arg1;	// IMP=0x0000000000459f91
- (void)addBandwidthAllocationTableEntry:(id)arg1;	// IMP=0x0000000000459e90
- (id)entryForStreamID:(id)arg1;	// IMP=0x0000000000459e6a
- (void)dealloc;	// IMP=0x0000000000459def
- (id)initWithType:(unsigned char)arg1;	// IMP=0x0000000000459d13

@end

