//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, SECSFARule;

__attribute__((visibility("hidden")))
@interface SFAnalyticsMatchingRule : NSObject
{
    NSString *_eventName;	// 8 = 0x8
    SECSFARule *_rule;	// 16 = 0x10
    NSDate *_lastMatch;	// 24 = 0x18
    NSDictionary *_matchingDictionary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000047d45
@property(retain) NSDictionary *matchingDictionary; // @synthesize matchingDictionary=_matchingDictionary;
@property(retain) NSDate *lastMatch; // @synthesize lastMatch=_lastMatch;
@property(retain) SECSFARule *rule; // @synthesize rule=_rule;
@property(retain) NSString *eventName; // @synthesize eventName=_eventName;
- (unsigned int)doAction:(id)arg1 logger:(id)arg2;	// IMP=0x0000000000047693
- (_Bool)shouldRatelimit:(id)arg1;	// IMP=0x00000000000474ec
- (_Bool)matchAttributes:(id)arg1 logger:(id)arg2;	// IMP=0x000000000004725d
- (id)lastMatchTimeKey;	// IMP=0x00000000000471d0
- (_Bool)isSubsetMatch:(id)arg1 target:(id)arg2;	// IMP=0x0000000000046f81
- (_Bool)valueMatch:(id)arg1 target:(id)arg2;	// IMP=0x0000000000046bbf
- (id)initWithSFARule:(id)arg1 logger:(id)arg2;	// IMP=0x0000000000046a85

@end
