//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoFragmentedMessage : PBCodable
{
    unsigned long long _totalFragments;	// 8 = 0x8
    unsigned long long _totalSize;	// 16 = 0x10
    NSData *_fragmentData;	// 24 = 0x18
    unsigned int _fragmentNumber;	// 32 = 0x20
    unsigned int _routerVersion;	// 36 = 0x24
    struct {
        unsigned int totalFragments:1;
        unsigned int totalSize:1;
        unsigned int fragmentNumber:1;
        unsigned int routerVersion:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000057cfa7
@property(nonatomic) unsigned int routerVersion; // @synthesize routerVersion=_routerVersion;
@property(nonatomic) unsigned long long totalFragments; // @synthesize totalFragments=_totalFragments;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) unsigned int fragmentNumber; // @synthesize fragmentNumber=_fragmentNumber;
@property(retain, nonatomic) NSData *fragmentData; // @synthesize fragmentData=_fragmentData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000057ce88
- (unsigned long long)hash;	// IMP=0x000000000057cde4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000057ccc1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000057cbd4
- (void)copyTo:(id)arg1;	// IMP=0x000000000057cb1c
- (void)writeTo:(id)arg1;	// IMP=0x000000000057ca4c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000057c69e
- (id)dictionaryRepresentation;	// IMP=0x000000000057c4d2
- (id)description;	// IMP=0x000000000057c423
@property(nonatomic) _Bool hasRouterVersion;
@property(nonatomic) _Bool hasTotalFragments;
@property(nonatomic) _Bool hasTotalSize;
@property(nonatomic) _Bool hasFragmentNumber;
@property(readonly, nonatomic) _Bool hasFragmentData;

@end
