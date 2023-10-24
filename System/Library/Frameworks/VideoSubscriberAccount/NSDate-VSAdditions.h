//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (VSAdditions)
+ (id)vs_currentDate;	// IMP=0x0030000000021083
+ (id)vs_stopRecordingDates;	// IMP=0x0030000000020e9e
+ (void)vs_startRecordingDates;	// IMP=0x0030000000020e40
+ (id)vs_recordedDates;	// IMP=0x0030000000020deb
+ (id)vs_dateAccessQueue;	// IMP=0x0030000000020d77
- (_Bool)vs_isBefore:(id)arg1;	// IMP=0x0010000000021499
- (_Bool)vs_isAfter:(id)arg1;	// IMP=0x001000000002147f
- (id)vs_dateIncrementedByMinutes:(unsigned long long)arg1;	// IMP=0x00100000000213a6
- (id)vs_dateIncrementedByDays:(long long)arg1;	// IMP=0x00100000000212cd
- (id)vs_dateRoundedToDay;	// IMP=0x00100000000211e2
@end
