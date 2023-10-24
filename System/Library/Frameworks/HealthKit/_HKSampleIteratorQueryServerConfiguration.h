//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKSampleIteratorQueryCursor;

__attribute__((visibility("hidden")))
@interface _HKSampleIteratorQueryServerConfiguration : HKQueryServerConfiguration
{
    HKSampleIteratorQueryCursor *_queryCursor;	// 8 = 0x8
    unsigned long long _limit;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001ffc83
- (void).cxx_destruct;	// IMP=0x00000000001ffe31
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) HKSampleIteratorQueryCursor *queryCursor; // @synthesize queryCursor=_queryCursor;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ffd4d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ffc8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ffc0d

@end
