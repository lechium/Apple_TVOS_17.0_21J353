//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TLKStackView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TLKRoundedCornerLabels : TLKStackView
{
    NSMutableArray *_roundedLabels;	// 8 = 0x8
    unsigned long long _prominence;	// 16 = 0x10
    unsigned long long _sizeConfiguration;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000417c4
@property(nonatomic) unsigned long long sizeConfiguration; // @synthesize sizeConfiguration=_sizeConfiguration;
@property(nonatomic) unsigned long long prominence; // @synthesize prominence=_prominence;
@property(retain, nonatomic) NSMutableArray *roundedLabels; // @synthesize roundedLabels=_roundedLabels;
- (void)updateRoundedText:(id)arg1;	// IMP=0x000000000004133b
- (id)init;	// IMP=0x0000000000040fc1

@end

