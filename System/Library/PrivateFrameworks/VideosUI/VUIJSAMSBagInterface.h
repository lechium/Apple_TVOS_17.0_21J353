//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIJSObject.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIJSAMSBagInterface : VUIJSObject
{
}

+ (id)convertNSErrorIntoDict:(id)arg1;	// IMP=0x00100000000acf43
+ (id)generateResponseDictionary:(id)arg1 withError:(id)arg2;	// IMP=0x00100000000ace3c
- (void)dictionaryForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000aca21
- (void)URLForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000ac5e6
- (void)stringForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000ac1cb
- (void)integerForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000abdb0
- (void)doubleForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000ab995
- (void)boolForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000ab57a
- (void)arrayForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000ab125
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00000000000ab038
- (id)URLForKey:(id)arg1;	// IMP=0x00000000000aaf19
- (id)stringForKey:(id)arg1;	// IMP=0x00000000000aae2c
- (id)integerForKey:(id)arg1;	// IMP=0x00000000000aad3f
- (id)doubleForKey:(id)arg1;	// IMP=0x00000000000aac52
- (id)boolForKey:(id)arg1;	// IMP=0x00000000000aab65
- (id)arrayForKey:(id)arg1;	// IMP=0x00000000000aaa78
@property(readonly, nonatomic) NSDictionary *VUIAMSBagValueTypes;

@end
