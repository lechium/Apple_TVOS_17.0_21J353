//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class MISSING_TYPE, MLDDatabaseIntegrityCheck, NSError, NSString;

@interface MLDDatabaseIntegrityCheckOperation : NSOperation
{
    _Bool _repairFaults;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    MISSING_TYPE *_check;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000013149
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) MLDDatabaseIntegrityCheck *check; // @synthesize check=_check;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (id)_createSQLiteErrorWithCode:(int)arg1 description:(id)arg2;	// IMP=0x001000000001302f
- (void)main;	// IMP=0x0010000000012803
- (id)initWithDatabasePath:(id)arg1 repairFaults:(_Bool)arg2;	// IMP=0x0010000000012778

@end

