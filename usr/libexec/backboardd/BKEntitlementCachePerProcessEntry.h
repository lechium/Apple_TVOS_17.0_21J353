//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSProcessDeathWatcher, NSMutableDictionary;

@interface BKEntitlementCachePerProcessEntry : NSObject
{
    NSMutableDictionary *_entitlementCache;	// 8 = 0x8
    BSProcessDeathWatcher *_deathWatcher;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000023ad0
@property(retain, nonatomic) BSProcessDeathWatcher *deathWatcher; // @synthesize deathWatcher=_deathWatcher;
@property(retain, nonatomic) NSMutableDictionary *entitlementCache; // @synthesize entitlementCache=_entitlementCache;

@end

