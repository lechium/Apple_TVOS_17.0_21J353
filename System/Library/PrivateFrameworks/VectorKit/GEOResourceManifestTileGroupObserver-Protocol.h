//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/NSObject-Protocol.h>

@class GEOActiveTileGroup, GEOResourceManifestManager;

@protocol GEOResourceManifestTileGroupObserver <NSObject>

@optional
- (void)resourceManifestManager:(GEOResourceManifestManager *)arg1 didChangeActiveTileGroup:(GEOActiveTileGroup *)arg2 fromOldTileGroup:(GEOActiveTileGroup *)arg3;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg1;
@end

