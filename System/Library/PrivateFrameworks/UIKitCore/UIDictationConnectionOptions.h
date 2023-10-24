//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionOptions : NSObject
{
    _Bool _secureInput;	// 8 = 0x8
    _Bool _useAutomaticEndpointing;	// 9 = 0x9
    _Bool _acceptsDictationSearchResults;	// 10 = 0xa
    _Bool _autoPunctuation;	// 11 = 0xb
    unsigned long long _version;	// 16 = 0x10
    unsigned long long _activationType;	// 24 = 0x18
    NSString *_languageCode;	// 32 = 0x20
    NSString *_regionCode;	// 40 = 0x28
    NSString *_fieldIdentifier;	// 48 = 0x30
    NSString *_activationIdentifier;	// 56 = 0x38
    NSString *_layoutIdentifier;	// 64 = 0x40
    long long _keyboardType;	// 72 = 0x48
    long long _returnKeyType;	// 80 = 0x50
    NSString *_prefixText;	// 88 = 0x58
    NSString *_selectedText;	// 96 = 0x60
    NSString *_postfixText;	// 104 = 0x68
    id _turnIdentifier;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000adda4b
@property(nonatomic) _Bool autoPunctuation; // @synthesize autoPunctuation=_autoPunctuation;
@property(copy, nonatomic) id turnIdentifier; // @synthesize turnIdentifier=_turnIdentifier;
@property(copy, nonatomic) NSString *postfixText; // @synthesize postfixText=_postfixText;
@property(copy, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(copy, nonatomic) NSString *prefixText; // @synthesize prefixText=_prefixText;
@property(nonatomic) _Bool acceptsDictationSearchResults; // @synthesize acceptsDictationSearchResults=_acceptsDictationSearchResults;
@property(nonatomic) _Bool useAutomaticEndpointing; // @synthesize useAutomaticEndpointing=_useAutomaticEndpointing;
@property(nonatomic) _Bool secureInput; // @synthesize secureInput=_secureInput;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) NSString *layoutIdentifier; // @synthesize layoutIdentifier=_layoutIdentifier;
@property(copy, nonatomic) NSString *activationIdentifier; // @synthesize activationIdentifier=_activationIdentifier;
@property(copy, nonatomic) NSString *fieldIdentifier; // @synthesize fieldIdentifier=_fieldIdentifier;
@property(copy, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) unsigned long long activationType; // @synthesize activationType=_activationType;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;

@end

