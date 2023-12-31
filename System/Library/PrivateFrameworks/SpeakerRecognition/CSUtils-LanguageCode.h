//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSUtils.h>

@interface CSUtils (LanguageCode)
+ (id)getSiriLanguageWithEndpointId:(id)arg1 fallbackLanguage:(id)arg2;	// IMP=0x006000000001dd9e
+ (id)getSiriLanguageWithFallback:(id)arg1;	// IMP=0x006000000001dc56
+ (id)recordContextString:(id)arg1;	// IMP=0x006000000001f5e4
+ (_Bool)isValidRecordContext:(id)arg1;	// IMP=0x006000000001f5dc
+ (_Bool)isRecordContextJarvisButtonPress:(id)arg1;	// IMP=0x006000000001f57c
+ (_Bool)isRecordContextJarvisVoiceTrigger:(id)arg1;	// IMP=0x006000000001f51c
+ (_Bool)isRecordContextRaiseToSpeak:(id)arg1;	// IMP=0x006000000001f4bc
+ (_Bool)isRecordContextHearstDoubleTap:(id)arg1;	// IMP=0x006000000001f45c
+ (_Bool)isRecordContextHearstVoiceTrigger:(id)arg1;	// IMP=0x006000000001f3fc
+ (_Bool)isRecordContextSpeakerIdTrainingTrigger:(id)arg1;	// IMP=0x006000000001f39c
+ (_Bool)isRecordContextAutoPrompt:(id)arg1;	// IMP=0x006000000001f394
+ (_Bool)isRecordContextHomeButtonPress:(id)arg1;	// IMP=0x006000000001f334
+ (_Bool)isRecordContextRemoraVoiceTrigger:(id)arg1;	// IMP=0x006000000001f2d4
+ (_Bool)isRecordContextDarwinVoiceTrigger:(id)arg1;	// IMP=0x006000000001f274
+ (_Bool)isRecordContextBuiltInVoiceTrigger:(id)arg1;	// IMP=0x006000000001f214
+ (_Bool)isRecordContextVoiceTrigger:(id)arg1;	// IMP=0x006000000001f156
+ (_Bool)isRemoteDarwinWithDeviceId:(id)arg1;	// IMP=0x0060000000066333
+ (_Bool)hasRemoteBuiltInMic;	// IMP=0x006000000006632b
@end

