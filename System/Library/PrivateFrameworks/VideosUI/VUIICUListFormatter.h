//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSListFormatter.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIICUListFormatter : NSListFormatter
{
    NSString *_style;	// 8 = 0x8
}

+ (id)localizedStringByJoiningStrings:(id)arg1 style:(id)arg2;	// IMP=0x0060000000133524
+ (id)localizedStringByJoiningStrings:(id)arg1;	// IMP=0x0060000000133500
- (void).cxx_destruct;	// IMP=0x0000000000133636
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
- (id)_stringFromStringArray:(id)arg1;	// IMP=0x0000000000133458
- (id)initWithLocale:(id)arg1 style:(id)arg2;	// IMP=0x0000000000133327
- (id)initWithLocale:(id)arg1;	// IMP=0x0000000000133313

@end

