//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CUIPattern : NSObject
{
    struct CGImage *_patternImage;	// 8 = 0x8
    struct CGPattern *_pattern;	// 16 = 0x10
    double _alpha;	// 24 = 0x18
}

@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (struct CGImage *)patternImageRef;	// IMP=0x0000000000012e59
- (id)description;	// IMP=0x0000000000012de0
- (void)setPatternInContext:(struct CGContext *)arg1;	// IMP=0x0000000000012d2d
- (struct CGPattern *)pattern;	// IMP=0x0000000000012d03
- (struct CGPattern *)_newPattern;	// IMP=0x0000000000012c23
- (void)dealloc;	// IMP=0x0000000000012bd3
- (id)initWithImageRef:(struct CGImage *)arg1;	// IMP=0x0000000000012b76

@end
