//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCStatisticsReporter : NSObject
{
    NSObject<OS_dispatch_queue> *_writerQueue;	// 8 = 0x8
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015021d
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (id)description;	// IMP=0x000000000015017f
- (id)coreAnalyticsEventName;	// IMP=0x0000000000150172
- (void)_writeData:(id)arg1 toFileAtPath:(id)arg2;	// IMP=0x000000000014fd4e
- (void)_writeSamplesFromRecorder:(id)arg1;	// IMP=0x000000000014fc57
- (id)_reportingFileForRecorder:(id)arg1 extension:(id)arg2;	// IMP=0x000000000014fa7e
- (id)_reportDirectoryURL;	// IMP=0x000000000014f8eb
- (void)_clearLocalReports;	// IMP=0x000000000014f3e2
- (void)_sendAnalyticsData;	// IMP=0x000000000014ec65
- (void)_writeAnalyticsDataFromRecorder:(id)arg1;	// IMP=0x000000000014e984
@property(readonly, copy, nonatomic) NSString *recordScenarioName;
- (void)flush;	// IMP=0x000000000014e8a8
- (void)reportRecordedResults:(id)arg1;	// IMP=0x000000000014e81b
- (id)init;	// IMP=0x000000000014e763

@end

