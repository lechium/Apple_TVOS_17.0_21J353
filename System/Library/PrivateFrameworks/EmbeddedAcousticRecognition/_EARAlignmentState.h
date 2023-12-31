//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _EARAlignmentState : NSObject
{
    long long _numberOfInsertions;	// 8 = 0x8
    long long _numberOfDeletions;	// 16 = 0x10
    long long _numberOfSubstitutions;	// 24 = 0x18
    long long _totalCost;	// 32 = 0x20
}

@property(nonatomic) long long totalCost; // @synthesize totalCost=_totalCost;
@property(nonatomic) long long numberOfSubstitutions; // @synthesize numberOfSubstitutions=_numberOfSubstitutions;
@property(nonatomic) long long numberOfDeletions; // @synthesize numberOfDeletions=_numberOfDeletions;
@property(nonatomic) long long numberOfInsertions; // @synthesize numberOfInsertions=_numberOfInsertions;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000055554e
- (void)incrementCost;	// IMP=0x0000000000555544
- (void)incrementSubstitutions;	// IMP=0x000000000055553a
- (void)incrementDeletions;	// IMP=0x0000000000555530
- (void)incrementInsertions;	// IMP=0x0000000000555526

@end

