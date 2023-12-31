//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitCameraStreamIDSConnSetupParameters : PBCodable
{
    unsigned int _connectionComplete;	// 8 = 0x8
    unsigned int _connectionRequested;	// 12 = 0xc
    struct {
        unsigned int connectionComplete:1;
        unsigned int connectionRequested:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int connectionComplete; // @synthesize connectionComplete=_connectionComplete;
@property(nonatomic) unsigned int connectionRequested; // @synthesize connectionRequested=_connectionRequested;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000425a8e
- (unsigned long long)hash;	// IMP=0x0000000000425a4a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000425997
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000042591a
- (void)copyTo:(id)arg1;	// IMP=0x00000000004258c0
- (void)writeTo:(id)arg1;	// IMP=0x000000000042584d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000425840
- (id)dictionaryRepresentation;	// IMP=0x0000000000425747
- (id)description;	// IMP=0x0000000000425698
@property(nonatomic) _Bool hasConnectionComplete;
@property(nonatomic) _Bool hasConnectionRequested;

@end

