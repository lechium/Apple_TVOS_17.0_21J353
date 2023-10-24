//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteStatement;

@interface SQLiteQueryResults : NSObject
{
    SQLiteStatement *_statement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000006dea2
- (int)clearBindings;	// IMP=0x001000000006de8c
- (void)bindURL:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000006de76
- (void)bindUUID:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000006de60
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000006de4a
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000006de34
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000006de1e
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x001000000006de08
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x001000000006ddf2
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x001000000006dddc
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x001000000006ddc6
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x001000000006ddb0
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000006dd9a
- (void)bindDate:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000006dd84
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000006dd6e
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000006dd58
- (void)bindArray:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000006dd42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
