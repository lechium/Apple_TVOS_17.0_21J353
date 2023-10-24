//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SQLiteConnection;

@interface SQLiteStatement : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    SQLiteStatement *_strongSelf;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000093d3e
@property(readonly, nonatomic) struct sqlite3_stmt *sqlite3_stmt; // @synthesize sqlite3_stmt=_statement;
@property(readonly, nonatomic) SQLiteConnection *connection; // @synthesize connection=_connection;
- (int)clearBindings;	// IMP=0x0010000000093d10
- (void)bindURL:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093cbe
- (void)bindUUID:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093c6c
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093bfa
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093af1
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093a04
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x00100000000939c7
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x001000000009398a
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x001000000009394d
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x001000000009390c
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x00100000000938cf
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093874
- (void)bindDate:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093836
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093785
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x00100000000936d8
- (void)bindArray:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000009367d
- (int)step;	// IMP=0x001000000009363c
@property(readonly, copy, nonatomic) NSString *SQL;
- (int)reset;	// IMP=0x00100000000935b8
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
- (int)finalizeStatement;	// IMP=0x001000000009353c
@property(readonly, copy, nonatomic) NSDictionary *columnIndexByName;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 onConnection:(id)arg2;	// IMP=0x0010000000093370

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

