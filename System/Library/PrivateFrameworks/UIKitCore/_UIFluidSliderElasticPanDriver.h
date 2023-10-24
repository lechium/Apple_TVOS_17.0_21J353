//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, UIPanGestureRecognizer, UIView;
@protocol _UIFluidSliderDirectDrivingDelegate, _UIFluidSliderDrivable;

__attribute__((visibility("hidden")))
@interface _UIFluidSliderElasticPanDriver : NSObject
{
    MISSING_TYPE *animatedValue;	// 8 = 0x8
    MISSING_TYPE *initialValue;	// 16 = 0x10
    MISSING_TYPE *state;	// 24 = 0x18
    MISSING_TYPE *initialStretchAmount;	// 32 = 0x20
    MISSING_TYPE *drivable;	// 40 = 0x28
    MISSING_TYPE *panGestureRecognizer;	// 48 = 0x30
    MISSING_TYPE *trackAxis;	// 56 = 0x38
    MISSING_TYPE *stretchAmount;	// 64 = 0x40
    MISSING_TYPE *delegate;	// 72 = 0x48
    MISSING_TYPE *name;	// 80 = 0x50
    MISSING_TYPE *view;	// 96 = 0x60
    MISSING_TYPE *enabled;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000003a170
- (void)handleGesture:(id)arg1;	// IMP=0x0000000000039ed0
@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(nonatomic) __weak UIView *view; // @synthesize view;
- (void)cancel;	// IMP=0x00000000000390d0
- (void)stop;	// IMP=0x0000000000039040
- (id)init;	// IMP=0x0000000000039020
@property(nonatomic, copy) NSString *name;
@property(nonatomic) __weak id <_UIFluidSliderDirectDrivingDelegate> delegate; // @synthesize delegate;
@property(nonatomic) double stretchAmount; // @synthesize stretchAmount;
@property(nonatomic) unsigned long long trackAxis; // @synthesize trackAxis;
@property(nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer;
@property(nonatomic) __weak id <_UIFluidSliderDrivable> drivable; // @synthesize drivable;

@end
