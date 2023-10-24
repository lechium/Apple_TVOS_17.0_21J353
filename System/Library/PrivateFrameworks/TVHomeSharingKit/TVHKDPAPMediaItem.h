//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKMediaItem.h"

@class NSArray, NSString, TVHKMediaEntityType;

__attribute__((visibility("hidden")))
@interface TVHKDPAPMediaItem : TVHKMediaItem
{
    NSString *_imageIdentifier;	// 8 = 0x8
    TVHKMediaEntityType *_type;	// 16 = 0x10
    NSArray *_faces;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000027dd3
- (id)dimensions;	// IMP=0x0000000000027c91
- (id)faces;	// IMP=0x000000000002794f
- (id)imageIdentifier;	// IMP=0x0000000000027808
- (id)type;	// IMP=0x00000000000276c9
- (id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3;	// IMP=0x000000000002761d
- (id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4;	// IMP=0x00000000000275ae

@end

