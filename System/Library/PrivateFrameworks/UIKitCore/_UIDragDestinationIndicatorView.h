//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface _UIDragDestinationIndicatorView : UIView
{
    _Bool _isSourceList;	// 128 = 0x80
    NSIndexPath *_currentIndexPath;	// 136 = 0x88
    double _scaleFactor;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000118c14c
@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) _Bool isSourceList; // @synthesize isSourceList=_isSourceList;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000118bdda
- (void)positionHorizontallyCenteredInFrame:(struct CGRect)arg1;	// IMP=0x000000000118bd3c
- (void)positionOnCellFrame:(struct CGRect)arg1 above:(_Bool)arg2;	// IMP=0x000000000118bcb8
- (void)positionVerticallyCenteredInFrame:(struct CGRect)arg1;	// IMP=0x000000000118bbfe
- (id)initWithSourceListStyle:(_Bool)arg1;	// IMP=0x000000000118bb32

@end

