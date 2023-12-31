//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPMediaItemArtwork.h"

@class MPArtworkCatalog;

__attribute__((visibility("hidden")))
@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork
{
    MPArtworkCatalog *_catalog;	// 8 = 0x8
    struct CGRect _bounds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011d464
@property(readonly, nonatomic) MPArtworkCatalog *artworkCatalog;
- (struct CGRect)bounds;	// IMP=0x000000000011d2ff
- (id)initWithArtworkCatalog:(id)arg1;	// IMP=0x000000000011d2eb
- (id)initWithArtworkCatalog:(id)arg1 allowsNetworking:(_Bool)arg2;	// IMP=0x000000000011d217

@end

