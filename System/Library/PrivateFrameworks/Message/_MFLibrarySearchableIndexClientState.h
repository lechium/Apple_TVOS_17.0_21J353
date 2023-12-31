//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _MFLibrarySearchableIndexClientState : NSObject
{
    NSNumber *_transactionValue;	// 8 = 0x8
    long long _transaction;	// 16 = 0x10
    NSDate *_transactionDate;	// 24 = 0x18
    NSString *_systemBuildVersion;	// 32 = 0x20
}

+ (id)clientStateFromData:(id)arg1;	// IMP=0x006000000006f2b0
+ (id)clientState;	// IMP=0x006000000006f29e
@property(copy, nonatomic) NSString *systemBuildVersion; // @synthesize systemBuildVersion=_systemBuildVersion;
@property(retain, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(nonatomic) long long transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) NSNumber *transactionValue;
- (id)archiveRepresentation;	// IMP=0x000000000006f5e7
- (void)dealloc;	// IMP=0x000000000006f596
- (id)init;	// IMP=0x000000000006f531
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000006f3fb
- (id)description;	// IMP=0x000000000006f33d

@end

