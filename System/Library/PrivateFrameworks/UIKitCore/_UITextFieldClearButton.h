//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@protocol _UITextFieldClearButtonImageProviding;

__attribute__((visibility("hidden")))
@interface _UITextFieldClearButton : UIButton
{
    id <_UITextFieldClearButtonImageProviding> _imageProvider;	// 152 = 0x98
}

+ (Class)_visualProviderClass;	// IMP=0x0060000000d2c194
- (void).cxx_destruct;	// IMP=0x0000000000d2c2b8
@property(nonatomic) __weak id <_UITextFieldClearButtonImageProviding> imageProvider; // @synthesize imageProvider=_imageProvider;
- (id)_defaultImageForState:(unsigned long long)arg1 withConfiguration:(id)arg2;	// IMP=0x0000000000d2c1ad
- (_Bool)_isModernButton;	// IMP=0x0000000000d2c1a5

@end

