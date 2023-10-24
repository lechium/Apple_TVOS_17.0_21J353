//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class CKSQLiteCompiledStatement, NSMutableDictionary;

@interface CKSQLiteCompiledStatementDecoder : NSCoder
{
    CKSQLiteCompiledStatement *_statement;	// 8 = 0x8
    NSMutableDictionary *_propertyValues;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006bd99
- (id)fillProperties;	// IMP=0x000000000006bcf0
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x000000000006bcd0
- (id)decodeObjectForKey:(id)arg1;	// IMP=0x000000000006bcb3
- (long long)decodeInt64ForKey:(id)arg1;	// IMP=0x000000000006bc64
- (int)decodeInt32ForKey:(id)arg1;	// IMP=0x000000000006bc15
- (int)decodeIntForKey:(id)arg1;	// IMP=0x000000000006bbc6
- (float)decodeFloatForKey:(id)arg1;	// IMP=0x000000000006bb6b
- (double)decodeDoubleForKey:(id)arg1;	// IMP=0x000000000006bb10
- (_Bool)decodeBoolForKey:(id)arg1;	// IMP=0x000000000006bac1
- (_Bool)containsValueForKey:(id)arg1;	// IMP=0x000000000006ba83
- (_Bool)ck_isDecodingForCKSQLiteDatabase;	// IMP=0x000000000006ba7b
- (id)initWithStatement:(id)arg1;	// IMP=0x000000000006b9ec

@end
