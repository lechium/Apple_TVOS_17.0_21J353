//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSObject, NSString, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CNActionViewProtocol;

__attribute__((visibility("hidden")))
@interface CNActionView : UIView
{
    _Bool _disabled;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    NSObject<CNActionViewProtocol> *_actionDelegate;	// 40 = 0x28
    long long _style;	// 48 = 0x30
    UIView *_platterView;	// 56 = 0x38
    UIImageView *_imageView;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    NSArray *_activatedContstrants;	// 80 = 0x50
    UITapGestureRecognizer *_tapGestureRecognizer;	// 88 = 0x58
    UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 96 = 0x60
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x006000000004b9cf
- (void).cxx_destruct;	// IMP=0x000000000004cfdb
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *activatedContstrants; // @synthesize activatedContstrants=_activatedContstrants;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak NSObject<CNActionViewProtocol> *actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)handleLongPressGesture:(id)arg1;	// IMP=0x000000000004cdcb
- (void)handleTapGesture:(id)arg1;	// IMP=0x000000000004cd2c
- (void)updateLabelState;	// IMP=0x000000000004c9e6
- (void)updateImageViewState;	// IMP=0x000000000004c8d6
- (void)updatePlatterViewState;	// IMP=0x000000000004c888
- (void)updateConstraints;	// IMP=0x000000000004bad0
- (void)didMoveToWindow;	// IMP=0x000000000004ba8f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004b8d6

@end

