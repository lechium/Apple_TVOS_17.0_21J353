//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface SDUnlockSetupRequest : PBRequest
{
    NSData *_longTermKey;	// 8 = 0x8
    NSData *_ltkHash;	// 16 = 0x10
    unsigned int _sessionID;	// 24 = 0x18
    unsigned int _version;	// 28 = 0x1c
    _Bool _remoteNeedsLTK;	// 32 = 0x20
    struct {
        unsigned int sessionID:1;
        unsigned int version:1;
        unsigned int remoteNeedsLTK:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00200000000b9216
@property(nonatomic) _Bool remoteNeedsLTK; // @synthesize remoteNeedsLTK=_remoteNeedsLTK;
@property(retain, nonatomic) NSData *ltkHash; // @synthesize ltkHash=_ltkHash;
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b90d9
- (unsigned long long)hash;	// IMP=0x00100000000b9010
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b8ec9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b8dcd
- (void)copyTo:(id)arg1;	// IMP=0x00100000000b8d0a
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b8c3d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b8c30
- (id)dictionaryRepresentation;	// IMP=0x00100000000b875e
- (id)description;	// IMP=0x00100000000b86af
@property(nonatomic) _Bool hasRemoteNeedsLTK;
@property(readonly, nonatomic) _Bool hasLtkHash;
// Error: Property attributes should begin with the type ('T') attribute, property name: hasLongTermKey
// Property attributes: (null)

@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

