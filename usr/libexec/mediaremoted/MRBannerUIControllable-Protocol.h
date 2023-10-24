//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MRUIControllable-Protocol.h"

@class NSString;
@protocol MRBannerRequestRepresentable;

@protocol MRBannerUIControllable <MRUIControllable>
- (void)dismissAllBanners;
- (void)dismissBannerWithIdentifier:(NSString *)arg1;
- (void)postBannerRequest:(id <MRBannerRequestRepresentable>)arg1;
@end

