//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MessageProtection/NSCopying-Protocol.h>

@class NGMPBP256Key, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NGMPBFullDeviceIdentity : PBCodable <NSCopying>
{
    NSMutableArray *_prekeys;	// 8 = 0x8
    NGMPBP256Key *_signingKey;	// 16 = 0x10
}

+ (Class)prekeysType;	// IMP=0x0010000000018e96
- (void).cxx_destruct;	// IMP=0x0000000000019aa8
@property(retain, nonatomic) NSMutableArray *prekeys; // @synthesize prekeys=_prekeys;
@property(retain, nonatomic) NGMPBP256Key *signingKey; // @synthesize signingKey=_signingKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000198d4
- (unsigned long long)hash;	// IMP=0x0000000000019887
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000197cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000195f7
- (void)copyTo:(id)arg1;	// IMP=0x000000000001951d
- (void)writeTo:(id)arg1;	// IMP=0x00000000000193c0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000193b3
- (id)dictionaryRepresentation;	// IMP=0x0000000000018f56
- (id)description;	// IMP=0x0000000000018ea7
- (id)prekeysAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000018e79
- (unsigned long long)prekeysCount;	// IMP=0x0000000000018e5c
- (void)addPrekeys:(id)arg1;	// IMP=0x0000000000018df2
- (void)clearPrekeys;	// IMP=0x0000000000018dd5

@end

