//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _MKCompassViewStyleParameter : NSObject
{
    NSString *_imageNamePart;	// 8 = 0x8
    UIColor *_textColor;	// 16 = 0x10
    UIColor *_backgroundColor;	// 24 = 0x18
    UIColor *_shadowColor;	// 32 = 0x20
    UIColor *_borderColor;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000188083
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *imageNamePart; // @synthesize imageNamePart=_imageNamePart;

@end

