//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ML3ImportOperation.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ML3SetCloudIDImportOperation : ML3ImportOperation
{
    NSArray *_trackInfo;	// 8 = 0x8
    NSArray *_playlistInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012f21a
- (_Bool)_importPlaylistsUsingImportSession:(void *)arg1;	// IMP=0x000000000012ec27
- (_Bool)_importTracksUsingImportSession:(void *)arg1;	// IMP=0x000000000012e163
- (_Bool)_performImportWithTransaction:(id)arg1;	// IMP=0x000000000012d3dd
- (void)main;	// IMP=0x000000000012d1d6
- (unsigned long long)importSource;	// IMP=0x000000000012d1cb

@end

