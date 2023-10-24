//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBImage, _SFPBPunchout, _SFPBRichText;

@protocol _SFPBSocialMediaPostCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *footnote;
@property(copy, nonatomic) NSString *timestamp;
@property(retain, nonatomic) _SFPBImage *picture;
@property(retain, nonatomic) _SFPBRichText *post;
@property(retain, nonatomic) _SFPBImage *profilePicture;
@property(retain, nonatomic) _SFPBImage *verifiedGlyph;
@property(copy, nonatomic) NSString *handle;
@property(nonatomic) int nameMaxLines;
@property(nonatomic) _Bool nameNoWrap;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end

