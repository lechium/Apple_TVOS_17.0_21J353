//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary, TVCKDataClient;

__attribute__((visibility("hidden")))
@interface TVCKCloudQueryHandler : NSObject
{
    ML3MusicLibrary *mlLibrary;	// 8 = 0x8
    TVCKDataClient *cloudDataClient;	// 16 = 0x10
}

+ (id)_artworkIdentifierWithArtworkToken:(id)arg1 andAlbumID:(id)arg2;	// IMP=0x001000000004f9c6
+ (id)artworkIdentifierForMLTrack:(id)arg1;	// IMP=0x001000000004f96d
+ (id)artworkTokenForMLTrack:(id)arg1;	// IMP=0x001000000004f8e9
+ (id)mlArtworkTrackForAlbumOrAlbumArtist:(id)arg1 isAlbumArtistID:(_Bool)arg2;	// IMP=0x001000000004f553
+ (id)mlArtworkTrackForAlbumArtistID:(id)arg1;	// IMP=0x001000000004f53c
+ (id)mlArtworkTrackForAlbumID:(id)arg1;	// IMP=0x001000000004f528
+ (id)mlPropertyForATVProperty:(id)arg1;	// IMP=0x001000000004f520
+ (id)mlPredicatePropertyForATVProperty:(id)arg1;	// IMP=0x001000000004f518
+ (id)mlQueryPropertyForATVProperty:(id)arg1;	// IMP=0x001000000004f510
@property(retain, nonatomic) TVCKDataClient *cloudDataClient; // @synthesize cloudDataClient;
@property(retain, nonatomic) ML3MusicLibrary *mlLibrary; // @synthesize mlLibrary;
- (void)handleQuery:(id)arg1 withContext:(void *)arg2;	// IMP=0x000000000004f50a
- (unsigned int)mlMediaTypeForATVMediaType:(id)arg1;	// IMP=0x000000000004f45a
- (int)mlComparisonForATVOperator:(long long)arg1;	// IMP=0x000000000004f43a
- (id)mlPropertiesForQuery:(id)arg1;	// IMP=0x000000000004f295
- (id)predicateFromPredicates:(id)arg1 withOperator:(int)arg2;	// IMP=0x000000000004f203
- (id)predicateForCompoundFilter:(id)arg1;	// IMP=0x000000000004f01e
- (id)predicateForFilter:(id)arg1;	// IMP=0x000000000004eb01
- (id)predicateFromATVFilters:(id)arg1 queryType:(long long)arg2;	// IMP=0x000000000004e61b
- (void)dealloc;	// IMP=0x000000000004e5c4
- (id)initWithLibrary:(id)arg1 cloudDataClient:(id)arg2;	// IMP=0x000000000004e54f

@end
