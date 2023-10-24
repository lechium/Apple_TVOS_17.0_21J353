//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _CNContactHandleStringEquivalenceStrategy;

__attribute__((visibility("hidden")))
@interface CNContactHandleIndexableString : NSObject
{
    NSString *_indexKey;	// 8 = 0x8
    NSString *_stringValue;	// 16 = 0x10
    id <_CNContactHandleStringEquivalenceStrategy> _equivalenceStrategy;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000f6c1d
+ (id)equivalenceStrategyWithString:(id)arg1;	// IMP=0x00100000000f69d7
+ (id)phoneNumberIndexKey:(id)arg1;	// IMP=0x00100000000f681d
+ (id)emailIndexKey:(id)arg1;	// IMP=0x00100000000f6804
- (void).cxx_destruct;	// IMP=0x00000000000f6d09
@property(readonly, nonatomic) id <_CNContactHandleStringEquivalenceStrategy> equivalenceStrategy; // @synthesize equivalenceStrategy=_equivalenceStrategy;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, copy, nonatomic) NSString *indexKey; // @synthesize indexKey=_indexKey;
- (_Bool)isEquivalentToString:(id)arg1 strict:(_Bool *)arg2;	// IMP=0x00000000000f6cd5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f6cb2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f6c25
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f6c12
- (unsigned long long)hash;	// IMP=0x00000000000f6bb7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f6b23
- (id)description;	// IMP=0x00000000000f6a63
- (id)initWithFullString:(id)arg1 indexKey:(id)arg2 equivalenceStrategy:(id)arg3;	// IMP=0x00000000000f68e4
- (id)initWithString:(id)arg1;	// IMP=0x00000000000f6836

@end
