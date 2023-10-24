//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString, UIImage;

@protocol TVSPContentProviding <NSObject>

@optional
@property(readonly, nonatomic) NSArray *contentChildIdentifiers;
@property(retain, nonatomic) NSNumber *contentPercentage;
@property(nonatomic) _Bool contentIsDisabled;
@property(nonatomic) _Bool contentIsSelected;
@property(readonly, nonatomic) UIImage *contentImage4;
@property(readonly, nonatomic) UIImage *contentImage3;
@property(readonly, nonatomic) UIImage *contentImage2;
@property(readonly, nonatomic) UIImage *contentImage1;
@property(readonly, nonatomic) NSString *contentText3;
@property(readonly, nonatomic) NSString *contentText2;
@property(readonly, nonatomic) NSString *contentText1;
@property(readonly, nonatomic) UIImage *contentImage;
@property(readonly, nonatomic) NSString *contentTitle;
@end

