//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/BLSHBacklightSceneHostEnvironment-Protocol.h>

@class BLSAlwaysOnDateSpecifier, BLSBacklightSceneVisualState;

@protocol BLSHBacklightSceneHostEnvironment_Private <BLSHBacklightSceneHostEnvironment>
@property(readonly) _Bool wantsStateUpdateToActiveAfterRemovalFromPresentation;
- (void)updateToVisualState:(BLSBacklightSceneVisualState *)arg1 presentationDateSpecifier:(BLSAlwaysOnDateSpecifier *)arg2;
@end

