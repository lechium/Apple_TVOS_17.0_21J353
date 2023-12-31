//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextRecognition/NSCopying-Protocol.h>
#import <TextRecognition/NSSecureCoding-Protocol.h>

@protocol CRQuad <NSCopying, NSSecureCoding>
@property(readonly, nonatomic) double area;
@property(readonly, nonatomic) double baselineAngle;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) struct CGRect boundingBox;
@property(readonly, nonatomic) struct CGPoint midPoint;
@property(readonly, nonatomic) struct CGPoint bottomLeft;
@property(readonly, nonatomic) struct CGPoint bottomRight;
@property(readonly, nonatomic) struct CGPoint topRight;
@property(readonly, nonatomic) struct CGPoint topLeft;
- (id)rotated180;
@end

