//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _MPCProtoRadioContentReferenceLibraryAlbumContentReference, _MPCProtoRadioContentReferenceLibraryArtistContentReference, _MPCProtoRadioContentReferenceLibraryItemContentReference, _MPCProtoRadioContentReferenceStoreContentReference;

__attribute__((visibility("hidden")))
@interface _MPCProtoRadioContentReference : PBCodable
{
    _MPCProtoRadioContentReferenceLibraryAlbumContentReference *_libraryAlbumContentReference;	// 8 = 0x8
    _MPCProtoRadioContentReferenceLibraryArtistContentReference *_libraryArtistContentReference;	// 16 = 0x10
    _MPCProtoRadioContentReferenceLibraryItemContentReference *_libraryItemContentReference;	// 24 = 0x18
    _MPCProtoRadioContentReferenceStoreContentReference *_storeContentReference;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000014a818
- (unsigned long long)hash;	// IMP=0x000000000014a794
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014a688
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014a59e
- (void)writeTo:(id)arg1;	// IMP=0x000000000014a507
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014a4fa
- (id)dictionaryRepresentation;	// IMP=0x000000000014a38d
- (id)description;	// IMP=0x000000000014a2de

@end

