//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMPingStatistics, NSMutableArray, NSMutableString, _IMPingPacketData;

@interface _IMPingStatisticsCollector : NSObject
{
    _IMPingPacketData *_timestampArray[160];	// 8 = 0x8
    NSMutableArray *_roundTriptimes;	// 1288 = 0x508
    NSMutableString *_stringToWriteToFile;	// 1296 = 0x510
    IMPingStatistics *_stats;	// 1304 = 0x518
}

- (void).cxx_destruct;	// IMP=0x0000000000045fd8
- (double)_computeStandardDeviation:(id)arg1 numPings:(int)arg2 averageRTT:(double)arg3;	// IMP=0x0000000000045dca
- (double)_computeMedianTime:(id)arg1;	// IMP=0x0000000000045ca9
- (id)pingStatsForLastNSeconds:(double)arg1;	// IMP=0x0000000000045917
- (id)pingStats;	// IMP=0x000000000004582a
- (_Bool)logStatsToFile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000455ed
- (void)timeoutOldSequenceNumbers:(double)arg1;	// IMP=0x00000000000453cc
- (void)addEchoReplyPacket:(int)arg1;	// IMP=0x000000000004517b
- (struct timeval)timeSentForPacket:(int)arg1;	// IMP=0x00000000000450b1
- (void)dealloc;	// IMP=0x0000000000045050
- (void)addEchoPacket:(int)arg1 packetTimestamp:(struct timeval)arg2 error:(int)arg3;	// IMP=0x0000000000044dbf
- (id)init;	// IMP=0x0000000000044d02

@end

