//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FavoriteEntityResponseParserDelegate : NSObject
{
    _Bool _updateRequired;	// 8 = 0x8
    NSMutableDictionary *_addedItems;	// 16 = 0x10
    unsigned long long _currentCloudID;	// 24 = 0x18
    unsigned long long _currentAdamID;	// 32 = 0x20
    NSString *_currentGlobalPlaylistID;	// 40 = 0x28
    NSString *_currentAlbumCloudLibraryID;	// 48 = 0x30
    NSString *_currentArtistCloudLibraryID;	// 56 = 0x38
    long long _entityType;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000013010d
@property(readonly, nonatomic) long long entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) NSString *currentArtistCloudLibraryID; // @synthesize currentArtistCloudLibraryID=_currentArtistCloudLibraryID;
@property(readonly, nonatomic) NSString *currentAlbumCloudLibraryID; // @synthesize currentAlbumCloudLibraryID=_currentAlbumCloudLibraryID;
@property(readonly, nonatomic) NSString *currentGlobalPlaylistID; // @synthesize currentGlobalPlaylistID=_currentGlobalPlaylistID;
@property(readonly, nonatomic) unsigned long long currentAdamID; // @synthesize currentAdamID=_currentAdamID;
@property(readonly, nonatomic) unsigned long long currentCloudID; // @synthesize currentCloudID=_currentCloudID;
@property(readonly, nonatomic) _Bool updateRequired; // @synthesize updateRequired=_updateRequired;
@property(readonly, nonatomic) NSMutableDictionary *addedItems; // @synthesize addedItems=_addedItems;
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;	// IMP=0x001000000012ff4a
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x001000000012fd17
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x001000000012fcc3
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x001000000012fc9f
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x001000000012fc2f
- (id)initWithEntityType:(long long)arg1;	// IMP=0x001000000012fbbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

