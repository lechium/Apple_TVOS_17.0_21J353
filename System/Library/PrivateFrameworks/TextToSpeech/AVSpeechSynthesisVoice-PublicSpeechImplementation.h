//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFAudio/AVSpeechSynthesisVoice.h>

@class NSString;

@interface AVSpeechSynthesisVoice (PublicSpeechImplementation)
+ (id)voiceWithLanguage:(id)arg1;	// IMP=0x0020000000025239
+ (void)test_setInternalSpeechVoices:(id)arg1;	// IMP=0x0020000000024f6b
+ (void)test_setSpeechVoices:(id)arg1;	// IMP=0x0020000000024c9d
+ (id)test_speechVoices;	// IMP=0x0020000000024c8c
+ (id)currentLanguageCode;	// IMP=0x0020000000024c73
+ (id)_speechVoicesIncludingSiri:(_Bool)arg1;	// IMP=0x00200000000240bc
+ (id)speechVoices;	// IMP=0x00200000000240a8
+ (id)speechVoicesIncludingSuperCompact;	// IMP=0x0020000000023ff6
+ (id)_speechVoicesIncludingSiriAndSuperCompact;	// IMP=0x0020000000023f46
+ (id)_speechVoicesIncludingSiri;	// IMP=0x0020000000023f2f
+ (id)_voiceWithIdentifier:(id)arg1 includingSiri:(_Bool)arg2;	// IMP=0x0020000000022af1
+ (id)_remapOldIdentifierIfNecessary:(id)arg1;	// IMP=0x0020000000022ad8
+ (id)voiceWithIdentifier:(id)arg1;	// IMP=0x0020000000022a6d
+ (id)_voiceFromInternalVoiceListWithIdentifier:(id)arg1;	// IMP=0x0020000000022a56
- (unsigned long long)voiceTraits;	// IMP=0x001000000001d6b7
@property(retain, nonatomic) NSString *language;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000264b6
@property(retain, nonatomic) NSString *identifier;
- (_Bool)isInstalled;	// IMP=0x001000000002644d
- (void)setIsInstalled:(_Bool)arg1;	// IMP=0x0010000000026400
- (_Bool)isFallbackDefault;	// IMP=0x00100000000263be
- (void)setIsFallbackDefault:(_Bool)arg1;	// IMP=0x0010000000026371
- (_Bool)isDefault;	// IMP=0x001000000002632f
- (void)setIsDefault:(_Bool)arg1;	// IMP=0x00100000000262e2
@property(nonatomic) _Bool isNoveltyVoice;
- (_Bool)canBeDownloaded;	// IMP=0x0010000000026211
- (void)setCanBeDownloaded:(_Bool)arg1;	// IMP=0x00100000000261c4
- (id)nonCombinedVoiceId;	// IMP=0x00100000000261b3
- (void)setNonCombinedVoiceId:(id)arg1;	// IMP=0x001000000002619d
- (long long)assetSize;	// IMP=0x001000000002615b
- (void)setAssetSize:(long long)arg1;	// IMP=0x001000000002610e
- (_Bool)isCombinedVoice;	// IMP=0x00100000000260cc
- (void)setIsCombinedVoice:(_Bool)arg1;	// IMP=0x001000000002607f
@property(readonly, nonatomic) NSString *nonLocalizedName;
- (long long)gender;	// IMP=0x0010000000025e49
- (void)setGender:(long long)arg1;	// IMP=0x0010000000025dfc
@property(readonly, nonatomic) NSString *nameWithoutQuality;
@property(readonly, nonatomic) NSString *nonLocalizedNameWithoutQuality;
- (void)setNonLocalizedNameWithoutQuality:(id)arg1;	// IMP=0x0010000000025c12
- (_Bool)isSystemVoice;	// IMP=0x0010000000025bbd
- (id)backupName;	// IMP=0x0010000000025bac
- (void)setBackupName:(id)arg1;	// IMP=0x0010000000025b96
@property(nonatomic) long long quality;
- (id)description;	// IMP=0x00100000000258b7
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000025551
@property(nonatomic) _Bool supportsSSML;
- (_Bool)isSynthesisProviderVoice;	// IMP=0x001000000002550c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000025286
- (id)_premiumLocalizedNameFormat;	// IMP=0x0010000000023e35
- (id)_enhancedLocalizedNameFormat;	// IMP=0x0010000000023d3b
@property(retain, nonatomic) NSString *name;
- (id)siriDisplayName;	// IMP=0x0010000000023bdc
- (id)initWithLanguage:(id)arg1;	// IMP=0x0010000000022df5
- (id)synthesisProviderVoice;	// IMP=0x0010000000022de4
- (void)setSynthesisProviderVoice:(id)arg1;	// IMP=0x0010000000022dce
- (id)audioFileSettings;	// IMP=0x00100000000229f3
@end

