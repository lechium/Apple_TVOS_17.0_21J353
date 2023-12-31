//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIDictationMultilingualString : NSObject
{
    NSString *_text;	// 8 = 0x8
    NSString *_dominantLanguage;	// 16 = 0x10
    id _correctionIdentifier;	// 24 = 0x18
    NSString *_interactionIdentifier;	// 32 = 0x20
    NSArray *_phrases;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000b0f3b7
@property(copy, nonatomic) NSArray *phrases; // @synthesize phrases=_phrases;
@property(retain, nonatomic) NSString *interactionIdentifier; // @synthesize interactionIdentifier=_interactionIdentifier;
@property(retain, nonatomic) id correctionIdentifier; // @synthesize correctionIdentifier=_correctionIdentifier;
@property(copy, nonatomic) NSString *dominantLanguage; // @synthesize dominantLanguage=_dominantLanguage;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)dictionaryValue;	// IMP=0x0000000000b0f253
- (id)description;	// IMP=0x0000000000b0f203
- (unsigned long long)hash;	// IMP=0x0000000000b0f177
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b0f07a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b0efc7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b0ef50
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b0ee59
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000b0ed8c
- (id)initWithText:(id)arg1 forLanguage:(id)arg2;	// IMP=0x0000000000b0ecd3

@end

