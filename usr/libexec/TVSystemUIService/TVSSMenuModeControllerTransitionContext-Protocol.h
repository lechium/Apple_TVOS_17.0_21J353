//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSNumber, TVSSMenuModeBannerContext;

@protocol TVSSMenuModeControllerTransitionContext <NSObject>
@property(readonly, nonatomic) NSNumber *interactivePresentationReason;
@property(readonly, nonatomic) TVSSMenuModeBannerContext *previousBannerContext;
@property(readonly, nonatomic) unsigned long long previousMenuMode;
@end
