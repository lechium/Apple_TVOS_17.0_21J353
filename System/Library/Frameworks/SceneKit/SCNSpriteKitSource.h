//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNImageSource.h"

@class SKScene;

__attribute__((visibility("hidden")))
@interface SCNSpriteKitSource : SCNImageSource
{
    SKScene *_scene;	// 8 = 0x8
}

@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (void)dealloc;	// IMP=0x0000000000068fee
- (_Bool)isOpaque;	// IMP=0x0000000000068f82
- (id)textureSource;	// IMP=0x0000000000068f2c

@end

