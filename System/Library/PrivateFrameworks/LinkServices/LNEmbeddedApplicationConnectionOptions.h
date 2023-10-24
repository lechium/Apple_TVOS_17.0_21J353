//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LNConnectionOptions.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface LNEmbeddedApplicationConnectionOptions : LNConnectionOptions
{
    _Bool _suspended;	// 8 = 0x8
    _Bool _sceneless;	// 9 = 0x9
    _Bool _allowsForegroundAppLaunchWhileInCarPlay;	// 10 = 0xa
    _Bool _useSpotlightLaunchOrigin;	// 11 = 0xb
    long long _openApplicationPriority;	// 16 = 0x10
}

@property(nonatomic) _Bool useSpotlightLaunchOrigin; // @synthesize useSpotlightLaunchOrigin=_useSpotlightLaunchOrigin;
@property(nonatomic) _Bool allowsForegroundAppLaunchWhileInCarPlay; // @synthesize allowsForegroundAppLaunchWhileInCarPlay=_allowsForegroundAppLaunchWhileInCarPlay;
@property(nonatomic) long long openApplicationPriority; // @synthesize openApplicationPriority=_openApplicationPriority;
@property(nonatomic) _Bool sceneless; // @synthesize sceneless=_sceneless;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009ad7b
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isForeground;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009aa62
- (id)init;	// IMP=0x000000000009a9e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

