//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RMMigrationEngine : NSObject
{
}

- (id)_fixFilePermissionsAndReadDataForURL:(id)arg1;	// IMP=0x0040000000062288
- (_Bool)_writeProcessedActions:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000062097
- (id)_readMigrationStateReturningError:(id *)arg1;	// IMP=0x0010000000061d95
- (id)_readProcessedActionsReturningError:(id *)arg1;	// IMP=0x0010000000061c05
- (id)_actions;	// IMP=0x0010000000061b3f
- (_Bool)migrateOnStartupReturningError:(id *)arg1;	// IMP=0x001000000006121a

@end

