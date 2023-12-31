//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSError, NSString, TVImage;
@protocol TVHKImageLoadParams;

__attribute__((visibility("hidden")))
@interface TVHKImageLoadParamsOperation : TVHKAsynchronousOperation
{
    _Bool _cropToFit;	// 8 = 0x8
    TVImage *_image;	// 16 = 0x10
    unsigned long long _scalingResult;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    id <TVHKImageLoadParams> _params;	// 40 = 0x28
    struct CGSize _scaleToSize;	// 48 = 0x30
}

+ (id)new;	// IMP=0x00100000000a6a6c
- (void).cxx_destruct;	// IMP=0x00000000000a6ca0
@property(readonly, nonatomic) id <TVHKImageLoadParams> params; // @synthesize params=_params;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long scalingResult; // @synthesize scalingResult=_scalingResult;
@property(retain, nonatomic) TVImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) _Bool cropToFit; // @synthesize cropToFit=_cropToFit;
@property(readonly, nonatomic) struct CGSize scaleToSize; // @synthesize scaleToSize=_scaleToSize;
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x00000000000a6b0a
- (id)init;	// IMP=0x00000000000a6a9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

