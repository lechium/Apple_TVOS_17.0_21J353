//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, _TtC9appstored6LogKey;

@interface _TtC9appstored16CrashCoordinator : NSObject
{
    MISSING_TYPE *appCrashStream;	// 8 = 0x8
}

+ (id)shared;	// IMP=0x002000000001c540
- (void).cxx_destruct;	// IMP=0x004000000001d1e0
- (id)init;	// IMP=0x001000000001d1a0
- (void)getBiomeCrashesWithLogKey:(_TtC9appstored6LogKey *)arg1 startDate:(NSDate *)arg2 completionHandler:(void (^)(NSArray *))arg3;	// IMP=0x001000000001cd60

@end
