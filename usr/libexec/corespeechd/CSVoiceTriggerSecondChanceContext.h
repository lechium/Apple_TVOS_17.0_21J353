//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSVoiceTriggerSecondChanceContext : NSObject
{
    unsigned long long _secondChanceHotTillMachTime;	// 8 = 0x8
}

@property(nonatomic) unsigned long long secondChanceHotTillMachTime; // @synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime;
- (_Bool)shouldRunAsSecondChance;	// IMP=0x00100000000285c2
- (id)initWithWindowStartTime:(unsigned long long)arg1;	// IMP=0x001000000002855c

@end

