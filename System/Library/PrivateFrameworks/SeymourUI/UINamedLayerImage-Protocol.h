//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeymourUI/NSObject-Protocol.h>

@class NSString, UIImage;
@protocol UINamedLayerContentProvider;

@protocol UINamedLayerImage <NSObject>
@property(readonly, nonatomic) int blendMode;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSString *name;

@optional
@property(readonly, nonatomic) id <UINamedLayerContentProvider> contentProvider;
@property(nonatomic) _Bool fixedFrame;
- (UIImage *)imageObj;
@end

