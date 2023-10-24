//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKImageElement.h>

@class TVImageProxy, UIImage;

@interface IKImageElement (TVMLKitAdditions)
- (id)tv_urlWithLayout:(id)arg1;	// IMP=0x0030000000062b4a
- (id)tv_urlWithSize:(struct CGSize)arg1 focusSizeIncrease:(double)arg2;	// IMP=0x0030000000062a94
- (id)tv_urlWithSize:(struct CGSize)arg1 focusSizeIncrease:(double)arg2 centerGrowth:(_Bool)arg3 cropCode:(id)arg4;	// IMP=0x003000000006285f
@property(readonly, nonatomic) long long tv_imageType;
@property(readonly, nonatomic) struct CGSize tv_imageScaleToSize;
@property(readonly, nonatomic) TVImageProxy *tv_imageProxy;
- (id)tv_imageProxyWithLayout:(id)arg1;	// IMP=0x00300000000623ba
@property(readonly, nonatomic) UIImage *tv_symbolImage;
@property(readonly, nonatomic) _Bool tv_isSymbol;
@property(readonly, nonatomic) UIImage *tv_resourceImage;
@property(readonly, nonatomic) _Bool tv_isResource;
- (id)tv_associatedViewElement;	// IMP=0x00300000000d1dbc
@end

