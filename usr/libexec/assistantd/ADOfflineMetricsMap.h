//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOrderedSet, NSString;

@interface ADOfflineMetricsMap : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSOrderedSet *_offlineIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001fda65
- (id)_offlineIdentifiers;	// IMP=0x00100000001fd226
- (void)deleteAllMetrics;	// IMP=0x00100000001fd0db
- (void)deleteMetricsWithOfflineIdentifier:(id)arg1;	// IMP=0x00100000001fce4e
- (void)insertMetrics:(id)arg1 withOfflineIdentifier:(id)arg2;	// IMP=0x00100000001fc509
- (void)fetchNextMetricsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001fbf18
- (id)initWithPath:(id)arg1;	// IMP=0x00100000001fbe9d

@end

