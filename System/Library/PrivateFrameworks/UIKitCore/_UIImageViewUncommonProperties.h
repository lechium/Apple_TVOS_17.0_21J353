//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImageSymbolConfiguration, _UIImageCIImageRenderer;

__attribute__((visibility("hidden")))
@interface _UIImageViewUncommonProperties : NSObject
{
    unsigned int _drawMode;	// 8 = 0x8
    UIImageSymbolConfiguration *_overridingSymbolConfiguration;	// 16 = 0x10
    long long _defaultRenderingMode;	// 24 = 0x18
    unsigned long long _templateImageRenderingEffects;	// 32 = 0x20
    _UIImageCIImageRenderer *_CIRenderer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000d638f0
@property(nonatomic) unsigned int drawMode; // @synthesize drawMode=_drawMode;
@property(retain, nonatomic) _UIImageCIImageRenderer *CIRenderer; // @synthesize CIRenderer=_CIRenderer;
@property(nonatomic) unsigned long long templateImageRenderingEffects; // @synthesize templateImageRenderingEffects=_templateImageRenderingEffects;
@property(nonatomic) long long defaultRenderingMode; // @synthesize defaultRenderingMode=_defaultRenderingMode;
@property(retain, nonatomic) UIImageSymbolConfiguration *overridingSymbolConfiguration; // @synthesize overridingSymbolConfiguration=_overridingSymbolConfiguration;

@end

