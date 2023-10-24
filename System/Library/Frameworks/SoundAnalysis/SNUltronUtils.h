//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNUltronUtils : NSObject
{
}

+ (id)addResult:(id)arg1 toHistoryForRequest:(id)arg2 histories:(id)arg3 ultronHistoryDuration:(CDStruct_1b6d18a9)arg4 sysdiagnoseHistoryDuration:(CDStruct_1b6d18a9)arg5;	// IMP=0x00800000000d1f37
+ (id)emplaceUltronReportOperatorForRequest:(id)arg1 recordingFormat:(id)arg2 allReporters:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000d1e0e
+ (id)createUltronReportOperatorForRequest:(id)arg1 recordingFormat:(id)arg2 error:(id *)arg3;	// IMP=0x00800000000d1c31
+ (id)updateUltronReportForRequest:(id)arg1 recordingFormat:(id)arg2 allReporters:(id)arg3 shouldRecordNewResult:(_Bool)arg4 newResult:(id)arg5 resultsHistories:(id)arg6 audioHistory:(void *)arg7 historyRecordDuration:(CDStruct_1b6d18a9)arg8 error:(id *)arg9;	// IMP=0x00800000000d19ad
+ (id)updateUltronReportForRequest:(id)arg1 existingReporter:(id)arg2 recordingFormat:(id)arg3 shouldRecordNewResult:(_Bool)arg4 newResult:(id)arg5 resultsHistory:(id)arg6 audioHistory:(void *)arg7 historyRecordDuration:(CDStruct_1b6d18a9)arg8 error:(id *)arg9;	// IMP=0x00800000000d17e3
+ (void)completeUltronReportsForManyReporters:(id)arg1;	// IMP=0x00800000000d167d
+ (id)completeOptionalUltronReportForRequest:(id)arg1 allReporters:(id)arg2;	// IMP=0x00800000000d1561
+ (void)completeUltronReportForReporter:(id)arg1;	// IMP=0x00800000000d14cf
+ (id)startOrContinueUltronReportForRequest:(id)arg1 existingReporter:(id)arg2 recordingFormat:(id)arg3 newResult:(id)arg4 resultsHistory:(id)arg5 audioHistory:(void *)arg6 historyRecordDuration:(CDStruct_1b6d18a9)arg7 error:(id *)arg8;	// IMP=0x00800000000d133f
+ (_Bool)sendInputToUltronReporter:(id)arg1 audioHistory:(void *)arg2 resultsHistory:(id)arg3 maxDuration:(CDStruct_1b6d18a9)arg4 error:(id *)arg5;	// IMP=0x00800000000d1119
+ (_Bool)sendInputToOptionalUltronReporterForRequest:(id)arg1 allReporters:(id)arg2 result:(id)arg3;	// IMP=0x00800000000d100a
+ (void)sendInputToUltronReporter:(id)arg1 results:(id)arg2;	// IMP=0x00800000000d0e74
+ (void)sendInputToUltronReporter:(id)arg1 result:(id)arg2;	// IMP=0x00800000000d0dc2
+ (_Bool)sendInputToUltronReporter:(id)arg1 recentFramesOfAudioBuffer:(void *)arg2 startingFromTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;	// IMP=0x00800000000d0d23
+ (void)sendInputToUltronReporter:(id)arg1 recentFramesOfAudioBuffer:(void *)arg2 frameCount:(unsigned int)arg3;	// IMP=0x00800000000d0c8d
+ (_Bool)sendInputToOptionalUltronReporterForRequest:(id)arg1 allReporters:(id)arg2 audioBuffer:(id)arg3;	// IMP=0x00800000000d0b7e
+ (void)sendInputToUltronReporters:(id)arg1 audioBuffer:(id)arg2;	// IMP=0x00800000000d09e2
+ (void)sendInputToUltronReporter:(id)arg1 audioBuffer:(id)arg2;	// IMP=0x00800000000d0930
+ (id)writeSummaryReportAsJSONToDirectoryURL:(id)arg1 jsonWritingOptions:(unsigned long long)arg2 createIntermediateDirectories:(_Bool)arg3 overwrite:(_Bool)arg4 date:(id)arg5 requestDescription:(id)arg6 detectionResults:(id)arg7 buildVersion:(id)arg8 processedFrameCount:(long long)arg9 error:(id *)arg10;	// IMP=0x00800000000d07a7
+ (id)writeSummaryReportAsJSONToURL:(id)arg1 jsonWritingOptions:(unsigned long long)arg2 createIntermediateDirectories:(_Bool)arg3 overwrite:(_Bool)arg4 date:(id)arg5 requestDescription:(id)arg6 detectionResults:(id)arg7 buildVersion:(id)arg8 processedFrameCount:(long long)arg9 error:(id *)arg10;	// IMP=0x00800000000d0695
+ (id)summaryReportForDate:(id)arg1 requestDescription:(id)arg2 detectionResults:(id)arg3 buildVersion:(id)arg4 processedFrameCount:(long long)arg5;	// IMP=0x00800000000d03da
+ (id)summaryReportGroupedConfidenceValuesForResults:(id)arg1;	// IMP=0x00800000000d0296
+ (id)summaryReportConfidenceValuesForResults:(id)arg1;	// IMP=0x00800000000d0119
+ (id)collectDetectedStatusFromResults:(id)arg1;	// IMP=0x00800000000d0078
+ (id)collectConfidencesFromResults:(id)arg1;	// IMP=0x00800000000cffda
+ (id)collectTimestampsFromResults:(id)arg1;	// IMP=0x00800000000cff15
+ (id)groupDetectionResultsByIdentifier:(id)arg1;	// IMP=0x00800000000cfec0
+ (id)openRecordingWavForDate:(id)arg1 requestDescription:(id)arg2 format:(id)arg3 directoryURL:(id)arg4 error:(id *)arg5;	// IMP=0x00800000000cfd97
+ (id)generateSummaryReportURLForDate:(id)arg1 requestDescription:(id)arg2 directoryURL:(id)arg3;	// IMP=0x00800000000cfcf3
+ (id)generateRecordingWavURLForDate:(id)arg1 requestDescription:(id)arg2 directoryURL:(id)arg3;	// IMP=0x00800000000cfc4f
+ (id)generateSummaryReportFilenameForDate:(id)arg1 requestDescription:(id)arg2;	// IMP=0x00800000000cfbe4
+ (id)generateRecordingWavFilenameForDate:(id)arg1 requestDescription:(id)arg2;	// IMP=0x00800000000cfb79
+ (id)generateReportBasenameForDate:(id)arg1 requestDescription:(id)arg2;	// IMP=0x00800000000cfaca
+ (id)reanchorTimes:(id)arg1;	// IMP=0x00800000000cfaa8
+ (id)reanchorTimesRelativeToFirstOfTimeRangeWritables:(id)arg1;	// IMP=0x00800000000cf9b1
+ (id)subtractTimeOffset:(CDStruct_1b6d18a9)arg1 fromTimeRangeWritables:(id)arg2;	// IMP=0x00800000000cf89b
+ (id)subtractTimeOffset:(CDStruct_1b6d18a9)arg1 fromTimeRangeWritable:(id)arg2;	// IMP=0x00800000000cf7a4

@end
