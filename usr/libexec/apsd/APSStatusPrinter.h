//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface APSStatusPrinter : NSObject
{
    NSMutableString *_s;	// 8 = 0x8
    unsigned long long _indent;	// 16 = 0x10
}

+ (id)statusPrinter;	// IMP=0x0040000000096c94
- (void).cxx_destruct;	// IMP=0x00200000000972b2
- (id)description;	// IMP=0x001000000009729c
- (void)appendDescription:(id)arg1 successRateWithSuccessCount:(unsigned long long)arg2 failureCount:(unsigned long long)arg3;	// IMP=0x00100000000970bc
- (void)appendDescription:(id)arg1 unsignedIntegerValue:(unsigned long long)arg2;	// IMP=0x00100000000970aa
- (void)appendDescription:(id)arg1 integerValue:(long long)arg2;	// IMP=0x0010000000097098
- (void)appendDescription:(id)arg1 unsignedLongLongValue:(unsigned long long)arg2;	// IMP=0x0010000000097031
- (void)appendDescription:(id)arg1 longLongValue:(long long)arg2;	// IMP=0x0010000000096fca
- (void)appendDescription:(id)arg1 intValue:(int)arg2;	// IMP=0x0010000000096fb5
- (void)appendDescription:(id)arg1 unsignedShortValue:(unsigned short)arg2;	// IMP=0x0010000000096fa1
- (void)appendDescription:(id)arg1 timeIntervalValue:(double)arg2;	// IMP=0x0010000000096f02
- (void)appendDescription:(id)arg1 dateValue:(id)arg2;	// IMP=0x0010000000096e46
- (void)appendDescription:(id)arg1 enabledValue:(_Bool)arg2;	// IMP=0x0010000000096dcd
- (void)appendDescription:(id)arg1 boolValue:(_Bool)arg2;	// IMP=0x0010000000096d54
- (void)appendDescription:(id)arg1 stringValue:(id)arg2;	// IMP=0x0010000000096cc1
- (void)popIndent;	// IMP=0x0010000000096cb7
- (void)pushIndent;	// IMP=0x0010000000096cad
- (void)appendLine:(id)arg1;	// IMP=0x0010000000096c44
- (id)lineWithDescription:(id)arg1;	// IMP=0x0010000000096b62
- (id)init;	// IMP=0x0010000000096b0c

@end
