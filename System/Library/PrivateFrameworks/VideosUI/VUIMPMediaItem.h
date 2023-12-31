//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIMediaItem.h"

@class MPMediaItem, NSObject, NSString;
@protocol VUIMediaEntityAssetController;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItem : VUIMediaItem
{
    NSString *_coverArtImageIdentifier;	// 8 = 0x8
    NSString *_previewFrameImageIdentifier;	// 16 = 0x10
    MPMediaItem *_mediaItem;	// 24 = 0x18
    NSObject<VUIMediaEntityAssetController> *_assetController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000250dc0
@property(retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController; // @synthesize assetController=_assetController;
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;	// IMP=0x0000000000250d28
- (id)mediaPlayerMediaItem;	// IMP=0x0000000000250d16
- (id)rentalExpirationDate;	// IMP=0x0000000000250c60
- (id)credits;	// IMP=0x0000000000250baa
- (id)studio;	// IMP=0x0000000000250af4
- (id)showCanonicalID;	// IMP=0x0000000000250ae7
- (id)seasonCanonicalID;	// IMP=0x0000000000250ada
- (id)seasonIdentifier;	// IMP=0x0000000000250a24
- (id)extrasURL;	// IMP=0x000000000025096e
- (id)previewFrameImageIdentifier;	// IMP=0x0000000000250919
- (id)isPlayable;	// IMP=0x0000000000250863
- (id)assetType;	// IMP=0x00000000002507ad
- (id)_valueForPropertyDescriptor:(id)arg1;	// IMP=0x00000000002506c7
- (id)showIdentifier;	// IMP=0x0000000000250537
- (id)playedState;	// IMP=0x0000000000250481
- (id)coverArtImageIdentifier;	// IMP=0x0000000000250406
- (id)contentRating;	// IMP=0x0000000000250350
- (id)HLSAudioCapability;	// IMP=0x000000000025029a
- (id)HLSColorCapability;	// IMP=0x00000000002501e4
- (id)HLSResolution;	// IMP=0x000000000025012e
- (id)audioCapability;	// IMP=0x0000000000250078
- (id)colorCapability;	// IMP=0x000000000024ffc2
- (id)resolution;	// IMP=0x000000000024ff0c
- (id)isLocal;	// IMP=0x000000000024fe51
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;	// IMP=0x000000000024fde2
- (id)initWithMediaLibrary:(id)arg1 mediaItem:(id)arg2 requestedProperties:(id)arg3;	// IMP=0x000000000024fc0f

@end

