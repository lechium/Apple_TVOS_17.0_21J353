//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVImageDecorator.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HBTopShelfLabeledContentGradientImageDecorator : TVImageDecorator
{
    double _progress;	// 8 = 0x8
    NSNumber *_playbackPercentage;	// 16 = 0x10
    struct CGSize _scaleToSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000486d3
@property(nonatomic) struct CGSize scaleToSize; // @synthesize scaleToSize=_scaleToSize;
@property(retain, nonatomic) NSNumber *playbackPercentage; // @synthesize playbackPercentage=_playbackPercentage;
- (id)decoratorIdentifier;	// IMP=0x0000000000048629
- (struct CGSize)expectedSize;	// IMP=0x0000000000048617
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;	// IMP=0x0000000000047f1c

@end

