//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface FTMutablePartialSpeechRecognitionResponse
{
}

@property(copy, nonatomic) NSString *request_locale;
@property(copy, nonatomic) NSString *language;
@property(nonatomic) int confidence;
@property(nonatomic) int audio_duration_ms;
@property(nonatomic) _Bool is_stable_result;
@property(copy, nonatomic) NSString *recognition_text;
@property(copy, nonatomic) NSString *return_str;
@property(nonatomic) int return_code;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000149918
- (id)init;	// IMP=0x000000000014988a

@end
