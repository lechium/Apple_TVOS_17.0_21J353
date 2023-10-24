//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, VUIMediaEntityFetchRequest;

__attribute__((visibility("hidden")))
@interface VUIMediaEntitiesDataSource
{
    _Bool _shouldAutoFetchArtworkInfoDictionaries;	// 8 = 0x8
    _Bool _shouldPauseAutoFetchingArtworkInfoDictionaries;	// 9 = 0x9
    VUIMediaEntityFetchRequest *_fetchRequest;	// 16 = 0x10
    NSArray *_mediaEntities;	// 24 = 0x18
    NSArray *_grouping;	// 32 = 0x20
    NSDictionary *_artworkInfoDictionaryByPurchaseID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000019d84c
@property(retain, nonatomic) NSDictionary *artworkInfoDictionaryByPurchaseID; // @synthesize artworkInfoDictionaryByPurchaseID=_artworkInfoDictionaryByPurchaseID;
@property(nonatomic) _Bool shouldPauseAutoFetchingArtworkInfoDictionaries; // @synthesize shouldPauseAutoFetchingArtworkInfoDictionaries=_shouldPauseAutoFetchingArtworkInfoDictionaries;
@property(nonatomic) _Bool shouldAutoFetchArtworkInfoDictionaries; // @synthesize shouldAutoFetchArtworkInfoDictionaries=_shouldAutoFetchArtworkInfoDictionaries;
@property(retain, nonatomic) NSArray *grouping; // @synthesize grouping=_grouping;
@property(retain, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
@property(retain, nonatomic) VUIMediaEntityFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
- (id)initWithFetchRequest:(id)arg1;	// IMP=0x000000000019d6f2

@end

