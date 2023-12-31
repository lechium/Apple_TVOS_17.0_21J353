//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIStructuredThemeStore.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore
{
    NSString *_identifier;	// 96 = 0x60
    NSMutableDictionary *_memoryStore;	// 104 = 0x68
    NSMutableDictionary *_nameIdentifierStore;	// 112 = 0x70
    int _maxNameIdentifier;	// 120 = 0x78
    NSMutableDictionary *_apperanceNameIdentifierStore;	// 128 = 0x80
    int _maxApperanceNameIdentifier;	// 136 = 0x88
    NSMutableDictionary *_renditionInfoStore;	// 144 = 0x90
}

- (id)appearances;	// IMP=0x000000000004d378
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;	// IMP=0x000000000004d1cd
- (unsigned short)appearanceIdentifierForName:(id)arg1;	// IMP=0x000000000004d169
- (id)defaultAppearanceName;	// IMP=0x000000000004d141
- (long long)deploymentPlatform;	// IMP=0x000000000004d137
- (id)deploymentPlatformString;	// IMP=0x000000000004d125
- (id)renditionInfoForIdentifier:(unsigned short)arg1;	// IMP=0x000000000004d09e
- (void)clearRenditionCache;	// IMP=0x000000000004cfd8
- (void)removeImagesNamed:(id)arg1;	// IMP=0x000000000004cf3e
- (void)removeImageNamed:(id)arg1 withDescription:(id)arg2;	// IMP=0x000000000004cdb6
- (void)insertCGImage:(struct CGImage *)arg1 withName:(id)arg2 andDescription:(id)arg3;	// IMP=0x000000000004cb56
- (void)_removeRenditionInfoForImageWithName:(id)arg1;	// IMP=0x000000000004cb08
- (void)_addRenditionInfoForImageWithName:(id)arg1 andKey:(struct _renditionkeytoken *)arg2;	// IMP=0x000000000004c9c2
- (struct _renditionkeytoken *)renditionKeyForAssetWithName:(id)arg1 withDescription:(id)arg2;	// IMP=0x000000000004c66d
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1 usingKeySignature:(id)arg2;	// IMP=0x000000000004c5c7
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000004c539
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000004c520
- (id)imagesWithName:(id)arg1;	// IMP=0x000000000004c376
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1;	// IMP=0x000000000004c287
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint *)arg2;	// IMP=0x000000000004c275
- (id)path;	// IMP=0x000000000004c245
- (id)themeStore;	// IMP=0x000000000004c23c
- (id)allImageNames;	// IMP=0x000000000004c1de
- (const struct _renditionkeyfmt *)keyFormat;	// IMP=0x000000000004c136
- (_Bool)usesCUISystemThemeRenditionKey;	// IMP=0x000000000004c12e
- (long long)maximumRenditionKeyTokenCount;	// IMP=0x000000000004c123
- (void)dealloc;	// IMP=0x000000000004c0a1
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000004bff3

@end

