//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCompositeLanguageSetting
{
    NSString *_inputLanguageCode;	// 24 = 0x18
    NSString *_outputVoiceGenderCode;	// 32 = 0x20
    NSString *_outputVoiceLanguageCode;	// 40 = 0x28
    NSString *_voiceName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002a3dbe
@property(readonly, copy) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(readonly, copy) NSString *outputVoiceLanguageCode; // @synthesize outputVoiceLanguageCode=_outputVoiceLanguageCode;
@property(readonly, copy) NSString *outputVoiceGenderCode; // @synthesize outputVoiceGenderCode=_outputVoiceGenderCode;
@property(readonly, copy) NSString *inputLanguageCode; // @synthesize inputLanguageCode=_inputLanguageCode;
- (id)attributeDescriptions;	// IMP=0x00000000002a3b31
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a3a76
- (_Bool)isEqualValue:(id)arg1;	// IMP=0x00000000002a37b1
- (id)initWithInputLanguage:(id)arg1 outputVoiceLanguageCode:(id)arg2 outputVoiceGenderCode:(id)arg3 voiceName:(id)arg4 readVersion:(id)arg5 writeVersion:(id)arg6;	// IMP=0x00000000002a36b1

@end

