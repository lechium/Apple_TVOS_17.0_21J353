//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTTextToSpeechSpeechFeatureInputText, FTTextToSpeechSpeechFeatureInputWave, FTTextToSpeechSpeechFeatureModelIdentifier, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableTextToSpeechSpeechFeatureRequest
{
}

@property(nonatomic) _Bool support_homograph;
@property(copy, nonatomic) NSArray *lexicon;
@property(copy, nonatomic) FTTextToSpeechSpeechFeatureInputWave *wave_data;
@property(copy, nonatomic) FTTextToSpeechSpeechFeatureInputText *text;
@property(copy, nonatomic) FTTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016ba3c
- (id)init;	// IMP=0x000000000016b9ae

@end

