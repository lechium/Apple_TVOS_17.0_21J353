//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPersistentHistoryToken.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryToken : NSPersistentHistoryToken
{
    NSDictionary *_storeTokens;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000019fcef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019fdea
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019fcf7
- (unsigned long long)hash;	// IMP=0x000000000019fbcd
- (long long)compareToken:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019f6e9
- (long long)compare:(id)arg1;	// IMP=0x000000000019f65a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019f5e5
- (id)storeTokens;	// IMP=0x000000000019f5d4
- (id)description;	// IMP=0x000000000019f5a4
- (void)dealloc;	// IMP=0x000000000019f556
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000019f4dd
- (id)initWithTransactionNumber:(id)arg1 andStoreID:(id)arg2;	// IMP=0x000000000019f44e

@end

