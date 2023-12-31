//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface AMPMusicArtistNewContentResponse : PBCodable
{
    NSMutableArray *_artistContents;	// 8 = 0x8
    NSData *_model;	// 16 = 0x10
    NSString *_recoId;	// 24 = 0x18
}

+ (Class)artistContentType;	// IMP=0x00200000000df16e
- (void).cxx_destruct;	// IMP=0x00200000000df12c
@property(retain, nonatomic) NSData *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *recoId; // @synthesize recoId=_recoId;
@property(retain, nonatomic) NSMutableArray *artistContents; // @synthesize artistContents=_artistContents;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000def23
- (unsigned long long)hash;	// IMP=0x00100000000deeb6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000dedd6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000deb97
- (void)copyTo:(id)arg1;	// IMP=0x00100000000dea8e
- (void)writeTo:(id)arg1;	// IMP=0x00100000000de911
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000de723
- (id)dictionaryRepresentation;	// IMP=0x00100000000de49d
- (id)description;	// IMP=0x00100000000de3ee
@property(readonly, nonatomic) _Bool hasModel;
@property(readonly, nonatomic) _Bool hasRecoId;
- (id)artistContentAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000de3a7
- (unsigned long long)artistContentsCount;	// IMP=0x00100000000de38a
- (void)addArtistContent:(id)arg1;	// IMP=0x00100000000de320
- (void)clearArtistContents;	// IMP=0x00100000000de303

@end

