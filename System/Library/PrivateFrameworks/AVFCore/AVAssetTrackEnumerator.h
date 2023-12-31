//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetTrackEnumerator : NSEnumerator
{
    NSString *_mediaType;	// 8 = 0x8
    NSArray *_mediaCharacteristics;	// 16 = 0x10
    NSEnumerator *_enumerator;	// 24 = 0x18
}

+ (id)trackEnumeratorWithAsset:(id)arg1;	// IMP=0x006000000002b166
- (id)nextObject;	// IMP=0x000000000002b376
- (void)setMediaCharacteristics:(id)arg1;	// IMP=0x000000000002b33d
- (void)setMediaType:(id)arg1;	// IMP=0x000000000002b304
- (void)dealloc;	// IMP=0x000000000002b29e
- (id)initWithAsset:(id)arg1 mediaCharacteristics:(id)arg2;	// IMP=0x000000000002b25f
- (id)initWithAsset:(id)arg1 mediaType:(id)arg2;	// IMP=0x000000000002b220
- (id)initWithAsset:(id)arg1;	// IMP=0x000000000002b195

@end

