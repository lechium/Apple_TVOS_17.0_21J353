//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMMDateProvider, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMMDailyPartitionProvider : NSObject
{
    HMMDateProvider *_dateProvider;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00100000000063bf
- (void).cxx_destruct;	// IMP=0x00000000000063af
@property(readonly, nonatomic) HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
- (id)datePartitionWithOffsetFromNow:(long long)arg1;	// IMP=0x0000000000006346
@property(readonly, copy, nonatomic) NSDate *currentDatePartition;
- (id)initWithDateProvider:(id)arg1;	// IMP=0x000000000000628b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

