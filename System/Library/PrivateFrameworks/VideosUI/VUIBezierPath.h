//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIBezierPath.h>

__attribute__((visibility("hidden")))
@interface VUIBezierPath : UIBezierPath
{
}

+ (id)vui_bezierPathWithRoundedRect:(struct CGRect)arg1 radius:(double)arg2;	// IMP=0x006000000015aa47
+ (id)vui_bezierPathWithArcCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(_Bool)arg5;	// IMP=0x006000000015aa2b
@property(nonatomic) struct CGPath *vuiCGPath;

@end

