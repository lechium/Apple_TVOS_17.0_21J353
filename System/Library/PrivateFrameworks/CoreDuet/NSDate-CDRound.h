//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (CDRound)
- (id)cd_dateWithCeilingForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;	// IMP=0x0020000000032cc4
- (id)cd_dateWithFloorForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;	// IMP=0x0020000000032c2e
- (id)cd_dateWithCeilingForAlignment:(double)arg1;	// IMP=0x0020000000032b98
- (id)cd_dateWithFloorForAlignment:(double)arg1;	// IMP=0x0020000000032b0c
- (int)slotFromMidnightWithTotalSlotsInDay:(int)arg1;	// IMP=0x00200000000961a9
- (id)floorDateWithTotalSlotsInDay:(int)arg1;	// IMP=0x0020000000096133
- (double)timeSinceMidnight:(id *)arg1;	// IMP=0x0020000000095ffd
- (id)dedup;	// IMP=0x00200000000face9
- (id)dk_dedup;	// IMP=0x00200000000faa5e
@end

