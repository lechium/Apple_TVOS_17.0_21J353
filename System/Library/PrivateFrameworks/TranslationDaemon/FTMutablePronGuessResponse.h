//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTVocToken, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutablePronGuessResponse
{
}

@property(copy, nonatomic) NSArray *human_readable_prons;
@property(copy, nonatomic) NSArray *tts_pronunciations;
@property(copy, nonatomic) FTVocToken *voc_token;
@property(copy, nonatomic) NSString *apg_id;
@property(copy, nonatomic) NSString *error_str;
@property(nonatomic) int error_code;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014fd3d
- (id)init;	// IMP=0x000000000014fcaf

@end

