//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNHandleStringClassification, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CNContactClassifiedHandleStringInterpreter : NSObject
{
    _Bool _hasBeenInterpreted;	// 8 = 0x8
    CNHandleStringClassification *_classification;	// 16 = 0x10
    NSMutableArray *_emailAddressesImpl;	// 24 = 0x18
    NSMutableArray *_phoneNumbersImpl;	// 32 = 0x20
    NSMutableArray *_unconvertableHandles;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000ba073
@property(nonatomic) _Bool hasBeenInterpreted; // @synthesize hasBeenInterpreted=_hasBeenInterpreted;
@property(readonly, nonatomic) NSMutableArray *unconvertableHandles; // @synthesize unconvertableHandles=_unconvertableHandles;
@property(readonly, nonatomic) NSMutableArray *phoneNumbersImpl; // @synthesize phoneNumbersImpl=_phoneNumbersImpl;
@property(readonly, nonatomic) NSMutableArray *emailAddressesImpl; // @synthesize emailAddressesImpl=_emailAddressesImpl;
@property(readonly, nonatomic) CNHandleStringClassification *classification; // @synthesize classification=_classification;
@property(readonly) NSArray *phoneNumbers;
@property(readonly) NSArray *emailAddresses;
- (void)interpretUnknownsAsEmailAddresses;	// IMP=0x00000000000b9ce4
- (void)interpretPhoneNumbers;	// IMP=0x00000000000b9a4f
- (void)interpretEmailAddresses;	// IMP=0x00000000000b98b5
- (void)interpretValues;	// IMP=0x00000000000b9868
- (id)description;	// IMP=0x00000000000b97e2
- (id)initWithHandleStringClassification:(id)arg1;	// IMP=0x00000000000b9713
- (id)init;	// IMP=0x00000000000b96d6

@end

