//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BannerKit/BNTemplateItemProviding-Protocol.h>

@class UIButtonConfiguration;
@protocol BNImageProviding;

@protocol BNTemplateViewProviding <BNTemplateItemProviding>
@property(readonly, nonatomic) UIButtonConfiguration *templateItemButtonConfiguration;
@property(readonly, nonatomic) id <BNImageProviding> templateItemImageProvider;
@end

