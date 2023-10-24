//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale;

__attribute__((visibility("hidden")))
@interface _LTTextLanguageDetectorScorerItem : NSObject
{
    NSLocale *_locale;	// 8 = 0x8
    double _confidence;	// 16 = 0x10
    long long _wordCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000062ad4
@property(readonly, nonatomic) long long wordCount; // @synthesize wordCount=_wordCount;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (double)score;	// IMP=0x0000000000062aa4
- (id)initWithLocale:(id)arg1 confidence:(double)arg2 wordCount:(long long)arg3;	// IMP=0x00000000000628ec

@end

