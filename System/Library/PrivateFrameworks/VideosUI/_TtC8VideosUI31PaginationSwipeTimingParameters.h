//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UICubicTimingParameters, UISpringTimingParameters;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI31PaginationSwipeTimingParameters : NSObject
{
    MISSING_TYPE *swipeAnimationType;	// 8 = 0x8
}

- (id)init;	// IMP=0x00000000007237fa
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000723777
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000072372c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007236a5
@property(nonatomic, readonly) UISpringTimingParameters *springTimingParameters;
@property(nonatomic, readonly) UICubicTimingParameters *cubicTimingParameters;
@property(nonatomic, readonly) long long timingCurveType;

@end

