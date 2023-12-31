//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface SQLiteStatement : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    SQLiteStatement *_strongSelf;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000131aae
- (int)clearBindings;	// IMP=0x0010000000131a94
- (void)bindURL:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000131a42
- (void)bindUUID:(id)arg1 atPosition:(int)arg2;	// IMP=0x00100000001319f0
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000013197e
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000131875
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000131788
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x001000000013174b
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x001000000013170e
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x00100000001316d1
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x0010000000131690
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x0010000000131653
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;	// IMP=0x00100000001315f8
- (void)bindDate:(id)arg1 atPosition:(int)arg2;	// IMP=0x00100000001315ba
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000131509
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000013145c
- (void)bindArray:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000131401

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

