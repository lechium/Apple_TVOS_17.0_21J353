//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTShortcutFuzzyMatchRequest_StringTokenPair, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableShortcutFuzzyMatchRequest
{
}

@property(copy, nonatomic) NSString *context;
@property(copy, nonatomic) NSString *device_type;
@property(copy, nonatomic) NSString *locale;
@property(copy, nonatomic) NSString *interaction_id;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *request_id;
@property(copy, nonatomic) NSArray *shortcuts;
@property(copy, nonatomic) FTShortcutFuzzyMatchRequest_StringTokenPair *utterance;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001703d1
- (id)init;	// IMP=0x0000000000170343

@end

