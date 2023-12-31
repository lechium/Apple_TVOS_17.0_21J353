//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFAudio/AVSpeechSynthesisProviderVoice.h>

@class NSArray, NSDictionary, NSString;

@interface AVSpeechSynthesisProviderVoice (AXSpeechPublicInterface_Private)
+ (void)updateSpeechVoices;	// IMP=0x0020000000045ec5
+ (void)updateSpeechVoicesForClient:(id)arg1;	// IMP=0x0020000000045dca
- (id)rawTTSIdentifier;	// IMP=0x0010000000047d6d
@property(retain, nonatomic) NSDictionary *extraAttributes;
@property(retain, nonatomic) NSArray *supportedLanguages;
@property(retain, nonatomic) NSArray *primaryLanguages;
@property(nonatomic) _Bool hasPerVoiceSettings;
@property(nonatomic) _Bool isPersonalVoice;
@property(nonatomic) _Bool isFirstParty;
@property(retain, nonatomic) NSString *synthesizerBundleIdentifier;
@property(retain, nonatomic) NSString *manufacturerName;
@property(nonatomic) struct AudioComponentDescription auComponentDesc;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000047511
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000046dbc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000468cb
- (id)fullBundleIdentifier;	// IMP=0x0010000000046838
- (id)uniqueAudioDescSpeechSynthTuple;	// IMP=0x00100000000467f0
- (id)uniqueAudioDescTriple;	// IMP=0x00100000000467a8
- (id)supportedCharacterSet;	// IMP=0x00100000000465a1
- (unsigned long long)hash;	// IMP=0x001000000004648c
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004625d
- (id)description;	// IMP=0x0010000000046088
@property(readonly, nonatomic) NSString *groupName;
- (id)initWithName:(id)arg1 identifier:(id)arg2 primaryLanguages:(id)arg3 supportedLanguages:(id)arg4;	// IMP=0x0010000000045cbf
@end

