//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ATVLegacyContentKit/NSObject-Protocol.h>

@class TVLCarouselView;

@protocol TVLCarouselViewDelegate <NSObject>

@optional
- (void)carouselView:(TVLCarouselView *)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(TVLCarouselView *)arg1 didFocusItemAtIndex:(unsigned long long)arg2;
@end
