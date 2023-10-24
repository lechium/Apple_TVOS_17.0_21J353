//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetExportSession;

@interface ExportSessionVideoTranscodingTask
{
    AVAssetExportSession *_exportSession;	// 152 = 0x98
}

+ (id)videoDateFormatter;	// IMP=0x0040000000016bb9
- (void).cxx_destruct;	// IMP=0x002000000001969e
@property(retain) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
- (void)dumpStatistics;	// IMP=0x001000000001939c
- (id)outputFileTypeForExportSession:(id)arg1;	// IMP=0x0000000000019141
- (id)exportPresetName;	// IMP=0x00100000000190d4
- (id)metadataItemsFromOptionsAndInputAsset:(id)arg1;	// IMP=0x0010000000018573
- (void)addOutputMetadataFromOptionsAndInputAsset:(id)arg1 toExportSession:(id)arg2;	// IMP=0x001000000001846d
- (id)exportSessionForInputAsset:(id)arg1 presetName:(id)arg2;	// IMP=0x001000000001824d
- (void)performMetadataTrackExtractionConversion;	// IMP=0x0010000000017a7f
- (void)performPassthroughConversion;	// IMP=0x0010000000017986
- (void)cancelTranscode;	// IMP=0x001000000001781a
- (double)currentFractionCompleted;	// IMP=0x00100000000176d7
- (_Bool)hasProgress;	// IMP=0x00100000000176a4
- (CDUnknownBlockType)exportSessionCompletionHandler;	// IMP=0x0010000000017656
- (void)startExportSession:(id)arg1;	// IMP=0x00100000000175c4
- (void)configureOutputForExportSession:(id)arg1 outputFileType:(id)arg2;	// IMP=0x001000000001753f
- (void)performExport;	// IMP=0x0010000000016c27

@end

