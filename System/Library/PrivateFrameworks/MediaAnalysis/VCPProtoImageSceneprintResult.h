//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VCPProtoImageSceneprintResult : PBCodable
{
    NSData *_sceneprintBlob;	// 8 = 0x8
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000007bf9e
- (void).cxx_destruct;	// IMP=0x0000000000081188
@property(retain, nonatomic) NSData *sceneprintBlob; // @synthesize sceneprintBlob=_sceneprintBlob;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008113f
- (unsigned long long)hash;	// IMP=0x0000000000081122
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000081092
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008101a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000080ff7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000080fda
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000080fcd
- (id)dictionaryRepresentation;	// IMP=0x0000000000080e28
- (id)description;	// IMP=0x0000000000080d79
- (id)exportToLegacyDictionary;	// IMP=0x000000000007c072

@end

