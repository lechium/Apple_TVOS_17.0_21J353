//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface TVSSHUDValueHistoryVisualization
{
    unsigned long long _numberOfValuesToKeep;	// 32 = 0x20
    NSMutableArray *_mutableValues;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000093ea0
@property(retain, nonatomic) NSMutableArray *mutableValues; // @synthesize mutableValues=_mutableValues;
@property(nonatomic) unsigned long long numberOfValuesToKeep; // @synthesize numberOfValuesToKeep=_numberOfValuesToKeep;
- (void)setValue:(id)arg1;	// IMP=0x0010000000093cf0
@property(readonly, nonatomic) NSArray *values;
- (id)init;	// IMP=0x0010000000093bf0

@end

