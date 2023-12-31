//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ChannelActivityUpdate : PBCodable
{
    unsigned long long _currentVersion;	// 8 = 0x8
    unsigned long long _prevVersion;	// 16 = 0x10
    NSData *_encryptedUpdatePayload;	// 24 = 0x18
    struct {
        unsigned int currentVersion:1;
        unsigned int prevVersion:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000573e5
@property(retain, nonatomic) NSData *encryptedUpdatePayload; // @synthesize encryptedUpdatePayload=_encryptedUpdatePayload;
@property(nonatomic) unsigned long long prevVersion; // @synthesize prevVersion=_prevVersion;
@property(nonatomic) unsigned long long currentVersion; // @synthesize currentVersion=_currentVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005731c
- (unsigned long long)hash;	// IMP=0x00000000000572b5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000571d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000057124
- (void)copyTo:(id)arg1;	// IMP=0x00000000000570a2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000057012
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000057005
- (id)dictionaryRepresentation;	// IMP=0x0000000000056c74
- (id)description;	// IMP=0x0000000000056bc5
@property(readonly, nonatomic) _Bool hasEncryptedUpdatePayload;
@property(nonatomic) _Bool hasPrevVersion;
@property(nonatomic) _Bool hasCurrentVersion;

@end

