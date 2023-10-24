//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSQLiteStatement, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ICSQLiteQueryResults : NSObject
{
    ICSQLiteStatement *_statement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000164763
- (int)clearBindings;	// IMP=0x000000000016474d
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000164737
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000164721
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000016470b
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000001646f5
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000001646df
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x00000000001646c9
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x00000000001646b3
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x000000000016469d
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x0000000000164687
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x0000000000164671
@property(readonly, copy, nonatomic) NSString *firstStringValue;
@property(readonly, copy, nonatomic) NSNumber *firstNumberValue;
@property(readonly, nonatomic) long long firstInt64Value;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001641c3
- (id)initWithStatement:(id)arg1;	// IMP=0x0000000000164158

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

