//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface FTMutableRecognitionToken
{
}

@property(copy, nonatomic) NSString *ipa_phone_seq;
@property(copy, nonatomic) NSString *phone_seq;
@property(nonatomic) _Bool add_space_after;
@property(nonatomic) int confidence;
@property(nonatomic) int silence_start_milli_seconds;
@property(nonatomic) int end_milli_seconds;
@property(nonatomic) int start_milli_seconds;
@property(copy, nonatomic) NSString *token_text;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001457a8
- (id)init;	// IMP=0x000000000014571a

@end

