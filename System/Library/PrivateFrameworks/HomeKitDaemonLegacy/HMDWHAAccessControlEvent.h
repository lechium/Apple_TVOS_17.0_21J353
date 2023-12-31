//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

__attribute__((visibility("hidden")))
@interface HMDWHAAccessControlEvent : HMMLogEvent
{
    _Bool _isP2PEnabled;	// 8 = 0x8
    _Bool _isPasswordSet;	// 9 = 0x9
    int _privilegeLevel;	// 12 = 0xc
}

+ (int)awdUserPrivilegeFromHMUserPrivilege:(long long)arg1;	// IMP=0x00600000009463a7
+ (id)eventWithP2PEnabled:(_Bool)arg1 privilegeLevel:(long long)arg2 passwordSet:(_Bool)arg3;	// IMP=0x0060000000946322
@property(nonatomic) _Bool isPasswordSet; // @synthesize isPasswordSet=_isPasswordSet;
@property(nonatomic) int privilegeLevel; // @synthesize privilegeLevel=_privilegeLevel;
@property(nonatomic) _Bool isP2PEnabled; // @synthesize isP2PEnabled=_isP2PEnabled;

@end

