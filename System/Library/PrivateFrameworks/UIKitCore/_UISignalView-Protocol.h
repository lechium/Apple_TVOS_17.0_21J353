//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIColor;

@protocol _UISignalView <NSObject>
@property(copy, nonatomic) UIColor *activeColor;
@property(copy, nonatomic) UIColor *inactiveColor;
@property(nonatomic) long long signalMode;
@property(nonatomic) long long numberOfActiveBars;
@property(nonatomic) long long numberOfBars;
@property(nonatomic) long long sizeCategory;
- (id)initWithSizeCategory:(long long)arg1;
@end

