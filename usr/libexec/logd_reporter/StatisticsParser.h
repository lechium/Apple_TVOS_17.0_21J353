//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface StatisticsParser : NSObject
{
    long long _lowerBound;	// 8 = 0x8
    long long _upperBound;	// 16 = 0x10
    NSMutableDictionary *_snapshotClients;	// 24 = 0x18
    NSMutableDictionary *_topEmitters;	// 32 = 0x20
    int _validLineCount;	// 40 = 0x28
    long long _oldestEntryUnixTime;	// 48 = 0x30
    long long _newestEntryUnixTime;	// 56 = 0x38
    unsigned long long _totalBytes;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000002802
@property(readonly, nonatomic) NSDictionary *topEmitters; // @synthesize topEmitters=_topEmitters;
@property(readonly, nonatomic) NSDictionary *snapshotClients; // @synthesize snapshotClients=_snapshotClients;
@property(readonly, nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(readonly, nonatomic) long long newestEntryUnixTime; // @synthesize newestEntryUnixTime=_newestEntryUnixTime;
@property(readonly, nonatomic) long long oldestEntryUnixTime; // @synthesize oldestEntryUnixTime=_oldestEntryUnixTime;
@property(readonly, nonatomic) int validLineCount; // @synthesize validLineCount=_validLineCount;
- (void)_handleEmitter:(id)arg1;	// IMP=0x001000000000264a
- (void)_handleStatisticsRecord:(id)arg1;	// IMP=0x0010000000002462
- (void)_handleSnapshotRecord:(id)arg1;	// IMP=0x001000000000235a
- (_Bool)feedJSONLine:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000021b9
- (id)initWithUnixTimeBoundFrom:(long long)arg1 to:(long long)arg2;	// IMP=0x00100000000020e7

@end

