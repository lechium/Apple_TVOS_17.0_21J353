//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICMusicLibraryContentMetadataDescriptor, MISSING_TYPE, NSDate;

@interface ICMusicLibraryContentItemSnapshot : NSObject
{
    _Bool _hasArtistAndAlbumData;	// 8 = 0x8
    float _userRating;	// 12 = 0xc
    ICMusicLibraryContentMetadataDescriptor *_songMetadataDescriptor;	// 16 = 0x10
    ICMusicLibraryContentMetadataDescriptor *_artistMetadataDescriptor;	// 24 = 0x18
    ICMusicLibraryContentMetadataDescriptor *_albumMetadataDescriptor;	// 32 = 0x20
    MISSING_TYPE *_playCount;	// 40 = 0x28
    long long _skipCount;	// 48 = 0x30
    NSDate *_lastPlayedDate;	// 56 = 0x38
    NSDate *_libraryAddedDate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000747da
@property(nonatomic) _Bool hasArtistAndAlbumData; // @synthesize hasArtistAndAlbumData=_hasArtistAndAlbumData;
@property(copy, nonatomic) NSDate *libraryAddedDate; // @synthesize libraryAddedDate=_libraryAddedDate;
@property(copy, nonatomic) NSDate *lastPlayedDate; // @synthesize lastPlayedDate=_lastPlayedDate;
@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(nonatomic) long long skipCount; // @synthesize skipCount=_skipCount;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) ICMusicLibraryContentMetadataDescriptor *albumMetadataDescriptor; // @synthesize albumMetadataDescriptor=_albumMetadataDescriptor;
@property(retain, nonatomic) ICMusicLibraryContentMetadataDescriptor *artistMetadataDescriptor; // @synthesize artistMetadataDescriptor=_artistMetadataDescriptor;
@property(retain, nonatomic) ICMusicLibraryContentMetadataDescriptor *songMetadataDescriptor; // @synthesize songMetadataDescriptor=_songMetadataDescriptor;
- (id)debugDescription;	// IMP=0x00100000000745ef
- (_Bool)isValid;	// IMP=0x00100000000745e6
- (id)initWithSong:(id)arg1;	// IMP=0x0010000000074244

@end

