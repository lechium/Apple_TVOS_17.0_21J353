//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface GKInsecureDatabaseMigrator : NSObject
{
    MISSING_TYPE *insecureDatabaseURL;	// 0 = 0x0
    MISSING_TYPE *secureDatabaseURL;	// 0 = 0x0
    MISSING_TYPE *fileManager;	// 0 = 0x0
    MISSING_TYPE *persistentStoreCoordinator;	// 0 = 0x0
    MISSING_TYPE *options;	// 0 = 0x0
    MISSING_TYPE *bundleID;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000001e08ab
- (id)init;	// IMP=0x00100000001e0875
- (void)migrate;	// IMP=0x00100000001e0812
- (id)initWithInsecureDatabaseURL:(id)arg1 secureDatabaseURL:(id)arg2 persistentStoreCoordinator:(id)arg3 options:(id)arg4 fileManager:(id)arg5 bundleID:(id)arg6;	// IMP=0x00100000001dfbeb

@end

