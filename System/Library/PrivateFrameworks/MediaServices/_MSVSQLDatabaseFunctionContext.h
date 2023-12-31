//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MSVSQLDatabaseFunctionContext : NSObject
{
    struct sqlite3_context *_context;	// 8 = 0x8
    int _argc;	// 16 = 0x10
    struct sqlite3_value **_argv;	// 24 = 0x18
}

- (id)returnError:(id)arg1 sqliteCode:(int)arg2;	// IMP=0x000000000003864c
- (id)returnError:(id)arg1;	// IMP=0x0000000000038635
- (id)returnErrorNoMemory;	// IMP=0x0000000000038619
- (id)returnErrorTooBig;	// IMP=0x00000000000385fd
- (id)returnFunctionContext:(id)arg1;	// IMP=0x0000000000038590
- (id)returnJSON:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000383d3
- (id)returnDate:(id)arg1;	// IMP=0x00000000000383a2
- (id)returnFloat:(float)arg1;	// IMP=0x000000000003838c
- (id)returnUInt64:(unsigned long long)arg1;	// IMP=0x000000000003837a
- (id)returnBool:(_Bool)arg1;	// IMP=0x000000000003835c
- (id)returnData:(id)arg1;	// IMP=0x00000000000382d9
- (id)returnString:(id)arg1;	// IMP=0x0000000000038256
- (id)returnDouble:(double)arg1;	// IMP=0x000000000003823a
- (id)returnInt64:(long long)arg1;	// IMP=0x000000000003821b
- (id)returnNull;	// IMP=0x00000000000381ff
- (id)memoizedObjectForArgumentIndex:(long long)arg1;	// IMP=0x00000000000381ef
- (void)memoizeObject:(id)arg1 forArgumentIndex:(long long)arg2;	// IMP=0x0000000000038114
- (id)functionContextOfClass:(Class)arg1 atArgumentIndex:(long long)arg2;	// IMP=0x00000000000380e0
- (id)objectValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000037fec
- (id)jsonDataAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000037f6d
- (id)jsonValueAtArgumentIndex:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000037f05
- (id)dateValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000037e27
- (float)floatValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000037e08
- (unsigned long long)uint64ValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000037dee
- (_Bool)boolValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000037dce
- (id)dataValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000037d7a
- (id)stringValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000037cee
- (double)doubleValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000037cd4
- (long long)int64ValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000037cba
- (_Bool)isNullValueAtArgumentIndex:(long long)arg1;	// IMP=0x0000000000037c99
@property(readonly, nonatomic) long long numberOfArguments;
- (struct sqlite3_value *)_valueAtIndex:(long long)arg1;	// IMP=0x0000000000037bd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

