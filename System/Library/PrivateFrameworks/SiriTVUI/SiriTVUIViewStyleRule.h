//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, SiriTVUIViewStyle;

__attribute__((visibility("hidden")))
@interface SiriTVUIViewStyleRule : NSObject
{
    NSIndexSet *_styleSelector;	// 8 = 0x8
    SiriTVUIViewStyle *_style;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000d654
@property(copy, nonatomic) SiriTVUIViewStyle *style; // @synthesize style=_style;
@property(copy, nonatomic) NSIndexSet *styleSelector; // @synthesize styleSelector=_styleSelector;
- (id)initWithStyleSelector:(id)arg1 style:(id)arg2;	// IMP=0x000000000000d569

@end

