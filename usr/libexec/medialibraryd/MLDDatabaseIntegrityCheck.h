//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MLDDatabaseIntegrityCheck : NSObject
{
    NSString *_databasePath;	// 8 = 0x8
    NSArray *_faults;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000012750
@property(copy, nonatomic) NSArray *faults; // @synthesize faults=_faults;
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;

@end

