//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIStackedImageShadowImageKey : NSObject
{
    double _shadowRadius;	// 8 = 0x8
    double _cornerRadius;	// 16 = 0x10
    _Bool _isContinuousCorner;	// 24 = 0x18
    double _white;	// 32 = 0x20
    double _alpha;	// 40 = 0x28
}

+ (id)keyWithShadowRadius:(double)arg1 cornerRadius:(double)arg2 isContinuousCorner:(_Bool)arg3 white:(double)arg4 alpha:(double)arg5;	// IMP=0x006000000141f0ed
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000141f279
- (unsigned long long)hash;	// IMP=0x000000000141f151

@end

