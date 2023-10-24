//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class UICubicTimingParameters, UISpringTimingParameters;

@protocol UITimingCurveProvider <NSCoding, NSCopying>
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property(readonly, nonatomic) long long timingCurveType;
@end

