//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (NSValueCMTimeExtensions)
+ (id)valueWithCMTimeMapping:(CDStruct_82206317)arg1;	// IMP=0x0020000000010213
+ (id)valueWithCMTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x0020000000010190
+ (id)valueWithCMTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0020000000010087
+ (id)valueWithCMVideoDimensions:(CDStruct_79c71658)arg1;	// IMP=0x002000000010dc00
- (CDStruct_82206317)CMTimeMappingValue;	// IMP=0x001000000001022c
- (CDStruct_e83c9415)CMTimeRangeValue;	// IMP=0x00100000000101a9
- (CDStruct_1b6d18a9)CMTimeValue;	// IMP=0x00100000000100a0
@property(readonly) CDStruct_79c71658 CMVideoDimensionsValue;
@end
