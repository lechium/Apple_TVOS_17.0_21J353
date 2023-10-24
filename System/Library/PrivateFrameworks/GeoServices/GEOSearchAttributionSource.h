//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionSource : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _attributionRequirements;	// 16 = 0x10
    CDStruct_95bda58d _suppressAttributionLogos;	// 40 = 0x28
    NSString *_appAdamID;	// 64 = 0x40
    NSMutableArray *_attributionApps;	// 72 = 0x48
    NSMutableArray *_localizedAttributions;	// 80 = 0x50
    NSString *_sourceIdentifier;	// 88 = 0x58
    NSMutableArray *_supportedComponentActions;	// 96 = 0x60
    NSString *_webBaseActionURL;	// 104 = 0x68
    unsigned int _readerMarkPos;	// 112 = 0x70
    unsigned int _readerMarkLength;	// 116 = 0x74
    struct os_unfair_lock_s _readerLock;	// 120 = 0x78
    unsigned int _sourceVersion;	// 124 = 0x7c
    _Bool _enforceAppStore;	// 128 = 0x80
    _Bool _requiresAttributionInPhotoViewerHeader;	// 129 = 0x81
    struct {
        unsigned int has_enforceAppStore:1;
        unsigned int has_requiresAttributionInPhotoViewerHeader:1;
        unsigned int read_attributionRequirements:1;
        unsigned int read_suppressAttributionLogos:1;
        unsigned int read_appAdamID:1;
        unsigned int read_attributionApps:1;
        unsigned int read_localizedAttributions:1;
        unsigned int read_sourceIdentifier:1;
        unsigned int read_supportedComponentActions:1;
        unsigned int read_webBaseActionURL:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 132 = 0x84
}

- (void).cxx_destruct;	// IMP=0x00000000010cff79
- (unsigned long long)hash;	// IMP=0x00000000010cfe19
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010cfbda
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010cf532
- (void)writeTo:(id)arg1;	// IMP=0x00000000010ceecc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010ceebd
- (id)jsonRepresentation;	// IMP=0x00000000010ceeae
- (id)dictionaryRepresentation;	// IMP=0x00000000010ce4b3
- (id)description;	// IMP=0x00000000010ce404
- (void)dealloc;	// IMP=0x00000000010cc777
- (id)initWithData:(id)arg1;	// IMP=0x00000000010cc71b
- (id)init;	// IMP=0x00000000010cc6bf

@end

