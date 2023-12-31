//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface ADServiceStatistics : NSObject
{
    NSString *_serviceIdentifier;	// 8 = 0x8
    NSMutableDictionary *_statsDict;	// 16 = 0x10
    NSMutableDictionary *_commandTimes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000e0d8b
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void)markResponseForCommand:(id)arg1;	// IMP=0x00100000000e0a60
- (void)markIncomingCommand:(id)arg1;	// IMP=0x00100000000e094d
- (id)_commandTimes;	// IMP=0x00100000000e0912
- (void)_saveStats;	// IMP=0x00100000000e07be
- (id)_statsForCommand:(id)arg1;	// IMP=0x00100000000e06ea
- (id)_statsDict;	// IMP=0x00100000000e0539
- (id)_serviceStatsPath;	// IMP=0x00100000000e04a8
- (id)_statsDirectory;	// IMP=0x00100000000e0478
- (void)dealloc;	// IMP=0x00100000000e043a
- (id)initWithServiceIdentifier:(id)arg1;	// IMP=0x00100000000e035d

@end

