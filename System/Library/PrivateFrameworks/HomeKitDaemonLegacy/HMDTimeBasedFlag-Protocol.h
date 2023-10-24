//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMMDateProvider, NSDate, NSDictionary;
@protocol HMDTimeBasedFlagContext;

@protocol HMDTimeBasedFlag
- (NSDictionary *)serializeToDictionary;
- (unsigned long long)bitsForDate:(NSDate *)arg1 bitCount:(long long)arg2 outValidBitCount:(long long *)arg3;
- (unsigned long long)currentBits;
- (void)setBitForDate:(NSDate *)arg1;
- (void)setCurrentBit;
- (id)initWithSerializedFlag:(NSDictionary *)arg1 context:(id <HMDTimeBasedFlagContext>)arg2 dateProvider:(HMMDateProvider *)arg3;
@end

