//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSMutableIntegerMap;

__attribute__((visibility("hidden")))
@interface PBEBluetoothRemoteTable : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    BSMutableIntegerMap *_lock_entries;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000020d6
@property(readonly, nonatomic) BSMutableIntegerMap *entries; // @synthesize entries=_lock_entries;
- (void)_vacuum;	// IMP=0x0000000000001e7a
- (id)init;	// IMP=0x0000000000001b6c

@end

