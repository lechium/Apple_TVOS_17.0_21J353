//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIImage, _UIPageIndicatorStoreObject;
@protocol _UIPageIndicatorStoreDelegate;

__attribute__((visibility("hidden")))
@interface _UIPageIndicatorStore : NSObject
{
    CDStruct_d0d7e7b7 _cache;	// 8 = 0x8
    CDStruct_d0d7e7b7 _expandedCache;	// 144 = 0x90
    UIImage *_defaultImage;	// 280 = 0x118
    _UIPageIndicatorStoreObject *_defaultObject;	// 288 = 0x120
    id <_UIPageIndicatorStoreDelegate> _delegate;	// 296 = 0x128
    UIImage *_preferredImage;	// 304 = 0x130
    UIImage *_preferredActiveImage;	// 312 = 0x138
    double _indicatorSpacing;	// 320 = 0x140
    long long _direction;	// 328 = 0x148
    NSMutableArray *_store;	// 336 = 0x150
}

- (void).cxx_destruct;	// IMP=0x0000000000c964e2
@property(retain, nonatomic) NSMutableArray *store; // @synthesize store=_store;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) double indicatorSpacing; // @synthesize indicatorSpacing=_indicatorSpacing;
@property(retain, nonatomic) UIImage *preferredActiveImage; // @synthesize preferredActiveImage=_preferredActiveImage;
@property(retain, nonatomic) UIImage *preferredImage; // @synthesize preferredImage=_preferredImage;
@property(nonatomic) __weak id <_UIPageIndicatorStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)validateDataStore;	// IMP=0x0000000000c96431
- (long long)_objectIndexForPage:(long long)arg1 lower:(long long)arg2 upper:(long long)arg3;	// IMP=0x0000000000c96241
- (long long)objectIndexForPage:(long long)arg1;	// IMP=0x0000000000c96136
- (void)_resetStore;	// IMP=0x0000000000c9601e
- (void)_removeImageForPage:(long long)arg1 active:(_Bool)arg2;	// IMP=0x0000000000c95ca3
- (void)_insertImage:(id)arg1 forPage:(long long)arg2 active:(_Bool)arg3;	// IMP=0x0000000000c95b90
- (double)indicatorPositionForContinuousPage:(double)arg1 expandedIndicatorPage:(long long)arg2;	// IMP=0x0000000000c957a2
- (struct CGSize)_contentSizeForIndicatorsInRange:(struct _NSRange)arg1 hasExpandedActiveIndicator:(_Bool)arg2;	// IMP=0x0000000000c9529c
- (struct CGSize)minimumContentSizeForIndicatorsInRange:(struct _NSRange)arg1 hasExpandedActiveIndicator:(_Bool)arg2;	// IMP=0x0000000000c95211
- (struct CGSize)contentSizeForNumberOfPages:(long long)arg1 hasExpandedActiveIndicator:(_Bool)arg2;	// IMP=0x0000000000c95179
- (struct CGSize)defaultIndicatorSize;	// IMP=0x0000000000c94eb2
- (void)_updateImage:(id)arg1 forPage:(long long)arg2 active:(_Bool)arg3;	// IMP=0x0000000000c94e4d
- (void)updateActiveImage:(id)arg1 forPage:(long long)arg2;	// IMP=0x0000000000c94e35
- (void)updateImage:(id)arg1 forPage:(long long)arg2;	// IMP=0x0000000000c94e20
- (void)updateStoreForNumberOfPages:(long long)arg1;	// IMP=0x0000000000c94aeb
- (struct CGSize)_sizeForMaximumContentSizeFittingLength:(double)arg1 hasExpandedActiveIndicator:(_Bool)arg2;	// IMP=0x0000000000c9450a
- (struct CGSize)sizeForMaximumContentSizeFittingLength:(double)arg1 hasExpandedActiveIndicator:(_Bool)arg2;	// IMP=0x0000000000c94485
- (long long)numberOfVisibleIndicatorsForStartIndex:(long long)arg1 fittingLength:(double)arg2 hasExpandedActiveIndicator:(_Bool)arg3;	// IMP=0x0000000000c940ea
- (struct CGSize)_indicatorSizeForObject:(id)arg1;	// IMP=0x0000000000c93e52
- (struct CGSize)indicatorSizeForPage:(long long)arg1;	// IMP=0x0000000000c93db1
- (void)invalidateLayoutCache;	// IMP=0x0000000000c93c54
- (struct CGSize)resolvedIndicatorLayoutSizeForPage:(long long)arg1;	// IMP=0x0000000000c93b60
- (id)activeIndicatorImageForPage:(long long)arg1;	// IMP=0x0000000000c93aaf
- (id)customActiveIndicatorImageForPage:(long long)arg1;	// IMP=0x0000000000c93a1f
- (id)indicatorImageForPage:(long long)arg1;	// IMP=0x0000000000c939bd
- (id)customIndicatorImageForPage:(long long)arg1;	// IMP=0x0000000000c9392d
- (id)_defaultIndicatorImage;	// IMP=0x0000000000c938cf
@property(readonly, nonatomic) UIImage *indicatorImage;
@property(readonly, nonatomic) long long numberOfPages;
- (id)init;	// IMP=0x0000000000c9376d

@end

