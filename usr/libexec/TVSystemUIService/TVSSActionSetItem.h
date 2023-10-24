//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFActionSetItem, NSArray, NSError, NSNumber, NSString, UIImage;

@interface TVSSActionSetItem : NSObject
{
    HFActionSetItem *_actionSetItem;	// 8 = 0x8
    NSError *_latestError;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000029430
@property(retain, nonatomic) NSError *latestError; // @synthesize latestError=_latestError;
@property(readonly, nonatomic) HFActionSetItem *actionSetItem; // @synthesize actionSetItem=_actionSetItem;
@property(readonly, nonatomic) NSString *contentText1;
@property(readonly, nonatomic) UIImage *contentImage;
@property(readonly, nonatomic) NSString *contentTitle;
- (void)updateWithHFItem:(id)arg1;	// IMP=0x0010000000029030
- (id)initWithHFItem:(id)arg1;	// IMP=0x0010000000028f70

// Remaining properties
@property(readonly, nonatomic) NSArray *contentChildIdentifiers;
@property(readonly, nonatomic) UIImage *contentImage1;
@property(readonly, nonatomic) UIImage *contentImage2;
@property(readonly, nonatomic) UIImage *contentImage3;
@property(readonly, nonatomic) UIImage *contentImage4;
@property(nonatomic) _Bool contentIsDisabled;
@property(nonatomic) _Bool contentIsSelected;
@property(retain, nonatomic) NSNumber *contentPercentage;
@property(readonly, nonatomic) NSString *contentText2;
@property(readonly, nonatomic) NSString *contentText3;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
