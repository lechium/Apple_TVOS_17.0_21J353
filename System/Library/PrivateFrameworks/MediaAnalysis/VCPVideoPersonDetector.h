//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPVideoPersonDetector
{
    NSMutableArray *_persons;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ee577
- (id)persons;	// IMP=0x00000000000ee562
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x00000000000ee4fb
- (int)detectPersons:(struct __CVBuffer *)arg1 persons:(id)arg2;	// IMP=0x00000000000edca0
- (id)init;	// IMP=0x00000000000edc15

@end

