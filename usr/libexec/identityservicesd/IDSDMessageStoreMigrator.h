//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSDMessageStoreMigrator : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0040000000297ecd
- (void)_checkAndUpdateDBIfRequiredForClass:(unsigned int)arg1;	// IMP=0x0040000000297fdd
- (void)migrateClassD;	// IMP=0x0010000000297fc6
- (void)migrateClassC;	// IMP=0x0010000000297fb2
- (void)migrateClassA;	// IMP=0x0010000000297f9b
- (id)init;	// IMP=0x0010000000297f22

@end

