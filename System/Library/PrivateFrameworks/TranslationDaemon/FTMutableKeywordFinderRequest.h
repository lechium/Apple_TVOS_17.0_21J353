//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTRecognitionResult, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableKeywordFinderRequest
{
}

@property(nonatomic) _Bool enable_sanitization;
@property(copy, nonatomic) FTRecognitionResult *recognition_result;
@property(copy, nonatomic) NSArray *keywords;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015d9de
- (id)init;	// IMP=0x000000000015d950

@end

