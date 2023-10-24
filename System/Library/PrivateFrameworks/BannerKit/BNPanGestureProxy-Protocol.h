//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BannerKit/NSObject-Protocol.h>

@protocol UICoordinateSpace;

@protocol BNPanGestureProxy <NSObject>
@property(readonly, nonatomic) _Bool didCrossDefaultThreshold;
@property(copy, nonatomic) CDUnknownBlockType actionHandler;
@property(readonly, nonatomic) long long state;
- (struct CGPoint)velocityInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (struct CGPoint)visualTranslationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (struct CGPoint)translationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (struct CGPoint)locationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
@end

