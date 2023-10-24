//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (UIKitAdditions)
+ (id)_systemTextSearchTextAttributesForStyle:(unsigned long long)arg1;	// IMP=0x0050000000c9d16c
+ (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;	// IMP=0x0050000000d4bb0f
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0050000000d4ba0f
+ (id)_objectWithItemProviderFileURL:(id)arg1 typeIdentifier:(id)arg2 isInPlace:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0050000000d4b5c3
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0050000000d4b5a7
+ (id)_objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 userInfo:(id)arg3 error:(id *)arg4;	// IMP=0x0050000000d4ad9c
+ (id)_objectWithRTFDAtURL:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;	// IMP=0x0050000000d4abfd
+ (long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)arg1;	// IMP=0x0050000000d4ab87
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x0050000000d4aa39
- (id)_ui_glyphImageViewsScale:(double)arg1 outImageRect:(struct CGRect *)arg2 outLineRect:(struct CGRect *)arg3 outBaselineOffset:(double *)arg4;	// IMP=0x0010000000092c97
- (id)_ui_attributedStringWithOriginalFontAttributes;	// IMP=0x0010000000092be5
- (long long)_ui_resolvedWritingDirectionForUserInterfaceLayoutDirection:(long long)arg1;	// IMP=0x0010000000092b32
- (long long)_ui_resolvedWritingDirection;	// IMP=0x0010000000092af7
- (long long)_ui_resolvedTextAlignmentForParagraphStyle:(id)arg1;	// IMP=0x0010000000092a88
- (long long)_ui_resolvedTextAlignmentForUserInterfaceLayoutDirection:(long long)arg1;	// IMP=0x00100000000929e5
- (long long)_ui_resolvedTextAlignmentForParagraphStyle:(id)arg1 userInterfaceLayoutDirection:(long long)arg2;	// IMP=0x001000000009295d
- (long long)_ui_resolvedTextAlignment;	// IMP=0x0010000000092922
- (id)_ui_attributedStringAdjustedToTraitCollection:(id)arg1;	// IMP=0x00100000000938eb
- (id)_ui_rtfDataError:(id *)arg1;	// IMP=0x0010000000093817
- (id)_ui_rtfdFileWrapperError:(id *)arg1;	// IMP=0x0010000000093743
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d4bedf
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d4bbe3
- (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;	// IMP=0x0010000000d4bb9e
- (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0010000000d4bb85
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000d4b964
@end

