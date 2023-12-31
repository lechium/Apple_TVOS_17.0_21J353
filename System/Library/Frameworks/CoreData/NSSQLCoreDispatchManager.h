//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLCoreDispatchManager : NSObject
{
    NSSQLCore *_sqlCore;	// 8 = 0x8
    NSMutableArray *_connectionManagers;	// 16 = 0x10
}

- (void)scheduleBarrierBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000027e792
- (void)setExclusiveLockingMode:(_Bool)arg1;	// IMP=0x000000000027e62b
- (void)dealloc;	// IMP=0x000000000027e4b2
- (id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2;	// IMP=0x000000000027e3a9

@end

