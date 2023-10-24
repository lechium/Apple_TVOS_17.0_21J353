//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, UIImage, VUIAppContext;

__attribute__((visibility("hidden")))
@interface VUIActionOpenWebLink
{
    NSDictionary *_contextData;	// 8 = 0x8
    VUIAppContext *_appContext;	// 16 = 0x10
    NSString *_webUrl;	// 24 = 0x18
    NSDictionary *_metrics;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_desc;	// 48 = 0x30
    UIImage *_coverArtImage;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000018ac8
@property(retain, nonatomic) UIImage *coverArtImage; // @synthesize coverArtImage=_coverArtImage;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(nonatomic) __weak VUIAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSDictionary *contextData; // @synthesize contextData=_contextData;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000189b7
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;	// IMP=0x000000000001881d

@end
