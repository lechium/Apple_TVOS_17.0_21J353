//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VSOptional;

__attribute__((visibility("hidden")))
@interface VSAccountAuthentication : NSObject
{
    _Bool _synchronizable;	// 8 = 0x8
    NSString *_username;	// 16 = 0x10
    VSOptional *_authenticationToken;	// 24 = 0x18
    NSString *_appBundleIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001cda2
@property(nonatomic, getter=isSynchronizable) _Bool synchronizable; // @synthesize synchronizable=_synchronizable;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) VSOptional *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)description;	// IMP=0x000000000001cb8e
- (id)init;	// IMP=0x000000000001cb34

@end

