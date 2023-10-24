//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFImage, SFPunchout, SFText;

@protocol SFMediaItem <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFImage *contentAdvisoryImage;
@property(copy, nonatomic) NSString *contentAdvisory;
@property(copy, nonatomic) NSArray *buyOptions;
@property(copy, nonatomic) NSArray *subtitleCustomLineBreaking;
@property(retain, nonatomic) SFPunchout *punchout;
@property(copy, nonatomic) NSString *reviewText;
@property(retain, nonatomic) SFImage *overlayImage;
@property(retain, nonatomic) SFImage *reviewGlyph;
@property(retain, nonatomic) SFImage *thumbnail;
@property(retain, nonatomic) SFText *subtitleText;
@property(copy, nonatomic) NSString *title;
@end

