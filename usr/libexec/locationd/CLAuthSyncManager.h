//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@interface CLAuthSyncManager : CLIntersiloService
{
}

+ (_Bool)isSupported;	// IMP=0x004000000055e3cc
+ (id)getSilo;	// IMP=0x001000000055e370
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000055e357
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000055e2fa
- (id)init;	// IMP=0x004000000055e45d

@end
