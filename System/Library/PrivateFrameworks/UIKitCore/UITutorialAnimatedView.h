//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CALayer, CAPackage;

__attribute__((visibility("hidden")))
@interface UITutorialAnimatedView : UIView
{
    CALayer *_packageLayer;	// 8 = 0x8
    long long _appearance;	// 16 = 0x10
    CAPackage *_package;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001ab6a2
@property(retain, nonatomic) CAPackage *package; // @synthesize package=_package;
@property(nonatomic) long long appearance; // @synthesize appearance=_appearance;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000001ab55e
- (void)_setPackage:(id)arg1;	// IMP=0x00000000001aad2a
- (id)initWithKeyboardAppearance:(long long)arg1;	// IMP=0x00000000001aac18

@end

