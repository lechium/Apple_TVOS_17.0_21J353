//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKPostInstallService : NSObject
{
}

+ (id)sharedService;	// IMP=0x004000000002adb2
- (void)fetchUserInfoForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x004000000002b5ef
- (void)_performPostInstallWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002b10e
- (void)start;	// IMP=0x001000000002ae07

@end

