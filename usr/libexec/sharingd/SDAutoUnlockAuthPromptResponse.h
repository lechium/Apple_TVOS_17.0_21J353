//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SDAutoUnlockAuthPromptResponse : PBCodable
{
    unsigned int _errorCode;	// 8 = 0x8
    NSData *_keyData;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    _Bool _needsImageData;	// 28 = 0x1c
    struct {
        unsigned int errorCode:1;
        unsigned int version:1;
        unsigned int needsImageData:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000028389
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool needsImageData; // @synthesize needsImageData=_needsImageData;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000028291
- (unsigned long long)hash;	// IMP=0x00100000000281fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000280e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000028010
- (void)copyTo:(id)arg1;	// IMP=0x0010000000027f6d
- (void)writeTo:(id)arg1;	// IMP=0x0010000000027ebd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000027eb0
- (id)dictionaryRepresentation;	// IMP=0x0010000000027a1d
- (id)description;	// IMP=0x001000000002796e
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasNeedsImageData;
@property(readonly, nonatomic) _Bool hasKeyData;
@property(nonatomic) _Bool hasVersion;

@end
